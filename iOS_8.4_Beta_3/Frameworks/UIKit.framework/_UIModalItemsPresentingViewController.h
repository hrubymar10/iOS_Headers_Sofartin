/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemsPresentingViewController : UIViewController {
    UIView *_backgroundView;
    _UIModalItem *_currentItem;
    UIView *_currentItemView;
    UIView *_dimmingView;
    bool _isInTransition;
    _UIModalItem *_itemBeingDismissed;
    _UIModalItem *_itemBeingPresented;
    NSMutableArray *_items;
    id _itemsTransitionCompletion;
    NSMutableArray *_itemsViews;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _keyboardFrame;
    double _keyboardHeight;
    NSMutableArray *_occludedWindows;
    UIWindow *_rotationDelegate;
}

@property (nonatomic, retain) _UIModalItem *currentItem;
@property (nonatomic) bool isInTransition;
@property (nonatomic, retain) _UIModalItem *itemBeingDismissed;
@property (nonatomic, retain) _UIModalItem *itemBeingPresented;
@property (copy) id itemsTransitionCompletion;
@property (nonatomic, retain) UIWindow *rotationDelegate;

- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(bool)arg3;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(bool)arg3;
- (void)_applyPresentingAnimationStartingStateForModalItem:(id)arg1 view:(id)arg2;
- (void)_applyPresentingViewMetricsStateForModalItem:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_desaturateUI;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(bool)arg3 completion:(id)arg4;
- (void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(bool)arg3 completion:(id)arg4 keepDimmingView:(bool)arg5;
- (void)_dismissMe:(id)arg1 animated:(bool)arg2;
- (void)_enqueueAdditionalTransitionCompletion:(id)arg1;
- (void)_hide;
- (void)_hideAnimated:(bool)arg1 dimmSpotlight:(bool)arg2;
- (void)_hideDimmingViewAnimated:(bool)arg1;
- (void)_hideItem:(id)arg1 animated:(bool)arg2;
- (void)_resaturateUI;
- (void)_showDimmingView:(bool)arg1 animated:(bool)arg2;
- (void)_showDimmingViewAnimated:(bool)arg1;
- (void)_showItem:(id)arg1 animated:(bool)arg2 undimmSpotlight:(bool)arg3;
- (void)_updateItem:(id)arg1 animated:(bool)arg2;
- (id)currentItem;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)displayModalItem:(id)arg1 animated:(bool)arg2;
- (void)hideModalItem:(id)arg1 animated:(bool)arg2;
- (id)initWithModalItemType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isInTransition;
- (id)itemBeingDismissed;
- (id)itemBeingPresented;
- (id)itemsTransitionCompletion;
- (void)keyboardChanged:(id)arg1;
- (void)keyfirstResponderChanged:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)rotationDelegate;
- (void)setCurrentItem:(id)arg1;
- (void)setIsInTransition:(bool)arg1;
- (void)setItemBeingDismissed:(id)arg1;
- (void)setItemBeingPresented:(id)arg1;
- (void)setItemsTransitionCompletion:(id)arg1;
- (void)setRotationDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
