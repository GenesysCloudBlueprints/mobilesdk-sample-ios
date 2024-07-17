
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <GenesysCloud/CustomFont.h>

NS_ASSUME_NONNULL_BEGIN

@interface BasicConfiguration : NSObject
/// Text Font.
@property (strong, nonatomic) CustomFont *customFont;

/// View Background Color.
@property (nonatomic, copy) UIColor * _Nullable backgroundColor;
/// Text Color.
@property (nonatomic, copy) UIColor * _Nullable textColor;
@end

@interface TextConfiguration : BasicConfiguration
@end

NS_ASSUME_NONNULL_END
