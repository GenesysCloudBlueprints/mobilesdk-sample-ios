
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - NRComponentConfiguration
/************************************************************/

@interface NRComponentConfiguration : NSObject
- (instancetype)initWithParams:(NSDictionary *)params;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) NSDictionary *params;
@property (nonatomic, copy, readonly) NSString *inJson;
@end

NS_ASSUME_NONNULL_END
