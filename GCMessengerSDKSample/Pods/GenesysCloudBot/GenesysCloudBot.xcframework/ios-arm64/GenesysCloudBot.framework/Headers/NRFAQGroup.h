
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "FAQAnswer.h"
#import "NRConversationalResponse.h"

@interface NRFAQGroup : NRBaseResponse
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSNumber *behavior;
@property (nonatomic, copy) NSArray<NRQueryResult *> *data;
@property (nonatomic) NRConversationalResponse *parse;
@end
