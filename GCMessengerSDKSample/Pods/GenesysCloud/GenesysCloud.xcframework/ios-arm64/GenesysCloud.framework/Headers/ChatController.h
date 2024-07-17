
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatControllerDelegate.h>
#import <GenesysCloud/ChatElementDelegate.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloud/ChatConfiguration.h>
#import <GenesysCloud/ViewConfiguration.h>
#import <GenesysCloud/AvailabilityResult.h>

/************************************************************/
// MARK: - ChatController
/************************************************************/

@interface ChatController : NSObject

/************************************************************/
// MARK: - Properties
/************************************************************/

@property (nonatomic, strong) id<ViewConfiguration> _Nullable viewConfigurationSource;

/**
 The History Provider For Controlling Chat History.
 */
@property (nonatomic, weak) id<ChatElementDelegate> _Nullable chatElementDelegate;

/**
 The Live Chat Handler (Not Bold, 3rd party lib)
 */
//@property (nonatomic, strong) HandOver * _Nullable handOver;

/**
 The Chat View Configuration.
 */
@property (nonatomic, strong) ChatConfiguration * _Nonnull viewConfiguration;

/************************************************************/
// MARK: - Delegates
/************************************************************/

/**
 Chat Controller Delegate
 */
@property (nonatomic, weak) id<ChatControllerDelegate> _Nullable delegate;

/************************************************************/
// MARK: - Initializer
/************************************************************/

- (instancetype _Nonnull )initWithAccount:(Account *_Nonnull)account;

/************************************************************/
// MARK: - Functions
/************************************************************/

/**
 Ends current chat handler.
 */
- (void)endChat:(BOOL)forceClose;

/**
 Reconnect current chat handler.
 */
- (void)reconnectChat;

/**
 Teminates the chat controller and all active chats.
 */
- (void)terminate;

/**
 The availability of the chat.
 */
+ (void)checkAvailability:(Account *_Nonnull)account
               completion:(void(^_Nonnull)(AvailabilityResult * _Nonnull result))completion;

/**
Updating custom attributes
*/
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *_Nonnull)customAttributes;

@end
