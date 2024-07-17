
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ContentChatElement.h>
#import <GenesysCloudBot/NRConversationalResponse.h>

/**
 An RemoteMessageType is an enum of different Message Types
 */
typedef NS_ENUM(NSInteger, RemoteMessageType) {
    RemoteMessageTypDefault = 0,
    RemoteMessageTypWelcomeMessage = 1,
    RemoteMessageTypFAQ = 2,
    RemoteMessageConversationDisconnect = 3
};

@interface RemoteChatElement: ContentChatElement
/**
 The remote message type
 */
@property (nonatomic, readonly) RemoteMessageType remoteMessageType;

/**
 If set to `YES` element will be replaced with auto message if exist.
 */
@property (nonatomic) BOOL stickable;

- (instancetype)initWithRespone:(NRConversationalResponse *)response statementScope:(StatementScope)statementScope;
@end
