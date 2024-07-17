
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBot/NROptionKind.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ReadoutOption <NSObject>
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic) NROptionKind kind;
@end

NS_ASSUME_NONNULL_END
