
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NRCacheManager : NSObject
+ (void)storeAnswerById:(NSString *)answerId answer:(id)answer;
+ (id)answerById:(NSString *)answerId;
@end
