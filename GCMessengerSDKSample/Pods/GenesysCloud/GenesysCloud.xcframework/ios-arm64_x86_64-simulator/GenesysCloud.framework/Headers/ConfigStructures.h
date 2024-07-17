
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#ifndef ConfigStructures_h
#define ConfigStructures_h
typedef struct Corners {
    int left, right;
} Corners;

typedef struct BorderRadius {
    Corners top, bottom;
} BorderRadius;

typedef NS_ENUM(NSInteger, AvatarPosition) {
    AvatarPositionTopLeft = 0,
    AvatarPositionBottomLeft = 1,
    AvatarPositionTopRight = 2,
    AvatarPositionBottomRight = 3
};

@protocol BackgroundConfig <NSObject>

/**
 Chat View Background Color
 */
@property (copy, nonatomic) UIColor * _Nullable backgroundColor;

/**
 Chat View Background Image
 */
@property (strong, nonatomic) UIImage * _Nullable backgroundImage;



@end

@protocol TextConfig <NSObject>
/**
 Chat Text Color
 */
@property (copy, nonatomic) UIColor * _Nullable textColor;

/**
 Chat Custom Font.
 */
@property (copy, nonatomic) CustomFont * _Nullable customFont;

@end
#endif /* ConfigStructures_h */
