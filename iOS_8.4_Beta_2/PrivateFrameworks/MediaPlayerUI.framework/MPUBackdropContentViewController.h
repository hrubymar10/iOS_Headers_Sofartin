/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUBackdropContentViewController : UIViewController {
    _UIBackdropView *_backdropView;
    long long _backdropViewPrivateStyle;
    UIView *_backgroundView;
    UIViewController *_contentViewController;
    MPUPinningView *_pinningView;
}

@property(assign,readwrite) long long backdropViewPrivateStyle;
@property(assign,retain) UIView * backgroundView;
@property(assign,retain) UIViewController * contentViewController;

- (void).cxx_destruct;
- (void)_embedBackgroundView;
- (long long)backdropViewPrivateStyle;
- (id)backgroundView;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setBackdropViewPrivateStyle:(long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
