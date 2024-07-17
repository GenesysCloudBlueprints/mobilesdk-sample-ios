
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/StorableChatElement.h>
#import <GenesysCloud/ApplicationHandler.h>

@protocol ChatControllerDelegate <ApplicationHandler>

@optional

/************************************************************/
// MARK: - Functions
/************************************************************/

- (void)shouldPresentChatViewController:(UINavigationController *)viewController;
- (void)statement:(id<StorableChatElement>)statement didFailWithError:(NSError *)error;
- (BOOL)shouldPresentWelcomeMessage;
- (BOOL)shouldHandleFormPresentation:(UIViewController *)formController;
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *)customAttributes;

/**
 Updates when chat state was changed (chat lifecycle).
 */
- (void)didUpdateState:(ChatStateEvent *)event;

- (void)didClickToCall:(NSString *)phoneNumber;

/*
Notifies about upload file button click.

@param fileSelectionCallback The callback to be called once file was selected.
*/
- (void)didClickUploadFile;

- (void)didFailWithError:(GCError *)error;

- (void)reconnectChat;

@end
