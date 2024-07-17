
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NRBaseResponse : NSObject
- (instancetype)initWithParams:(NSDictionary *)params;
- (void)inflate:(NSDictionary *)params;
@end
