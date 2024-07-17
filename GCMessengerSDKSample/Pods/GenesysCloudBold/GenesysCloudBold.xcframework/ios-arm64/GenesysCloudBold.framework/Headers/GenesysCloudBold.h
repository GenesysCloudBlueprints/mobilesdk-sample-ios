
// GenesysCloudBold version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

//! Project version number for GenesysCloudBold.
FOUNDATION_EXPORT double GenesysCloudBoldVersionNumber;

//! Project version string for GenesysCloudBold.
FOUNDATION_EXPORT const unsigned char GenesysCloudBoldVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GenesysCloudBold/PublicHeader.h>

#import <GenesysCloudBold/BCChatRecovery.h>
#import <GenesysCloudBold/BCConnectivityManager.h>
#import <GenesysCloudBold/BCHTTPConnection.h>
#import <GenesysCloudBold/BCHTTPConnection_URLConnection.h>
#import <GenesysCloudBold/BCHTTPConnection_URLSession.h>
#import <GenesysCloudBold/BCOSSCall.h>
#import <GenesysCloudBold/BCOSSConnectCall.h>
#import <GenesysCloudBold/BCOSSFinishChatCall.h>
#import <GenesysCloudBold/BCOSSHeartBeatCall.h>
#import <GenesysCloudBold/BCOSSSendMessageCall.h>
#import <GenesysCloudBold/BCOSSVisitorTypingCall.h>
#import <GenesysCloudBold/BCOSSCommunicator.h>
#import <GenesysCloudBold/BCOSSLink.h>
#import <GenesysCloudBold/BCOSSLongPollLink.h>
#import <GenesysCloudBold/BCOSSWebSocketLink.h>
#import <GenesysCloudBold/BCOSSNotification.h>
#import <GenesysCloudBold/BCOSSAddMessageNotification.h>
#import <GenesysCloudBold/BCOSSAutoMessageNotification.h>
#import <GenesysCloudBold/BCOSSConnectNotification.h>
#import <GenesysCloudBold/BCOSSHeartBeatNotification.h>
#import <GenesysCloudBold/BCOSSUpdateBusyNotification.h>
#import <GenesysCloudBold/BCOSSUpdateChatNotification.h>
#import <GenesysCloudBold/BCOSSUpdateTyperNotification.h>
#import <GenesysCloudBold/BCOSSJSONResponsePreProcessor.h>
#import <GenesysCloudBold/BCOSSResponsePreProcessor.h>
#import <GenesysCloudBold/BC_SRWebSocket.h>
#import <GenesysCloudBold/BCCall.h>
#import <GenesysCloudBold/BCRESTCall.h>
#import <GenesysCloudBold/BCRESTCallResult.h>
#import <GenesysCloudBold/BCRESTCallResultParser.h>
#import <GenesysCloudBold/BCChangeLanguageCall.h>
#import <GenesysCloudBold/BCChangeLanguageCallParser.h>
#import <GenesysCloudBold/BCChangeLanguageCallResult.h>
#import <GenesysCloudBold/BCCreateChatCall.h>
#import <GenesysCloudBold/BCCreateChatCallParser.h>
#import <GenesysCloudBold/BCCreateChatCallResult.h>
#import <GenesysCloudBold/BCEmailChatHistoryCall.h>
#import <GenesysCloudBold/BCEmailChatHistoryCallParser.h>
#import <GenesysCloudBold/BCEmailChatHistoryCallResult.h>
#import <GenesysCloudBold/BCFinishChatCall.h>
#import <GenesysCloudBold/BCFinishChatCallParser.h>
#import <GenesysCloudBold/BCFinishChatCallResult.h>
#import <GenesysCloudBold/BCFormFieldParser.h>
#import <GenesysCloudBold/BCGetChatAvailabilityCall.h>
#import <GenesysCloudBold/BCGetChatAvailabilityCallParser.h>
#import <GenesysCloudBold/BCGetChatAvailabilityCallResult.h>
#import <GenesysCloudBold/BCGetUnavailableFormCall.h>
#import <GenesysCloudBold/BCGetUnavailableFormCallParser.h>
#import <GenesysCloudBold/BCGetUnavailableFormCallResult.h>
#import <GenesysCloudBold/BCLongPollCall.h>
#import <GenesysCloudBold/BCLongPollCallParser.h>
#import <GenesysCloudBold/BCPingChatCall.h>
#import <GenesysCloudBold/BCPingChatCallParser.h>
#import <GenesysCloudBold/BCPingChatCallResult.h>
#import <GenesysCloudBold/BCSendMessageCall.h>
#import <GenesysCloudBold/BCSendMessageCallParser.h>
#import <GenesysCloudBold/BCSendMessageCallResult.h>
#import <GenesysCloudBold/BCStartChatCall.h>
#import <GenesysCloudBold/BCStartChatCallParser.h>
#import <GenesysCloudBold/BCStartChatCallResult.h>
#import <GenesysCloudBold/BCSubmitPostChatCall.h>
#import <GenesysCloudBold/BCSubmitPostChatCallParser.h>
#import <GenesysCloudBold/BCSubmitPostChatCallResult.h>
#import <GenesysCloudBold/BCSubmitPreChatCall.h>
#import <GenesysCloudBold/BCSubmitPreChatCallParser.h>
#import <GenesysCloudBold/BCSubmitPreChatCallResult.h>
#import <GenesysCloudBold/BCSubmitUnavailableEmailCall.h>
#import <GenesysCloudBold/BCSubmitUnavailableEmailCallParser.h>
#import <GenesysCloudBold/BCSubmitUnavailableEmailCallResult.h>
#import <GenesysCloudBold/BCVisitorTypingCall.h>
#import <GenesysCloudBold/BCVisitorTypingCallParser.h>
#import <GenesysCloudBold/BCVisitorTypingCallResult.h>
#import <GenesysCloudBold/BCAccount+ServerSet.h>
#import <GenesysCloudBold/BCAccount.h>
#import <GenesysCloudBold/BCCancelable.h>
#import <GenesysCloudBold/BCCancelableImpl.h>
#import <GenesysCloudBold/BCChangeLanguageDelegate.h>
#import <GenesysCloudBold/BCChat.h>
#import <GenesysCloudBold/BCChatAvailability.h>
#import <GenesysCloudBold/BCChatAvailabilityChecker.h>
#import <GenesysCloudBold/BCChatImpl+Notifications.h>
#import <GenesysCloudBold/BCChatImpl.h>
#import <GenesysCloudBold/BCChatMessageDelegate.h>
#import <GenesysCloudBold/BCChatQueueDelegate.h>
#import <GenesysCloudBold/BCChatRecaptureDelegate.h>
#import <GenesysCloudBold/BCChatSession.h>
#import <GenesysCloudBold/BCChatSessionImpl.h>
#import <GenesysCloudBold/BCChatStateDelegate.h>
#import <GenesysCloudBold/BCChatTyperDelegate.h>
#import <GenesysCloudBold/BCCreateChatSessionDelegate.h>
#import <GenesysCloudBold/BCEmailChatHistoryDelegate.h>
#import <GenesysCloudBold/BCErrorCodes.h>
#import <GenesysCloudBold/BCSubmitPostChatDelegate.h>
#import <GenesysCloudBold/BCSubmitPreChatDelegate.h>
#import <GenesysCloudBold/BCSubmitUnavailableEmailDelegate.h>
#import <GenesysCloudBold/BCForm.h>
#import <GenesysCloudBold/BCFormField.h>
#import <GenesysCloudBold/BCFormFieldOption.h>
#import <GenesysCloudBold/BCMessage.h>
#import <GenesysCloudBold/BCPerson.h>
#import <GenesysCloudBold/BCBuiltInLocalisation.h>
#import <GenesysCloudBold/BCTimer.h>
#import <GenesysCloudBold/GTMNSString+BCURLArguments.h>
#import <GenesysCloudBold/NSMutableArray+nonRetaining.h>
#import <GenesysCloudBold/NSObject+nilOrValue.h>
#import <GenesysCloudBold/NSString+BCValidation.h>
#import <GenesysCloudBold/NSString+RandomIdentifier.h>
#import <GenesysCloudBold/NSString+StrippingHtml.h>
#import <GenesysCloudBold/Department.h>
#import <GenesysCloudBold/BCBrandingConstants.h>
#import <GenesysCloudBold/BCUnavailableInfo.h>
#import <GenesysCloudBold/LiveAccountExtraData.h>
