//
//  NSData+SBJson5.m
//  SBWallet
//
//  Created by Mike on 2019/10/21.
//  Copyright © 2019 XXXX科技公司. All rights reserved.
//

#import "NSData+SBJson5.h"
#import "SBJson5Parser.h"

@implementation NSData (SBJson5)

- (id)jsonObject {
    __block id object;
    SBJson5Parser *parser = [SBJson5Parser parserWithBlock:^(id item, BOOL *stop) {
        object = item;
    } errorHandler:nil];
    [parser parse:self];
    return object;
}

@end
