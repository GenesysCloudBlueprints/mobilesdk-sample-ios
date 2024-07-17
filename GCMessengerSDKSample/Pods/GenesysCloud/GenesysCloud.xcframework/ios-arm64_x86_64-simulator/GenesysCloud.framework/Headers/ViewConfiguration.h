
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/InfoViewConfiguration.h>

typedef NS_ENUM(NSInteger, InfoViewType) {
    InfoViewTypeAgentQueue,
    InfoViewTypeAgentTyping,
    InfoViewTypeUploadQueue
};

NS_ASSUME_NONNULL_BEGIN

@protocol ViewConfiguration <NSObject>
- (InfoViewConfiguration *)configurationForInfoViewType:(InfoViewType)type;
@end

NS_ASSUME_NONNULL_END
