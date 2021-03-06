/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKJoystickController : NSObject {
    bool _autoDismiss;
    <CKJoystickControllerDelegate> *_delegate;
    long long _deviceOrientation;
    unsigned long long _highlightStyle;
    CKJoystickView *_joystickView;
    NSArray *_passthroughViews;
    bool _radialButtonRotationEnabled;
}

@property (nonatomic) bool autoDismiss;
@property (nonatomic, readonly, retain) CKJoystickButtonItem *centerButtonItem;
@property (nonatomic) <CKJoystickControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic, readonly) unsigned long long highlightStyle;
@property (nonatomic) CKJoystickButtonItem *highlightedButtonItem;
@property (getter=isJoystickCollapsed, nonatomic, readonly) bool joystickCollapsed;
@property (nonatomic, retain) CKJoystickView *joystickView;
@property (getter=isJoystickVisible, nonatomic, readonly) bool joystickVisible;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic, readonly, copy) NSArray *radialButtonItems;
@property (nonatomic) bool radialButtonRotationEnabled;
@property (nonatomic, retain) UIColor *tintColor;

+ (double)joystickExpandAnimationDuration;
+ (double)joystickExpandedRadius;
+ (double)joystickRadius;
+ (double)joystickRotationAnimationDuration;
+ (id)sharedJoystickOverlay;

- (bool)autoDismiss;
- (id)centerButtonItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertJoystickFrameToView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)deviceOrientation;
- (void)dismissJoystickAnimated:(bool)arg1;
- (unsigned long long)highlightStyle;
- (id)highlightedButtonItem;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 style:(unsigned long long)arg6 highlightStyle:(unsigned long long)arg7;
- (bool)isJoystickCollapsed;
- (bool)isJoystickVisible;
- (id)joystickView;
- (id)passthroughViews;
- (void)presentJoystickFromPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (id)radialButtonItems;
- (bool)radialButtonRotationEnabled;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformForCurrentDeviceOrientation;
- (void)setAutoDismiss:(bool)arg1;
- (void)setCenterButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setHighlightedButtonItem:(id)arg1;
- (void)setJoystickView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setRadialButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setRadialButtonRotationEnabled:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
