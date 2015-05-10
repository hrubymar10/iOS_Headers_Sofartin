/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCWidgetViewController : UIViewController <SBUISizeObservingViewDelegate, _NCWidgetViewController_Service_IPC> {
    _UIViewControllerTransitionContext *_activeTransitionContext;
    NSMapTable *_activeTransitionContextsByRequestID;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _clientMarginInsets;
    double _clientPreferredViewHeight;
    UIViewController<NCWidgetProviding> *_contentProvidingViewController;
    struct { 
        unsigned int implementsPerformUpdateWithCompletionHandler : 1; 
        unsigned int implementsMarginInsets : 1; 
        unsigned int implementsContentWidthDidChange : 1; 
    } _contentProvidingViewControllerFlags;
    UIView *_contentView;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    <UIViewControllerAnimatedTransitioning> *_transitionController;
    NSString *_widgetIdentifier;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
}

@property(getter=_contentProvidingViewController,assign,retain) UIViewController<NCWidgetProviding> * contentProvidingViewController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_exportedInterface;
+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (void)initialize;

- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performUpdateWithReplyHandler:(id)arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(id)arg1;
- (void)__setWidgetIdentifier:(id)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 requestIdentifier:(id)arg2;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (id)_contentProvidingViewController;
- (id)_customAnimator:(bool)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_encodeLayerTree:(id)arg1;
- (void)_enqueueProxyRequest:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_performUpdateWithCompletionHandler:(id)arg1;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(bool)arg2;
- (double)_sanitizedClientContentWidthForProposedHostWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sanitizedClientFrameFromHostSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentProvidingViewController:(id)arg1;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (id)_transitionContextForRequestIdentifier:(id)arg1;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(bool)arg2 createIfNecessary:(bool)arg3;
- (void)_willAppearInRemoteViewController;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setContentProvidingViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
