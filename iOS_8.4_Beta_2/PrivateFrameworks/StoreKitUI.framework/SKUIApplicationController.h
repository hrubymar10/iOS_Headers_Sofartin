/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIApplicationController : NSObject <IKAppContextDelegate, IKApplication, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate> {
    SKUIURL *_activationURL;
    NSURL *_applicationScriptURL;
    SKUIClientContext *_clientContext;
    Class _clientContextClass;
    <SKUIApplicationDelegate> *_delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    bool _didDisplayFirstPage;
    UIViewController *_floatingStatusOverlayViewController;
    bool _hidesTabBar;
    bool _ignoreDidBecomeActive;
    unsigned long long _indexOfLastTabNeedingContent;
    long long _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    IKAppDataStorage *_localStorage;
    SKUIMetricsController *_metricsController;
    SKUIModalDocumentController *_modalDocumentController;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    unsigned long long _resignActiveTaskID;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    long long _scriptLoadState;
    SKUIScrollingTabBarController *_scrollingTabBarController;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    <SKUIStatusOverlayProvider> *_statusOverlayProvider;
    SKUITabBarController *_tabBarController;
    long long _tabBarControllerStyle;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    IKAppDataStorage *_vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
}

@property(assign,readonly) long long _applicationMode;
@property(setter=_setHidesTabBar:,assign,readwrite) bool _hidesTabBar;
@property(assign,readonly) NSArray * _navigationControllers;
@property(assign,readonly) SKUIPreviewDocumentController * _previewOverlayDocumentController;
@property(setter=_setSelectedTabBarIndex:,assign,readwrite) long long _selectedTabBarIndex;
@property(assign,readonly) SKUINavigationDocumentController * _transientNavigationController;
@property(assign,readonly) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIApplicationDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) SKUIModalDocumentController * modalDocumentController;
@property(assign,readonly) UIViewController * rootViewController;
@property(assign,readonly) SKUIScrollingTabBarController * scrollingTabBarController;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UITabBarController * tabBarController;
@property(assign,readonly) long long tabBarControllerStyle;
@property(assign,copy) NSArray * tabBarItems;

+ (id)applicationOptionsWithLaunchOptions:(id)arg1;

- (void).cxx_destruct;
- (void)URLResolver:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (Class)_JSITunesStoreClass;
- (id)_activeNavigationController;
- (long long)_applicationMode;
- (void)_dispatchTabBarOnNeedsContentForTabAtIndex:(unsigned long long)arg1;
- (void)_dispatchTabBarOnSelect;
- (id)_documentControllerForNavigationController:(id)arg1;
- (id)_existingTabBarController;
- (void)_failWithError:(id)arg1;
- (void)_finishWillResignActiveWithDialogState:(bool)arg1;
- (void)_fireBlocksAfterLoad;
- (void)_handleScriptUnavailable;
- (bool)_hidesTabBar;
- (void)_invalidateApplication;
- (bool)_isDisplayingAccountViewController;
- (bool)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (id)_launchOptionsWithURL:(id)arg1;
- (void)_legacyResolveExternalURL:(id)arg1;
- (void)_loadApplicationFromUpdatableAssetsCache;
- (void)_loadApplicationScript;
- (id)_navigationContainerViewController;
- (id)_navigationControllers;
- (bool)_needsStatusOverlay;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_operationQueue;
- (void)_pageDidDisplayNotification:(id)arg1;
- (bool)_playPreviewForPreviewTemplate:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (id)_previewOverlayDocumentController;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_reloadApplication;
- (void)_reloadApplicationOnForegroundNotification:(id)arg1;
- (void)_reloadRootViewControllers;
- (void)_reloadTabBarWithClientContext:(id)arg1;
- (void)_removeObserversForReloadNotifications;
- (void)_resetDocumentControllers;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_retryAfterFailure;
- (Class)_scrollingTabBarControllerClass;
- (long long)_selectedTabBarIndex;
- (void)_sendClientContextDidChange;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (bool)_sendNativeBackButtonMetricEvents;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_setHidesTabBar:(bool)arg1;
- (void)_setManifestURLOnUpdatableAssetController:(id)arg1;
- (void)_setSelectedTabBarIndex:(long long)arg1;
- (bool)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_showFloatingStatusOverlayAnimated:(bool)arg1;
- (void)_showStatusOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (void)_startScriptContextWithURL:(id)arg1;
- (id)_statusOverlayProviderForViewController:(id)arg1;
- (void)_stopApplication;
- (void)_stopApplicationOnBackgroundNotification:(id)arg1;
- (void)_stopScriptContextForReload;
- (void)_storeFrontChangeNotification:(id)arg1;
- (id)_tabBarController;
- (Class)_tabBarControllerClass;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_transientNavigationController;
- (id)_transientNavigationDocument;
- (bool)_usesFloatingStatusOverlayForWidth:(double)arg1;
- (id)activeDocument;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (bool)appJSURLTrusted;
- (id)appLaunchParams;
- (void)application:(id)arg1 didReceiveURL:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (void)evaluateBlockWhenLoaded:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (void)hideStatusOverlayForProvider:(id)arg1 animated:(bool)arg2;
- (id)initWithClientContextClass:(Class)arg1;
- (id)initWithClientContextClass:(Class)arg1 tabBarControllerStyle:(long long)arg2;
- (void)loadApplication;
- (void)loadApplicationWithOptions:(id)arg1;
- (id)localStorage;
- (id)modalDocumentController;
- (long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationControllerForContext:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(bool)arg2;
- (void)resumeApplicationWithOptions:(id)arg1;
- (id)rootViewController;
- (id)scrollingTabBarController;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTabBarItems:(id)arg1;
- (bool)shouldIgnoreJSValidation;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (void)showExternalURL:(id)arg1;
- (void)showStatusOverlayUsingProvider:(id)arg1 animated:(bool)arg2;
- (void)showTransientViewController:(id)arg1;
- (void)suspendApplicationWithOptions:(id)arg1;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (void)tabBarController:(id)arg1 didReselectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willDisplayViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (long long)tabBarControllerStyle;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tabBarItems;
- (void)updateTabBarWithItems:(id)arg1 animated:(bool)arg2;
- (id)vendorIdentifier;
- (id)vendorStorage;

@end
