
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@interface AvailabilityResult : NSObject
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) UnavailableReason reason;
@property (nonatomic, copy, nullable) NSError *error;
@property (nonatomic, copy) NSString *departmentId;
@property (nonatomic, copy) NSString *apiKey;
@end

NS_ASSUME_NONNULL_END
