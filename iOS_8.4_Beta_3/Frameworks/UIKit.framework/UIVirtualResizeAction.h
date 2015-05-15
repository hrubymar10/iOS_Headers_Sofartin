/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVirtualResizeAction : BSAction

@property (nonatomic, readonly) long long virtualHorizontalSizeClass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } virtualSize;
@property (nonatomic, readonly) long long virtualVerticalSizeClass;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithVirtualSize:(struct CGSize { double x1; double x2; })arg1 virtualHorizontalSizeClass:(long long)arg2 virtualVerticalSizeClass:(long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)virtualHorizontalSizeClass;
- (struct CGSize { double x1; double x2; })virtualSize;
- (long long)virtualVerticalSizeClass;

@end
