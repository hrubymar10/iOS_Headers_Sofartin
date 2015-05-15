/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLModalDimmingViewController : UIViewController {
    UIViewController<PLModalDimmingContained> *_contentViewController;
    UIImageView *_vignetteView;
    UIView *_wrapperView;
}

@property (nonatomic, retain) UIViewController<PLModalDimmingContained> *contentViewController;

- (void)_updateVignetteToOrientation:(long long)arg1;
- (void)_updateWrapperView:(id)arg1 toOrientation:(long long)arg2 forViewController:(id)arg3;
- (id)contentViewController;
- (void)dealloc;
- (void)dismissWithCustomAnimation:(int)arg1 completionHandler:(id)arg2;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentModalOnViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id)arg3;
- (void)presentWithCustomAnimation;
- (void)setContentViewController:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
