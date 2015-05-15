/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageOverlayController : NSObject <SKStoreProductViewControllerDelegate, SKUIIPadProductPageDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIProductPageOverlayDelegate> *_delegate;
    SKUIItem *_initialItem;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIViewController *_parentViewController;
}

@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfVisibleOverlays;
@property (nonatomic, readonly) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)URLs;
- (void)_backstopViewAction:(id)arg1;
- (void)_finishDismissAndNotifyDelegate:(bool)arg1 withViewController:(id)arg2;
- (void)_removeOverlayViewController;
- (void)_showOverlayViewController;
- (void)_showWithInitialViewController:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(id)arg3;
- (void)iPadProductPageCannotOpen:(id)arg1;
- (id)initWithParentViewController:(id)arg1;
- (long long)numberOfVisibleOverlays;
- (id)parentViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showWithInitialItem:(id)arg1;
- (void)showWithInitialItemIdentifier:(long long)arg1;
- (void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)showWithInitialURL:(id)arg1;
- (void)showWithInitialURLRequest:(id)arg1;
- (void)showWithInitialURLs:(id)arg1;
- (id)view;

@end
