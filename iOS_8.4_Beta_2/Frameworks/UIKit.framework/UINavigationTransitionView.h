/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationTransitionView : UIView <NSCoding> {
    id _delegate;
    UIResponder *_firstResponderToRestore;
    UIView *_fromView;
    double _fromViewAlpha;
    unsigned int _isTransitioning;
    UIWindow *_originalWindow;
    unsigned int _popoverWillCleanUpNavigationTransition;
    UIView *_toView;
    long long _transition;
    unsigned int _usesRoundedCorners;
}

@property(assign,readwrite) id delegate;
@property(assign,readonly) UIView * fromView;
@property(assign,readonly) bool isTransitioning;
@property(assign,readwrite) bool popoverWillCleanUpNavigationTransition;
@property(assign,readwrite) bool usesRoundedCorners;

+ (double)defaultDurationForTransition:(long long)arg1;

- (void)_cleanupTransition;
- (void)_cleanupTransitionFromPopover;
- (bool)_isTransitioningFromView:(id)arg1;
- (void)_navigationTransitionDidStop;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioning;
- (bool)popoverWillCleanUpNavigationTransition;
- (void)setDelegate:(id)arg1;
- (void)setPopoverWillCleanUpNavigationTransition:(bool)arg1;
- (void)setUsesRoundedCorners:(bool)arg1;
- (bool)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3;
- (bool)transition:(long long)arg1 toView:(id)arg2;
- (bool)usesRoundedCorners;

@end
