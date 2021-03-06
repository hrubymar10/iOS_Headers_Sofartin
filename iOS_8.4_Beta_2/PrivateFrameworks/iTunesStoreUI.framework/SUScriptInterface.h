/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptInterface : SUScriptObject {
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUClientInterface *_clientInterface;
    <SUScriptInterfaceDelegate> *_delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
}

@property(assign,readonly) SUScriptFairPlayContext * accountCreationSecureContext;
@property(assign,readonly) NSArray * accounts;
@property(assign,readonly) NSString * actionTypeDismissSheet;
@property(assign,readonly) NSString * actionTypeDismissWindows;
@property(assign,readonly) NSString * actionTypeReturnToLibrary;
@property(assign,readonly) SUScriptAppleAccountStore * appleAccountStore;
@property(assign,readonly) SUScriptApplication * application;
@property(assign,readonly) id applicationAccessibilityEnabled;
@property(assign,readonly) SUScriptKeyValueStore * applicationLocalStorage;
@property(assign,readonly) NSString * askToBuyPrompt;
@property(assign,copy) SSAuthenticationContext * authenticationContext;
@property(assign,readonly) NSString * clientIdentifier;
@property(assign,retain) SUClientInterface * clientInterface;
@property(assign,copy) NSString * cookie;
@property(assign,readwrite) <SUScriptInterfaceDelegate> * delegate;
@property(assign,readonly) SUScriptDevice * device;
@property(assign,readonly) SUScriptKeyValueStore * deviceLocalStorage;
@property(assign,readonly) id globalRootObject;
@property(assign,readonly) NSArray * installedSoftwareApplications;
@property(assign,readonly) id loggingEnabled;
@property(assign,readonly) SUScriptMediaLibrary * mediaLibrary;
@property(assign,readonly) SUScriptNavigationBar * navigationBar;
@property(assign,readonly) NSNumber * orientation;
@property(assign,readonly) SUScriptPassbookLibrary * passbookLibrary;
@property(assign,readonly) SUScriptPreviewOverlay * previewOverlay;
@property(assign,retain) SUScriptAccount * primaryAccount;
@property(assign,retain) SUScriptAccount * primaryLockerAccount;
@property(assign,readonly) SUScriptProtocol * protocol;
@property(assign,readonly) SUScriptPurchaseManager * purchaseManager;
@property(assign,readonly) NSString * referringUserAgent;
@property(assign,readonly) id screenReaderRunning;
@property(assign,retain) SUScriptWindowContext * scriptWindowContext;
@property(assign,readonly) SUScriptSectionsController * sectionsController;
@property(assign,readonly) long long storeSheetType;
@property(assign,readonly) long long storeSheetTypeAskToBuy;
@property(assign,readonly) long long storeSheetTypeDefault;
@property(assign,readonly) SUScriptTelephony * telephony;
@property(assign,readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate;
@property(assign,readonly) SUScriptViewController * viewController;
@property(assign,retain) WebFrame * webFrame;
@property(assign,readonly) SUScriptWindow * window;

+ (void)initialize;
+ (long long)purchaseAnimationStyleFromString:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)DOMElementWithElement:(id)arg1;
- (void)_accessibilityPostLayoutChange;
- (id)_className;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(id)arg2;
- (void)_globalEventNotification:(id)arg1;
- (void)_scriptUserInfoDidChangeNotification:(id)arg1;
- (void)accessibilityPostLayoutChange;
- (void)accessibilityPostScreenChange;
- (id)accountCreationSecureContext;
- (id)accountDSID;
- (id)accountForDSID:(id)arg1;
- (id)accountName;
- (id)accounts;
- (id)actionTypeDismissSheet;
- (id)actionTypeDismissWindows;
- (id)actionTypeReturnToLibrary;
- (id)activeAudioPlayers;
- (id)activeNetworkType;
- (void)addExternalDownloads:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (id)appleAccountStore;
- (id)application;
- (id)applicationAccessibilityEnabled;
- (id)applicationLocalStorage;
- (void)approveInPerson:(id)arg1;
- (bool)arePodcastsDisabled;
- (id)askToBuyPrompt;
- (id)attributeKeys;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (id)authenticationContext;
- (bool)canSendEmail;
- (bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2;
- (id)clientIdentifier;
- (id)clientInterface;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (id)cookie;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (void)dealloc;
- (void)deallocAuthentication;
- (void)deallocMediaLibrary;
- (id)delegate;
- (id)device;
- (id)deviceLocalStorage;
- (long long)dialogDisplayCountForKey:(id)arg1;
- (id)diskSpaceAvailable;
- (void)dismissSheet;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)dispatchXEvent:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1;
- (void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2;
- (void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2;
- (id)globalRootObject;
- (void)goBack;
- (void)gotoStoreURL:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(bool)arg3 forceAuthentication:(bool)arg4;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (id)hardwareType;
- (bool)haveAccount;
- (id)init;
- (void)initAuthentication;
- (id)installedSoftwareApplications;
- (bool)isExplicitContentDisabled;
- (bool)isRunningTest;
- (bool)launchedToTest;
- (void)log:(id)arg1;
- (id)loggingEnabled;
- (id)machineGUID;
- (id)makeAccount;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeActivity;
- (id)makeActivityItemProviderWithMIMEType:(id)arg1;
- (id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeCalloutView;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeDateFormatter;
- (id)makeDialog;
- (id)makeDocumentInteractionController;
- (id)makeDonationViewControllerWithCharityIdentifier:(id)arg1;
- (id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2;
- (id)makeFacebookSessionWithAccount:(id)arg1;
- (id)makeFamilySetupViewController;
- (id)makeGiftViewController;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)makeLookupRequest;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMenuViewController;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)makeRedeemViewController;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeSegmentedControl;
- (id)makeSplitViewController;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeStoreSheetViewController;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeTweetComposeViewController;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeVolumeViewController;
- (id)makeWindow;
- (id)makeXMLHTTPRequest;
- (id)mediaLibrary;
- (id)navigationBar;
- (void)openURL:(id)arg1;
- (id)orientation;
- (id)parentViewController;
- (id)passbookLibrary;
- (void)perfLog:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2;
- (void)pingURL:(id)arg1;
- (id)previewOverlay;
- (id)primaryAccount;
- (id)primaryLockerAccount;
- (id)protocol;
- (id)purchaseManager;
- (void)redeemCode:(id)arg1;
- (id)referringUserAgent;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)reportAProblemForIdentifier:(id)arg1;
- (id)requestInfo;
- (void)requireCellularForResourceWithURL:(id)arg1;
- (void)retryAllRestoreDownloads;
- (id)screenReaderRunning;
- (id)scriptAttributeKeys;
- (id)scriptWindowContext;
- (id)sectionsController;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)setLoggingEnabled:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setPrimaryLockerAccount:(id)arg1;
- (void)setReferringUserAgent:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setWebFrame:(id)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)signOutPrimaryAccount;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (id)softwareApplicationWithBundleID:(id)arg1;
- (void)startedTest:(id)arg1;
- (long long)storeSheetType;
- (long long)storeSheetTypeAskToBuy;
- (long long)storeSheetTypeDefault;
- (id)systemItemAction;
- (id)systemItemAdd;
- (id)systemItemBookmarks;
- (id)systemItemCamera;
- (id)systemItemCancel;
- (id)systemItemCompose;
- (id)systemItemDone;
- (id)systemItemEdit;
- (id)systemItemFastForward;
- (id)systemItemFixedSpace;
- (id)systemItemFlexibleSpace;
- (id)systemItemOrganize;
- (id)systemItemPageCurl;
- (id)systemItemPause;
- (id)systemItemPlay;
- (id)systemItemRedo;
- (id)systemItemRefresh;
- (id)systemItemReplay;
- (id)systemItemRewind;
- (id)systemItemSearch;
- (id)systemItemStop;
- (id)systemItemTrash;
- (id)systemItemUndo;
- (id)systemVersion;
- (id)telephony;
- (id)threadSafeDelegate;
- (id)viewController;
- (id)webFrame;
- (id)window;

@end
