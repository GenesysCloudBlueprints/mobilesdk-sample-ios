
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface DynamicContext: NSObject
- (instancetype)initWithContext:(NSString *)context;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *context;
@end

@interface BotAccount : NSObject
@property (nonatomic, copy) NSString *apiKey;
@property (nonatomic, copy) NSString *info;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSString *knowledgeBase;
@property (nonatomic, copy) NSString *kbID;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> *nanorepContext;
@property (nonatomic, copy) NSString *referrer;
@property (nonatomic, readonly, copy) NSString *accountId;
@property (nonatomic, copy) NSString *labelId;
@property (nonatomic, copy, readonly) NSString *dynamicContextDescription;
@property (nonatomic) BOOL allContextsMandatory;
@property (nonatomic, copy) NSArray<NSString *> *entities;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> *initializationEntities;
@property (nonatomic, copy) NSString *welcomeMessageId;
@property (nonatomic, copy) NSString *domain;

- (void)appendDynamicContext:(DynamicContext *)context;

- (NSDictionary<NSString *,NSString *> *)resetDynamicContext;
@end
