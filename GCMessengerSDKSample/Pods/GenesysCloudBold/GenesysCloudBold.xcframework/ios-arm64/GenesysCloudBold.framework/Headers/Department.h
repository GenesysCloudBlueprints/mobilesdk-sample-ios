
// GenesysCloudBold version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Department : NSObject
@property (nonatomic, copy) NSString* departmentId;
@property (nonatomic, copy) NSString* language;
@property (nonatomic, copy) NSString* name;

- (instancetype)initWithDict:(NSDictionary *)dict;
@end

NS_ASSUME_NONNULL_END
