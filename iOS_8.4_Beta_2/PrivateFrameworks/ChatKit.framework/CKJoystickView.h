/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKJoystickView : UIView {
    NSMutableArray *_allButtonItems;
    bool _autoDismiss;
    CKJoystickButtonItem *_centerButtonItem;
    bool _collapsed;
    CKJoystickController *_controller;
    bool _delegateCollapsedWillChange;
    UIView *_discView;
    bool _dragging;
    double _endAngle;
    bool _expanded;
    unsigned long long _highlightStyle;
    CKJoystickButtonItem *_highlightedButtonItem;
    double _incrementAngle;
    NSArray *_radialButtonItems;
    double _startAngle;
    unsigned long long _style;
    bool _touchInside;
}

@property(assign,retain) NSMutableArray * allButtonItems;
@property(assign,readwrite) bool autoDismiss;
@property(assign,retain) CKJoystickButtonItem * centerButtonItem;
@property(getter=isCollapsed,assign,readwrite) bool collapsed;
@property(assign,readwrite) CKJoystickController * controller;
@property(assign,readwrite) bool delegateCollapsedWillChange;
@property(assign,retain) UIView * discView;
@property(getter=isDragging,assign,readwrite) bool dragging;
@property(assign,readwrite) double endAngle;
@property(getter=isExpanded,assign,readwrite) bool expanded;
@property(assign,readwrite) unsigned long long highlightStyle;
@property(assign,readwrite) CKJoystickButtonItem * highlightedButtonItem;
@property(assign,readwrite) double incrementAngle;
@property(assign,copy) NSArray * radialButtonItems;
@property(assign,readwrite) double startAngle;
@property(assign,readwrite) unsigned long long style;
@property(getter=isTouchInside,assign,readwrite) bool touchInside;

+ (void)buttonChangeAnimation:(id)arg1 completion:(id)arg2;
+ (void)buttonRotateAnimation:(id)arg1 completion:(id)arg2;
+ (void)collapseAnimation:(id)arg1 completion:(id)arg2;
+ (void)expandAnimation:(id)arg1 completion:(id)arg2;
+ (void)highlightAnimation:(id)arg1 completion:(id)arg2;

- (id)allButtonItems;
- (bool)autoDismiss;
- (id)buttonItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)centerButtonItem;
- (id)controller;
- (void)dealloc;
- (bool)delegateCollapsedWillChange;
- (id)discView;
- (double)endAngle;
- (void)highlightButtonItem:(id)arg1 animated:(bool)arg2;
- (unsigned long long)highlightStyle;
- (id)highlightedButtonItem;
- (double)incrementAngle;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5 style:(unsigned long long)arg6 highlightStyle:(unsigned long long)arg7;
- (bool)isCollapsed;
- (bool)isDragging;
- (bool)isExpanded;
- (bool)isTouchInside;
- (void)joystickGestureRecognized:(id)arg1;
- (void)layoutSubviews;
- (void)orientationDidChange;
- (id)radialButtonItems;
- (void)setAllButtonItems:(id)arg1;
- (void)setAutoDismiss:(bool)arg1;
- (void)setCenterButtonItem:(id)arg1;
- (void)setCenterButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsed:(bool)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setController:(id)arg1;
- (void)setDelegateCollapsedWillChange:(bool)arg1;
- (void)setDiscView:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setHighlightStyle:(unsigned long long)arg1;
- (void)setHighlightedButtonItem:(id)arg1;
- (void)setIncrementAngle:(double)arg1;
- (void)setRadialButtonItems:(id)arg1;
- (void)setRadialButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setStartAngle:(double)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTouchInside:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)startAngle;
- (unsigned long long)style;

@end
