/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCountdownButton : UIControl {
    UIImageView *_backgroundView;
    bool _dimmed;
    UIImage *_dimmedIconImage;
    UIImage *_iconImage;
    UIImageView *_iconView;
    CAShapeLayer *_outlineProgressLayer;
    UIView *_outlineView;
}

@property (nonatomic, retain) UIImageView *backgroundView;
@property (nonatomic) bool dimmed;
@property (nonatomic, retain) UIImage *dimmedIconImage;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) CAShapeLayer *outlineProgressLayer;
@property (nonatomic, retain) UIView *outlineView;

+ (id)_closeBoxImage;
+ (id)_inactiveCloseBoxImage;

- (unsigned long long)accessibilityTraits;
- (id)backgroundView;
- (double)countdownProgress;
- (void)dealloc;
- (bool)dimmed;
- (id)dimmedIconImage;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)iconImage;
- (id)iconView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (id)outlineProgressLayer;
- (id)outlineView;
- (void)setBackgroundView:(id)arg1;
- (void)setCountdownProgress:(double)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setDimmedIconImage:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setOutlineProgressLayer:(id)arg1;
- (void)setOutlineView:(id)arg1;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(id)arg2;

@end
