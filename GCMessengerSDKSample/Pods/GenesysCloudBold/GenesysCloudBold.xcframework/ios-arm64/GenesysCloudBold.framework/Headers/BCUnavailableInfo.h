
// GenesysCloudBold version number: v1.9.0
//
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@interface BCUnavailableInfo : NSObject
@property (nonatomic, copy) NSString *message;
@property (nonatomic) UnavailableReason reason;

- (instancetype)initWithMessage:(NSString *)message
                         reason:(UnavailableReason)reason;
@end

NS_ASSUME_NONNULL_END
