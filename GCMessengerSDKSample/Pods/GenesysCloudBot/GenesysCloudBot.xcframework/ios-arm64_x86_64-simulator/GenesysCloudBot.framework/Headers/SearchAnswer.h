
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import "NRQueryResult.h"
#import "SearchContextValue.h"


@protocol ContextValueHandler <NSObject>

- (SearchContextValue *)contextForId:(NSNumber *)contextId;
@property (nonatomic, readonly) NSString *multipleContext;

@end

@interface SearchAnswer : NRQueryResult
@property (nonatomic, readonly, copy) NSArray<NSNumber *> *contextSelection;
@property (nonatomic, readonly, copy) SearchContextValue *searchContext;
@property (nonatomic, readonly, copy) NSString *contextValue;
@property (nonatomic, strong) id<ContextValueHandler> contextValueHandler;
@end
