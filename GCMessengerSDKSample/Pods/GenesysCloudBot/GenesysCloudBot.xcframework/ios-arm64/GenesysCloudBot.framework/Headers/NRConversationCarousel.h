
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "NRConversationMissingEntity.h"

@interface NRConversationCarousel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isDefault;
@property (nonatomic, copy) NSArray<NRConversationPersistentOption *> *persistentOptions;
@end
