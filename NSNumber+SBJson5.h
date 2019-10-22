//
//  NSNumber+SBJson5.h
//  SBWallet
//
//  Created by Mike on 2019/10/21.
//  Copyright © 2019 XXXX科技公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static inline NSNumber * _Nullable strToNumber(char *str) {
    const char *str2 = str;
    char *target = malloc(strlen(str) + 1);
    int location = 0;
    
    if (*str2 == '-' || *str2 == '+') {
        target[location] = *str2;
        str2++;
        location++;
    }
    
    while (*str2 >= '0' && *str2 <= '9') {
        target[location] = *str2;
        str2++;
        location++;
    }
    
    int decimalPointCount = 0;
    if (*str2 == '.') {
        decimalPointCount++;
        target[location] = *str2;
        str2++;
        location++;
        
        while (*str2 >= '0' && *str2 <= '9') {
            target[location] = *str2;
            str2++;
            location++;
        }
    }
    
    if (*str2 == 'e' || *str2 == 'E') {
        target[location] = *str2;
        str2++;
        location++;
        
        if (*str2 == '-' || *str2 == '+') {
            target[location] = *str2;
            str2++;
            location++;
        }
        
        while (*str2 >= '0' && *str2 <= '9') {
            target[location] = *str2;
            str2++;
            location++;
        }
    }
    target[location] = '\0';
    location++;
    
    if (location > 1) {
        NSString *str3 = [NSString stringWithUTF8String:target];
        return [NSDecimalNumber decimalNumberWithString:str3];
    }
    return nil;
}

NS_ASSUME_NONNULL_END
