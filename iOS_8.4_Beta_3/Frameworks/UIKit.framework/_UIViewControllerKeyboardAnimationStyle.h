/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {
    bool _allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    bool _disableAlongsideView;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

@property(assign,readwrite) bool allowCustomTransition;
@property(assign,readonly) _UIViewControllerTransitionContext * context;
@property(assign,readwrite) bool disableAlongsideView;
@property(assign,readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;

+ (id)animationStyleWithContext:(id)arg1;
+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(bool)arg2;

- (bool)allowCustomTransition;
- (bool)canDismissWithScrollView;
- (id)context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)disableAlongsideView;
- (id)info;
- (id)initWithContext:(id)arg1;
- (bool)isAnimationCompleted;
- (bool)isEqual:(id)arg1;
- (void)launchAnimation:(id)arg1 afterStarted:(id)arg2 completion:(id)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (void)setAllowCustomTransition:(bool)arg1;
- (void)setDisableAlongsideView:(bool)arg1;

@end
