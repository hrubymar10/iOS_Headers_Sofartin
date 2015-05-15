/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {
    _UIBackdropView *_backdrop;
    NSString *_backdropGroupName;
    long long _graphicsQuality;
    UIView *_plusDView;
    bool _wantsPlusDLayer;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) long long graphicsQuality;
@property (nonatomic) bool wantsPlusDLayer;

+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;

- (id)backdropGroupName;
- (void)dealloc;
- (long long)graphicsQuality;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)initialGraphicsQuality;
- (void)setBackdropGroupName:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setGraphicsQuality:(long long)arg1;
- (void)setWantsPlusDLayer:(bool)arg1;
- (bool)wantsPlusDLayer;

@end
