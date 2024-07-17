
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import "ConversationSettings.h"
#import "InstantFeedbackData.h"

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - ConversationSettings+InstantFeedback
/************************************************************/

@interface ConversationSettings (InstantFeedback)
@property (nonatomic, assign, readonly) BOOL instantFeedbackEnabled;
@end

NS_ASSUME_NONNULL_END
