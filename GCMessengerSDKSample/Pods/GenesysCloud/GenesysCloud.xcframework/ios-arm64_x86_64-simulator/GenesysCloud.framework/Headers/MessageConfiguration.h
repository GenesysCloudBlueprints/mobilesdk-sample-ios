
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/CommonConfig.h>
#import <GenesysCloud/DateStampConfiguration.h>

NS_ASSUME_NONNULL_BEGIN


@interface FullCornersItemConfiguration : CommonConfig
@property (nonatomic, assign) BorderRadius borderRadius;
@end

@protocol MessageConfigurationDateHandler <NSObject>

@property (strong, nonatomic) DateStampConfiguration *dateStamp;
@property (strong, nonatomic) DateStampConfiguration *timeStamp;

- (void)setLocaleForTimeAndDate:(NSString *)locale;
@end



@interface MessageConfiguration : FullCornersItemConfiguration
@property (nonatomic)  AvatarPosition avatarPosition;
@property (strong, nonatomic) UIImage * _Nullable avatar;
@property (nonatomic, copy) NSString * _Nullable avatrImageName;
@property (nonatomic, weak) id<MessageConfigurationDateHandler> dateHandler;
@end

@interface IncomingMessageConfiguration : MessageConfiguration
/**
Chat Element Max Length.
*/
@property (assign, nonatomic) NSInteger maxLength;
@end
NS_ASSUME_NONNULL_END
