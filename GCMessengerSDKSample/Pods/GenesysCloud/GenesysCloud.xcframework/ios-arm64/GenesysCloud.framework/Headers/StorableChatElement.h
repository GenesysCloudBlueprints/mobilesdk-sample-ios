
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/StatementScope.h>
#import <GenesysCloud/ChatElement.h>
#import <GenesysCloud/StatementStatus.h>

/************************************************************/
// MARK: - StorableChatElement
/************************************************************/

typedef NS_ENUM(NSInteger, FeedbackStatus) {
    FeedbackStatusLike = 0,
    FeedbackStatusDislike = 1,
    FeedbackStatusDefault = 2
};

@protocol StorableChatElement <ChatElement>

/************************************************************/
// MARK: - Properties
/************************************************************/

/**
 The chat elements converted to bytes
 */
@property (nonatomic, copy, readonly) NSString *storageKey;
/**
 The current agent type.
 */
@property (nonatomic, assign) StatementScope statementScope;
/**
 The current statement status.
 */
@property (nonatomic, assign) StatementStatus status;

@property (nonatomic, readonly) FeedbackStatus feedbackStatus;

@property (nonatomic, copy) NSString *articleId;
@end
