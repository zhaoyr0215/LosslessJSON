//
//  NSData+SBJson5.h
//  SBWallet
//
//  Created by Mike on 2019/10/21.
//  Copyright © 2019 XXXX科技公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (SBJson5)

/// NSArray或者NSDictionary或者nil
@property (nonatomic, strong, readonly) id _Nullable jsonObject;

@end

NS_ASSUME_NONNULL_END
