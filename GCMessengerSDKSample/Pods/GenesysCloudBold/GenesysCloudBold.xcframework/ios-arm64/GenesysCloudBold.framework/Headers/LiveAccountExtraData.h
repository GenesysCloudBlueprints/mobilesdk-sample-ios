
// GenesysCloudBold version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/GenesysCloudCore.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - LiveAccountExtraData
/************************************************************/

@interface LiveAccountExtraData : AccountExtraData
/**
 The indicator for disabaling pre chat.
 */
@property (nonatomic) BOOL shouldDisablePreChat;

/**
 The departmant id, used for check availability.
 */
@property (nonatomic, copy) NSString * __nullable departmentId;

/**
 The name of the customer (synonymous with firstName)
 */
@property (nonatomic, copy) NSString * __nullable name;

/**
 The initial question for the chat (which will show as
 the first chat message in the chat from the customer)
 */
@property (nonatomic, copy) NSString * __nullable initialQuestion;

/**
 The customer reference value that appears in the client
 */
@property (nonatomic, copy) NSString * __nullable reference;

/**
 The customer info value that appears in the client
 */
@property (nonatomic, copy) NSString * __nullable information;

/**
 Survey overall response value. The value needs to given in NSNumber
 */
@property (nonatomic, copy) NSString * __nullable overall;

/**
 Survey knowledge response value. The value needs to given in NSNumber
 */
@property (nonatomic, copy) NSString * __nullable knowledge;

/**
 Survey responsiveness response value. The value needs to given in NSNumber
 */
@property (nonatomic, copy) NSString * __nullable responsiveness;

/**
 Survey professionalism response value. The value needs to given in NSNumber
 */
@property (nonatomic, copy) NSString * __nullable professionalism;

/**
 Survey comments response value
 */
@property (nonatomic, copy) NSString * __nullable comments;

/**
 Custom redirect URL
 */
@property (nonatomic, copy) NSString * __nullable CustomUrl;
@end

NS_ASSUME_NONNULL_END
