/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasRootViewController : UIViewController <IKAppContextDelegate, IKAppDeviceConfig, IKApplication, MPVideoOverlayDelegate, UICollectionViewDelegate, UINavigationControllerDelegate> {
    IKAppContext *_applicationContext;
    MPUExtrasArtworkDataSource *_artworkDataSource;
    MPUExtrasContext *_context;
    bool _didAttemptRestartAfterAppContextFailure;
    MPUExtrasFeatureContainerViewController *_featureContainer;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    <IKAppDataStoring> *_localStorage;
    MPUExtrasMainTemplateViewController *_mainTemplateViewController;
    MPUExtrasNavigationController *_navigationController;
    <IKAppDataStoring> *_vendorStorage;
}

@property (nonatomic, retain) IKAppContext *applicationContext;
@property (nonatomic, retain) MPUExtrasArtworkDataSource *artworkDataSource;
@property (nonatomic, readonly) MPUExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPUExtrasFeatureContainerViewController *featureContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <IKAppDataStoring> *localStorage;
@property (nonatomic, readonly) UIView *mainMenuBar;
@property (nonatomic, retain) MPUExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) <IKAppDataStoring> *vendorStorage;

+ (id)currentController;

- (void).cxx_destruct;
- (void)_applyMainTemplateOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_attemptRestart;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (void)_finalizeMainTemplateOffset:(bool)arg1;
- (void)_registerIKStylesAndElements;
- (bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_setUpForApplication;
- (void)_stopOldContextIfNeeded;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (id)applicationContext;
- (id)artworkDataSource;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)detectMainDocument:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)featureContainer;
- (id)initWithContext:(id)arg1;
- (bool)isTimeZoneSet;
- (id)localStorage;
- (id)mainMenuBar;
- (id)mainTemplateViewController;
- (id)navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)popToFeatureOrMain;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setApplicationContext:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setFeatureContainer:(id)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setMainTemplateViewController:(id)arg1;
- (void)setVendorStorage:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldIgnoreJSValidation;
- (void)start;
- (id)storeFrontCountryCode;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemLanguage;
- (id)timeZone;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (void)viewDidLoad;

@end
