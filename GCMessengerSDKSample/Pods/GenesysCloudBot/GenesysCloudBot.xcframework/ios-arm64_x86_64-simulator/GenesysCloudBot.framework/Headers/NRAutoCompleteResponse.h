
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import "NRBaseResponse.h"
#import <UIKit/UIKit.h>

@interface NRAutoCompleteResponse : NRBaseResponse
@property (nonatomic, readonly, copy) NSArray<NSAttributedString *> *suggestions;
@property (nonatomic, readonly, copy) NSArray<NSDictionary<NSString*, id<NSCopying>> *> *suggestionsVerbose;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) NSString *query;
@end
