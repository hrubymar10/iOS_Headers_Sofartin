/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMHardwareLockIndicatorView : UIView {
    NSDictionary *__indicatorTextAttributes;
    bool _exposureLocked;
    bool _focusLocked;
}

@property(assign,readonly) NSDictionary * _indicatorTextAttributes;
@property(getter=isExposureLocked,assign,readwrite) bool exposureLocked;
@property(getter=isFocusLocked,assign,readwrite) bool focusLocked;

- (void).cxx_destruct;
- (void)_commonCAMHardwareLockIndicatorViewInitialization;
- (id)_indicatorTextAttributes;
- (struct CGSize { double x1; double x2; })_roundedSizeOfText:(id)arg1 withAttributes:(id)arg2;
- (id)_textForCurrentHardwareState;
- (void)_updateFromHardwareChange;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExposureLocked;
- (bool)isFocusLocked;
- (void)setExposureLocked:(bool)arg1;
- (void)setFocusLocked:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
