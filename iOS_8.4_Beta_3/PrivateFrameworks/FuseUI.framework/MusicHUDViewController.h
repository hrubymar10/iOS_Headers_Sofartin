/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicHUDViewController : UIViewController {
    UIView *_contentView;
    double _dismissalDelay;
    UIView *_hudView;
    bool _shouldWaitForExplicitDismissal;
    NSString *_text;
    long long _type;
}

@property (nonatomic) double dismissalDelay;
@property (nonatomic) bool shouldWaitForExplicitDismissal;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_dismissHUDAnimated:(bool)arg1;
- (void)_playAnimation;
- (void)_removeFromTargetRootViewController;
- (void)dismiss;
- (double)dismissalDelay;
- (id)initWithHUDType:(long long)arg1;
- (void)presentFromRootViewControllerOfViewController:(id)arg1;
- (void)setDismissalDelay:(double)arg1;
- (void)setShouldWaitForExplicitDismissal:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)shouldWaitForExplicitDismissal;
- (id)text;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
