
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/StorableChatElement.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

/************************************************************/
// MARK: - ContentChatElement
/************************************************************/

extern NSString *const ChatElementDesignBotIncoming;
extern NSString *const ChatElementDesignBotOutgoing;
extern NSString *const ChatElementDesignSystem;
extern NSString *const ChatElementDesignCustomIncoming;
extern NSString *const ChatElementDesignCustomOutgoing;


/**
 A ContentChatElement is a wrapper used to define the type of chat (local, remote)
 */
@interface ContentChatElement : NSObject <StorableChatElement>
@property (nonatomic, copy) NSString *articleId;
@property (strong) NSArray<DownloadableFile *> *files;
@property (nonatomic, assign) BOOL isPreceding;
// Enable set internally (replace readonly with readwrite)
@property (nonatomic, copy) NSString *design;
@property (nonatomic, copy) NSDateFormatter *dateFormatter;
@property (nonatomic, copy) NSDateFormatter *timeFormatter;
@property (nonatomic, readonly) NSDictionary *highValueChatChannel;

- (instancetype)initWithType:(ChatElementType)type content:(NSString*)content;
- (instancetype)initWithType:(ChatElementType)type content:(NSString*)content elementId:(NSString *)elementId;
- (void)updateStateFromChatStatementState:(ChatStatementStates)newStatus;

@end
