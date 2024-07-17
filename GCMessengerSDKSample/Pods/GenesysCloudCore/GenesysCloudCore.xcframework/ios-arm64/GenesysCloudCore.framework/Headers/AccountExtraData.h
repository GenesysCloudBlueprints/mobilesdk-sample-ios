
// GenesysCloudCore version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - AccountExtraData
/************************************************************/

@interface AccountExtraData : NSObject

/************************************************************/
// MARK: - Properties
/************************************************************/

/**
 The language code, for example "en-US".
 */
@property (nonatomic, copy) NSString *languageCode;

/**
 The name of the customer
 */
@property (nonatomic, copy) NSString *firstName;

/**
 The last name of the customer
 */
@property (nonatomic, copy) NSString *lastName;

/**
 The phone number of the customer
 */
@property (nonatomic, copy) NSString *phone;

/**
 The email of the customer
 */
@property (nonatomic, copy) NSString *email;

/************************************************************/
// MARK: - Functions
/************************************************************/
/**
 Existing keys values are being overided and new key are created with the custom_ prefix
 The default keys are listed in https://developer.bold360.com/help/EN/Bold360API/Bold360API/c_bc_sdk_ios_core_integration_chat_session.html
 And are fields in the AccountExtraData interface
*/
@property (nonatomic, copy) NSDictionary *extraParams;
@end

/************************************************************/
// MARK: - AsyncAccountExtraData
/************************************************************/

@interface AsyncAccountExtraData : AccountExtraData

/**
Country Abbreviation.
*/
@property (nonatomic, copy) NSString *countryAbbrev;

/**
Profile Picture Link.
*/
@property (nonatomic, copy) NSString *profilePic;

@end

NS_ASSUME_NONNULL_END
