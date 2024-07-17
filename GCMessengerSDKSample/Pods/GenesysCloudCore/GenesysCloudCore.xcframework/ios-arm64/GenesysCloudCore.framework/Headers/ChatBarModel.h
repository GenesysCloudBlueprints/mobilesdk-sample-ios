
// GenesysCloudCore version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface ChatBarModel : NSObject

/**
 * @brief The name of the operator to be displayed.
 */
@property(nonatomic, copy) NSString *name;

/**
 * @brief The image URL of the operator.
 */
@property(nonatomic, copy) NSString *imageUrl;

/**
 * @brief The end chat button title.
 */
@property(nonatomic, copy) NSString *endChatBtnTitle;

/**
 * @brief Whether or not to show the userTranscript button.
 */
@property (nonatomic) BOOL shouldPresentUserTranscriptBtn;

@end
