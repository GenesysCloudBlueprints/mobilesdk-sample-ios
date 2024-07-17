
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudBot/ReadoutOption.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ReadoutMessage <NSObject>
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic, copy) NSArray <id<ReadoutOption>> * _Nullable quickOptions;
@property (nonatomic, copy) NSArray <id<ReadoutOption>> * _Nullable persistentOptions;
@end

NS_ASSUME_NONNULL_END
