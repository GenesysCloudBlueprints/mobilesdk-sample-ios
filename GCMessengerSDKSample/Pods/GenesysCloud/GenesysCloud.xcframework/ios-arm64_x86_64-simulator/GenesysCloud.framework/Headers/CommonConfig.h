
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/CustomFont.h>
#import <GenesysCloud/ConfigStructures.h>
#import <GenesysCloud/UIColor+Utility.h>

NS_ASSUME_NONNULL_BEGIN

@interface CommonConfig : NSObject <TextConfig, BackgroundConfig>

/**
 Chat View Background Color
 */
@property (copy, nonatomic) UIColor * _Nullable backgroundColor;

/**
 Chat View Background Image
 */
@property (strong, nonatomic) UIImage * _Nullable backgroundImage;

/**
 Chat Text Color
 */
@property (copy, nonatomic) UIColor * _Nullable textColor;

/**
 Chat Custom Font.
 */
@property (copy, nonatomic) CustomFont * _Nullable customFont;

/**
 Chat Text Timestamp Color
 */
@property (copy, nonatomic) UIColor * _Nullable timestampColor;

/**
 Chat Timestamp Custom Font.
 */
@property (strong, nonatomic) CustomFont * _Nullable timestampCustomFont;

@end

NS_ASSUME_NONNULL_END
