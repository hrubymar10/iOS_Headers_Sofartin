/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomBar : UIView {
    long long _orientation;
    long long _style;
}

+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (long long)fullscreenStyle;
+ (long long)overlayStyle;

- (id)init;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(bool)arg2;

@end
