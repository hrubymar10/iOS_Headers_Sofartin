/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUOverlayAction : NSObject {
    long long _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property(assign,readwrite) int actionType;
@property(assign,readwrite) long long animationCount;
@property(assign,retain) UIViewController * otherViewController;
@property(assign,retain) SUOverlayTransition * transition;
@property(assign,retain) UIViewController * viewController;

- (int)actionType;
- (long long)animationCount;
- (void)dealloc;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setOtherViewController:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)transition;
- (id)viewController;

@end