
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NRChanneling.h"
#import "NRQueryResult.h"


@interface NSDictionary (BLDParsed)
/// Parse to wrapped.
@property (nonatomic, readonly, copy) NSString *bld_Wrapped;
/// Parse to query.
@property (nonatomic, readonly, copy) NSString *bld_AsQuery;
/// Parse to json.
@property (nonatomic, readonly, copy) NSString *bld_InJSON;

/// Parse auto complete.
/// @param font the font.
- (NSArray<NSAttributedString *> *)bld_ParseAutoComplete:(UIFont *)font;
@end
