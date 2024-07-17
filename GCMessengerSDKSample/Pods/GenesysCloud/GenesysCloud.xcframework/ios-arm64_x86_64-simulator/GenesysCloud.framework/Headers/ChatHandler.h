
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/StorableChatElement.h>
#import <GenesysCloud/LocalChatElement.h>
#import <GenesysCloud/ChatEventHandler.h>
#import <GenesysCloud/ChatControllerDelegate.h>
#import <GenesysCloud/ChatElementDelegate.h>
#import <GenesysCloud/ChatConfiguration.h>

@protocol ChatHandler;

/************************************************************/
// MARK: - ChatHandlerDelegate
/************************************************************/

@protocol ChatHandlerDelegate <NSObject>


// ToDo: these functions:
// presentStatement,
// presentStatements,
// presentFeedbackStatement,
// didSelectChannel,
// updateStatus,
// updateElement,
// postChat
// should be review after the legacy code is removed, becuase the UI refresh can be synchronious,
// no need for them, unless they require
// asynchronious actions on UI
/**
 Present Chat Element.

 @param statement Chat element that is going to be presented.
 */
- (void)presentStatement:(id<StorableChatElement> _Nonnull)statement;

- (void)presentStatements:(NSArray<id<StorableChatElement>> *_Nonnull)statements isPrecedingStatements:(BOOL)isPrecedingStatements;

/**
 Present Feedback Chat Element.

 @param statement Chat element that is going to be presented.
 */
- (void)presentFeedbackStatement:(id<StorableChatElement> _Nonnull)statement;


/**
 Did Select Channel.

 @param params contains the selected channel data.
 */
- (void)didSelectChannel:(NSDictionary *_Nonnull)params;

/**
Read text using TTS.

@param text text that is going to be read.
*/
- (void)readText:(NSString *_Nullable)text;

- (void)loadingIndicator:(BOOL)isActive;

/**
 Update chat status (chat lifecycle)
 
 @param status chat status
 @param element chat element
 */
- (void)updateStatus:(StatementStatus)status element:(id<StorableChatElement> _Nonnull)element;

- (void)updateElement:(id<StorableChatElement>_Nonnull)element originalId:(NSString *_Nonnull)elementId;

/**
 Event handler
 
 @param state chat state 
 @param params any params
 */
- (void)eventWithState:(ChatState)state withParams:(NSDictionary *_Nullable)params;
- (void)postChat:(NSDictionary *_Nullable)postChatInfo;
- (void)reloadConfigurationForChatHandler:(id<ChatHandler> _Nonnull)chatHandler;
- (void)reloadAutoCompleteForChatHandler:(id<ChatHandler> _Nonnull)chatHandler;
- (void)resetChatUIWithCompletionHandler:(void(^_Nonnull)(void))completionHandler;


/**
 Message sending error 
 */
- (void)didFailWithError:(GCError *_Nullable)error;
@end

/************************************************************/
// MARK: - ChatHandlerProvider
/************************************************************/

@protocol ChatHandlerProvider <NSObject>
- (void)didEndChat:(id<ChatHandler> _Nullable)chatHandler;
- (MessageConfiguration *_Nonnull)configurationForType:(ChatElementType)type;
- (void)didCreateChat;
- (void)didRegisterToProtocols;
- (void)didFailChatWithError:(GCError *_Nullable)error;

@property (nonatomic, readonly) ChatConfiguration *_Nonnull configuration;
@end

@class ConfigurationRepository;
@class BaseChatEngine;

/************************************************************/
// MARK: - ChatHandler
/************************************************************/

@protocol ChatHandler <ChatEventHandler>

/**
 The chat handler delegate.
 */
@property(nonatomic, weak) id<ChatHandlerDelegate> _Nullable delegate;

/**
 The language code.
 */
@property (nonatomic, copy, readonly) NSString * _Nullable kbLanguage;

/**
 The chat controller delegate.
 */
@property(nonatomic, weak) id<ChatControllerDelegate> _Nullable chatControllerDelegate;

/**
 The chat handlet provider.
 */
@property(nonatomic, weak) id<ChatHandlerProvider> _Nullable chatHandlerProvider;

/**
 File upload feature indicator.
 */
@property(nonatomic, readonly) BOOL isFileTransferEnabled;

/**
  Auto complete feature indicator.
*/
@property(nonatomic, readonly) BOOL isAutocompleteEnabled;

/**
 Chat Bar indicator.
*/
@property(nonatomic, readonly) BOOL shouldPresentChatBar;

/**
  Text To Speech feature indicator.
*/
@property(nonatomic, readonly) BOOL isTextToSpeechEnabled;
//
/**
 Whole Brandind Dictionary
 */
@property (nonatomic, copy, readonly) NSDictionary<NSString *, NSString *> * _Nullable branding;

/**
 Configuration Repository
*/
@property (nonatomic, strong) ConfigurationRepository *_Nullable configurationRepository;

// change to protocol
@property (nonatomic, strong) BaseChatEngine *_Nullable chatEngine;

/**
 Start chat implementation.
 */
- (void)startChat:(Account *_Nonnull)account;

/**
 Reconnect chat implementation.
 */
- (void)reconnectChat;

/**
 End chat implementation.
 * @param forceClose - fast ending current chat
 */
- (void)endChat:(BOOL)forceClose;

/**
 Post chat element implementation.
 */
- (void)postStatement:(id<StorableChatElement> _Nonnull)statement;

/**
 Indicates if typing was started.
 */
- (void)didStartTyping:(BOOL)isTyping;

@optional
/**
 The history provider.
 */
@property(nonatomic, weak) id<ChatElementDelegate> _Nullable chatElementDelegate;

- (void)postTranscript:(NSString *_Nullable)transcript;

/**
 Post article implementation.
 */
- (void)postArticle:(LocalChatElement *_Nullable)article;

/**
 The current chat state.
 */
@property(nonatomic) ChatState currentChatState;

@required
/**
The placeholder text.
*/
@property(nonatomic, copy, readonly) NSString *_Nonnull placeholderText;

/**
Updating custom attributes
*/
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *_Nonnull)customAttributes;

@end
