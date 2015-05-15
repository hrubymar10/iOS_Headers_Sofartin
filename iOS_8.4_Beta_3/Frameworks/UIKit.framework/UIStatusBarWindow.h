/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarWindow : UIWindow {
    UIStatusBarCorners *_bottomCorners;
    bool _cornersHidden;
    long long _orientation;
    UIStatusBar *_statusBar;
    UIStatusBarCorners *_topCorners;
    double _topCornersOffset;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneBounds;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;
+ (bool)_isSystemWindow;
+ (bool)isIncludedInClassicJail;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_disableGroupOpacity;
- (bool)_disableViewScaling;
- (bool)_isStatusBarWindow;
- (void)_rotate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (void)setCornersHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(double)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

@end
