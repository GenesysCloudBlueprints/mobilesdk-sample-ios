
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/GenesysCloudCore-Swift.h>
//#import <GenesysCloudBold/BCUnavailableReason.h>
#import <GenesysCloud/AvailabilityResult.h>
#import <GenesysCloudMessenger/GenesysCloudMessenger-Swift.h>

/************************************************************/
// MARK: - ChatAvailabilityChecker
/************************************************************/

@interface ChatAvailabilityChecker : NSObject

+ (void)checkAvailability:(Account *)account
               completion:(void(^)(AvailabilityResult *result))completion;
+ (void)setMockedConfigurationLoader:(MessengerConfigurationLoader *)loader;
@end

