
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/MessageConfiguration.h>
#import <GenesysCloudBot/ReadoutMessage.h>

/************************************************************/
// MARK: - ChatElementType
/************************************************************/

/**
 An StatementScope is an enum of different agent states
 */
typedef NS_ENUM(NSInteger, ChatElementType) {
    /// Chat element type is local
    OutgoingElement = 0,
    /// Chat element type is remote
    IncomingBotElement = 1,
    /// Chat element type is remote
    IncomingLiveElement = 2,
    /// Chat element type is carousel
    CarouselElement = 3,
    /// Chat element type is remote
    SystemMessageElement = 4,
    /// Chat element type is remote
    IncomingBotMultipleSelectionElement = 5
};

typedef NS_ENUM(NSInteger, ChatElementSource) {
    ChatElementSourceDynamic = 0,
    ChatElementSourceHistory = 1
};

/************************************************************/
// MARK: - ChatElement
/************************************************************/

@protocol ChatElement <NSObject>

/************************************************************/
// MARK: - Properties
/************************************************************/

/**
 The DB id
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull elementId;

/**
 The type of chat element
 */
@property (nonatomic, readonly) ChatElementType type;

/**
 The creation date of chat item.
 */
@property (nonatomic, copy, readonly) NSDate * _Nonnull timestamp;

/**
 The content of chat item (text, json..)
 */
@property (nonatomic, copy) NSString * _Nullable text;  

/**
 The element source type.
 */
@property (nonatomic, assign) ChatElementSource source;

/**
The UI element configuration.
 */
@property (nonatomic, strong) MessageConfiguration * _Nonnull configuration;

/**
 If set to `YES` element will be removed according to relevant event.
 */
@property (nonatomic) BOOL removable;

/**
The readout item with body, persistent options and quick options that are about to be readout to the user.
 */
@property (nonatomic, strong) id <ReadoutMessage> _Nullable readoutMessage;
@end
