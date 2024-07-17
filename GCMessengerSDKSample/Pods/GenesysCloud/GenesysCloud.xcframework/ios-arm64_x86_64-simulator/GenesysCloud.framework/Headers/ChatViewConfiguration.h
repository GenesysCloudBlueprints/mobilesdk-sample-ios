
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/DateStampConfiguration.h>
#import <GenesysCloud/UIColor+Utility.h>
#import <GenesysCloud/MessageConfiguration.h>

/************************************************************/
// MARK: - ChatViewConfiguration
/************************************************************/

@interface ChatViewConfiguration : NSObject<BackgroundConfig, MessageConfigurationDateHandler>


/**
 Chat Element Date Stamp Font
 */
@property (strong, nonatomic) DateStampConfiguration * dateStamp;
@property (strong, nonatomic) DateStampConfiguration * timeStamp;
/**
 Chat hyperlink Color
 */
@property (copy, nonatomic) UIColor * hyperlinkColor;

@property (copy, nonatomic) UIColor * errorViewTextColor;
@property (copy, nonatomic) UIColor * errorViewBackgroundColor;


@property (copy, nonatomic) UIImage * errorViewImage;
@property (copy, nonatomic) UIImage * errorViewButtonImage;


@property (nonatomic) CGSize avatarSize;
@end
