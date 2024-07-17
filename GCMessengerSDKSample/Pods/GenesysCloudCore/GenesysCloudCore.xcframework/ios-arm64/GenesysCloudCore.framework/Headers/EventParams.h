
// GenesysCloudCore version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "TrackingDatasource.h"

NS_ASSUME_NONNULL_BEGIN

@interface EventParams : NSObject

@property(nonatomic, copy) NSMutableDictionary<NSString *, NSString *> *params;

- (instancetype)initWithDatasource: (id<TrackingDatasource>)datasource;

@end

NS_ASSUME_NONNULL_END
