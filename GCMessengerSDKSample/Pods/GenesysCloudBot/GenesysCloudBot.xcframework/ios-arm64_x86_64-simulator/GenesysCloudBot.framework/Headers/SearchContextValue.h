
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NRBaseResponse.h"

@interface SearchContextValue : NRBaseResponse
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger flags;
@property (nonatomic, copy, readonly) NSNumber *id;
@property (nonatomic, copy, readonly) NSString *selectionText;
@end
