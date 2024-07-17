
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/QuickOptionConfiguration.h>
#import <GenesysCloud/MessageConfiguration.h>
//#import "CarouselConfiguration.h"

/************************************************************/
// MARK: - IncomingBotConfiguration
/************************************************************/

@interface IncomingBotConfiguration : IncomingMessageConfiguration
/**
Quick Option Configuration
*/
@property (strong, nonatomic, readonly) QuickOptionConfiguration *quickOptionConfig;

/**
 Carousel Configuration
 */
//@property (strong, nonatomic, readonly) CarouselConfiguration *carouselConfig;
@end
