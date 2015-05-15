/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {
    UIAlertController *_alertController;
    UIViewController *_inPopoverViewController;
    UIAlertView *_legacyAlert;
    UIPopoverController *_popoverController;
    <UIPopoverControllerDelegate> *_popoverDelegate;
    _UIAlertControllerShimPresenterWindow *_window;
}

@property(assign,readwrite) UIAlertController * alertController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) UIAlertView * legacyAlert;
@property(assign,readwrite) <UIPopoverControllerDelegate> * popoverDelegate;
@property(assign,readonly) Class superclass;
@property(assign,readonly) _UIAlertControllerShimPresenterWindow * window;

+ (void)_addPresenter:(id)arg1;
+ (void)_cancelPendingTouchesIfAppropriate;
+ (id)_currentFullScreenAlertPresenters;
+ (void)_removePresenter:(id)arg1;
+ (bool)_shouldPresentActionSheetsFullscreen;
+ (id)_topmostAlertWindow;
+ (id)_topmostLegacyAlertIncludingPresentingAlerts:(bool)arg1;

- (void)_createWindowIfNecessary;
- (void)_dismissAlertControllerAnimated:(bool)arg1 completion:(id)arg2;
- (id)_popoverController;
- (void)_presentAlertControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)_presentAlertControllerFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4 completion:(id)arg5;
- (void)_tearDownInPopoverViewController;
- (id)alertController;
- (void)dealloc;
- (id)legacyAlert;
- (id)popoverDelegate;
- (void)setAlertController:(id)arg1;
- (void)setLegacyAlert:(id)arg1;
- (void)setPopoverDelegate:(id)arg1;
- (id)window;

@end
