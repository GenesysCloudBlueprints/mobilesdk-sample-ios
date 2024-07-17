
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/InfoViewConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface InfoView : UIView
@property (nonatomic) InfoViewConfiguration *config;
@property (nonatomic, copy) NSString *text;
@end

NS_ASSUME_NONNULL_END
