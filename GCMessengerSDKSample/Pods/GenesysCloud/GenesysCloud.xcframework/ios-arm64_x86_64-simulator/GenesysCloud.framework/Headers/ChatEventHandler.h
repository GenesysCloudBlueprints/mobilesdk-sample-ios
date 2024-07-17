
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@protocol ChatEventHandler <NSObject>
- (void)handleClickedLink:(NSURL *)link;
- (void)handleEvent:(NSDictionary *)eventParams;
@end
