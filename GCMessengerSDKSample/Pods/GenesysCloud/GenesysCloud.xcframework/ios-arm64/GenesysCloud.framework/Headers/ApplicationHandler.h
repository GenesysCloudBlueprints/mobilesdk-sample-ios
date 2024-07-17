
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@protocol ApplicationHandler <NSObject>
@optional
- (void)didClickLink:(NSString *)url;
- (BOOL)presentingController:(UIViewController *)controller shouldHandleClickedLink:(NSString *)link;
@end

NS_ASSUME_NONNULL_END
