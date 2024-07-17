
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@interface BLDDynamicColor : NSObject
@property (nonatomic, copy) UIColor *light;
@property (nonatomic, copy) UIColor *dark;
@end

@interface UIColor (Utility)
/**
 Return representaiton in hex
 */
- (NSString *)bld_RepresentInHex;

+ (UIColor *)bld_hex:(NSString *)hexCode;

- (BLDDynamicColor *)bld_ExportColors;

/**
Return system background color
*/
+ (UIColor *)bld_SystemModeBackgroundColor;

/**
Return system text color
*/
+ (UIColor *)bld_SystemModeTextColor;
@end
