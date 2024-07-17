
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NRBaseResponse.h"

@interface NRSessionResponse : NRBaseResponse
@property (nonatomic, copy, readonly) NSString *sessionId;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, copy, readonly) NSNumber *status;
@end
