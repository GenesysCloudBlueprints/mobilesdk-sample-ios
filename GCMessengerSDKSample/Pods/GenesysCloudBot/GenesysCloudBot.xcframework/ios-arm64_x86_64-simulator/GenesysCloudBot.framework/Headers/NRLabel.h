
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import "NRFAQGroup.h"

@interface NRLabel : NRFAQGroup <NSCopying>
@property (nonatomic, copy) NSString *labelId;
@property (nonatomic, copy, readonly) NSString *context;
@property (nonatomic, copy, readonly) NSString *labelName;
@property (nonatomic, copy, readonly) NSURL *iconUrl;
@property (nonatomic) NSData *iconData;
@end
