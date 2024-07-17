
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ContentChatElement.h>

@interface LocalChatElement : ContentChatElement

- (instancetype)initWithContent:(NSString *)content;
/**
 The input type the user used e.g. AutoComplete
 */
@property (nonatomic, copy) NSString *userInputType;
@property (nonatomic, copy) NSString *userTrackingType;
@property (nonatomic, copy) NSString *postback;
@property (nonatomic, copy, readonly) NSArray<NSURLQueryItem *> *queryItems;
@end
