
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NRAction : NSObject
@property (nullable, nonatomic, copy) NSString *actionId;
@property (nullable, nonatomic, copy) NSString *text;
@property (nullable, nonatomic, copy) NSDictionary *userInfo;
@end

@interface NRPersonalInfo : NSObject
@property (nullable, nonatomic, copy, readonly) NSString *personalInfoId;
@property (nullable, nonatomic, copy, readonly) NSArray<NSString *> *methodArgs;
@property (nullable, nonatomic, copy) void (^personalInfoCallback)(NSString * _Nullable replaceString, NRAction * _Nullable action);
@end
