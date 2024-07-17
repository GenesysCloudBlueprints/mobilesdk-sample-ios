
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@class Account;

/************************************************************/
// MARK: - AutoCompleteDeleagte
/************************************************************/

@protocol AutoCompleteDeleagte
@optional
- (void)onAutoCompleteReady;
- (void)didFailWithError:(NSError *_Nullable)error;
@end

/************************************************************/
// MARK: - AutoCompleteProvider
/************************************************************/

@protocol AutoCompleteProvider

/************************************************************/
// MARK: - Properties
/************************************************************/

@property (nullable, nonatomic, strong) Account *account;

/// Auto complete deleagte.
@property (nonatomic, weak) id<AutoCompleteDeleagte> _Nullable delegate;

/************************************************************/
// MARK: - Functions
/************************************************************/

/// Auto complete suggestions fetcher.
- (void)fetchSuggestionsForText:(NSString *_Nullable)text
                     completion:(void (^_Nullable)(NSArray * _Nullable suggestions))completion;

@end
