
// GenesysCloudBot version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@interface NRTokenizer : NSObject
- (NSString *)encode:(NSString *)statement;
- (NSString *)decode:(NSString *)statement;
@end
