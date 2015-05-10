/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoBrowserController : UIViewController <AirPlayRemoteSlideshowDelegate, PHPhotoLibraryChangeObserver, PLAirPlaySessionDataSource, PLDismissableViewController, PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate, PLPhotoTileViewControllerDelegate, PLSlideshowPluginDelegate, PLVideoViewDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIPageControllerDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate> {
    <PLPhotoBrowserControllerDelegate> *__delegate;
    bool __enableInteractionEventsAfterUpdatingTileIndex;
    PLAssetContainerDataSource *__originalAssetContainerDataSource;
    PHAsset *__pendingAssetForTileUpdate;
    SEL _actionAfterForcedRotation;
    UIAlertController *_actionSheetController;
    SEL _activityAction;
    id _activityTarget;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    unsigned int _airTunesSlideShowIsEnding;
    PLAirPlaySession *_airplaySession;
    UIAlertView *_alertView;
    UIAlertController *_alertViewController;
    bool _animating;
    unsigned int _appInteractionDisabled;
    PLAssetContainerDataSource *_assetContainerDataSource;
    int _autohideControlCount;
    NSArray *_availableAirTunesServices;
    unsigned int _bottomBarDisabled;
    PHCachingImageManager *_cachingImageManager;
    UITransitionView *_cameraTransitionView;
    bool _canDelayImageLoading;
    unsigned int _canShowCopyCallout;
    unsigned int _canUploadHDVideoOver3G;
    unsigned int _clearingFullScreenView;
    unsigned int _collapsing;
    UINavigationBar *_commentsEditBar;
    int _commentsInteractionMode;
    bool _commentsTableWasVisible;
    struct CGSize { 
        double width; 
        double height; 
    } _contentStartSize;
    int _currentAirTunesMode;
    NSString *_currentAirTunesTransition;
    NSArray *_currentAirplayRoutes;
    NSString *_currentAssetContainerUUID;
    NSManagedObjectID *_currentAssetObjectID;
    NSString *_currentAssetPublicGlobalUUID;
    NSIndexPath *_currentIndexPath;
    PHAsset *_currentVideo;
    bool _delayImageLoading;
    PLDeletePhotosActionController *_deleteController;
    NSIndexPath *_deletedIndexPath;
    PLPhotoTileViewController *_deletedTile;
    bool _deletesDuplicatesWhenNecessary;
    unsigned int _didRotate;
    unsigned int _didSetHDVideoUploadCapability;
    unsigned int _didSetSimpleRemotePriority;
    unsigned int _didShowHDRPrompt;
    unsigned int _didStartMusicPlayback;
    PLEditPhotoController *_editController;
    float _endScale;
    UIView *_fadeToBlackView;
    bool _fadingToBlack;
    bool _ignoringInteractionEventsForVideoViewRemaking;
    NSMutableDictionary *_imageRequestsByIdentifier;
    unsigned int _imagesAreShuffled;
    unsigned int _isAnimatingTrash;
    bool _isCameraApp;
    unsigned int _isEditingComment;
    unsigned int _isEditingPhoto;
    unsigned int _isPlayingMusic;
    NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
    NSIndexPath *_lastStreamedPhotoIndexPath;
    UIImage *_loadedImage;
    double _maximumTrimLength;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _menuControllerSourceRect;
    PLPhotoTileViewController *_mostRecentlyActiveTile;
    unsigned int _navigationBarDisabled;
    UIPageController *_pageController;
    unsigned int _paging;
    NSMutableArray *_pendingAssetChangeNotifications;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    PHAsset *_pendingPhoto;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    SEL _photoAction;
    id _photoActionInvoker;
    PLPhotoScrubber *_photoScrubber;
    int _photoThumbnailFormat;
    unsigned int _playVideoOnActivation;
    bool _playingVideo;
    NSIndexPath *_priorIndexPath;
    PLProgressView *_progressView;
    long long _publicGlobalUUIDRequestCount;
    UILongPressGestureRecognizer *_recognizer;
    unsigned int _reloadPhotoScrubber;
    PLVideoRemaker *_remaker;
    UIView *_remakerContainerView;
    int _remakerMode;
    unsigned int _remaking;
    unsigned int _remakingWasCancelled;
    unsigned int _rotating;
    unsigned int _rotationDisabled;
    unsigned int _rotationDisabledUnderCropOverlay;
    PLProgressHUD *_savingPhotoHud;
    UIScrollView *_scroller;
    unsigned int _scrolling;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    NSIndexPath *_scrubbedImageIndexPath;
    long long _scrubberAssetContainerIndex;
    bool _shouldPlayVideoWhenViewAppears;
    int _showErrorAlert;
    bool _showingNextImage;
    bool _showsAirTunesOption;
    unsigned int _slideShowIsStreamed;
    double _slideshowDelay;
    NSIndexPath *_slideshowEndIndexPath;
    bool _slideshowIsEnding;
    bool _slideshowIsLoading;
    bool _slideshowIsOrigami;
    unsigned long long _slideshowItemsShown;
    unsigned long long _slideshowItemsToShow;
    PLPictureFramePlugin *_slideshowPlugin;
    bool _slideshowStartedInFullScreen;
    int _slideshowStatus;
    NSTimer *_slideshowTimer;
    UITransitionView *_slideshowTransitionView;
    UIView *_slideshowView;
    float _startScale;
    unsigned int _statusBarIsLocked;
    NSMutableDictionary *_tileCache;
    bool _tvOutOn;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    NSMutableDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    unsigned int _videoEditingMode;
    unsigned int _videoViewWillBeginEditing;
    unsigned int _viewDidAppear;
    unsigned int _viewIsDisappearing;
    bool shouldShowOverlaysWhenViewAppears;
    bool shouldShowOverlaysWhenViewDisappears;
}

@property(setter=_setDeletedIndexPath:,assign,retain) NSIndexPath * _deletedIndexPath;
@property(setter=_setEnableInteractionEventsAfterUpdatingTileIndex:,assign,readwrite) bool _enableInteractionEventsAfterUpdatingTileIndex;
@property(setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,assign,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;
@property(setter=_setOriginalAssetContainerDataSource:,assign,retain) PLAssetContainerDataSource * _originalAssetContainerDataSource;
@property(setter=_setPendingAssetForTileUpdate:,assign,retain) PHAsset * _pendingAssetForTileUpdate;
@property(setter=_setPriorIndexPath:,assign,retain) NSIndexPath * _priorIndexPath;
@property(setter=_setScrubbedImageIndexPath:,assign,retain) NSIndexPath * _scrubbedImageIndexPath;
@property(setter=_setSlideshowEndIndexPath:,assign,retain) NSIndexPath * _slideshowEndIndexPath;
@property(assign,readonly) unsigned long long allAssetsCount;
@property(assign,readonly) PHFetchResult * assetCollectionsFetchResult;
@property(assign,readonly) PLAssetContainerDataSource * assetContainerDataSource;
@property(assign,readonly) PHCachingImageManager * cachingImageManager;
@property(assign,readwrite) bool canDelayImageLoading;
@property(assign,readonly) bool canEditVideo;
@property(assign,readwrite) bool canShowCopyCallout;
@property(assign,readonly) UIView * commentsView;
@property(assign,readwrite) PHAsset * currentAsset;
@property(assign,readonly) PHAssetCollection * currentAssetContainer;
@property(assign,readonly) PHAssetCollection * currentAssetContainerForZoomTransition;
@property(assign,readonly) PHAsset * currentAssetForZoomTransition;
@property(assign,retain) NSIndexPath * currentIndexPath;
@property(assign,readonly) PLPhotoTileViewController * currentTile;
@property(assign,readonly) PLPhotoTileViewController * currentTileForZoomTransition;
@property(assign,readwrite) unsigned long long currentTileIndex;
@property(assign,readonly) PLVideoView * currentVideoView;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) bool delayImageLoading;
@property(assign,readwrite) <PLPhotoBrowserControllerDelegate> * delegate;
@property(assign,readwrite) bool deletesDuplicatesWhenNecessary;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCameraApp;
@property(assign,readonly) bool isPlayingSlideshow;
@property(assign,readonly) UIScrollView * mainScroller;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuControllerSourceRect;
@property(assign,retain) PLPhotoTileViewController * mostRecentlyActiveTile;
@property(assign,readonly) UIPageController * pageController;
@property(assign,retain) UIScrollView * pageControllerScrollView;
@property(assign,readonly) UIView * pageControllerView;
@property(assign,retain) PLPhotoScrubber * photoScrubber;
@property(assign,readwrite) int photoThumbnailFormat;
@property(assign,readonly) UIView * remakerContainerView;
@property(assign,readonly) <PLRootLibraryNavigationController> * rootNavigationController;
@property(assign,readwrite) bool shouldPlayVideoWhenViewAppears;
@property(assign,readwrite) bool shouldShowOverlaysWhenViewAppears;
@property(assign,readwrite) bool shouldShowOverlaysWhenViewDisappears;
@property(assign,readonly) bool showsAirTunesOption;
@property(assign,copy) NSDictionary * slideshowSettingsForCurrentAssetContainer;
@property(assign,readonly) Class superclass;

+ (id)_imageRequestCacheQueue;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (void)setPageControllerScrollViewClass:(Class)arg1;

- (id)_actionViewRootView;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_airTunesSlideShowTimerFired;
- (void)_airTunesSlideShowViewWasTapped;
- (id)_airplayRemoteSlideshow;
- (void)_airplayRouteWasPicked:(id)arg1;
- (bool)_appAllowsSupressionOfAlerts;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_buttonItemViewWithTag:(int)arg1;
- (bool)_canTrimCurrentVideoInPlace;
- (bool)_canUploadHDVideo;
- (void)_cancelEditControllerIfEditedPhotoDeleted;
- (void)_cancelImageRequestsForPhoto:(id)arg1;
- (void)_cancelRemaking;
- (void)_cancelTimeoutForPendingAsset;
- (void)_cleanUpCurrentAirplaySession;
- (void)_clearFullScreenView;
- (void)_commonDidBeginRemaking;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(bool)arg3 shouldReenableInteractionEvents:(bool)arg4;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)_configureEditNavigationController:(id)arg1;
- (void)_configureTVOutPageController;
- (void)_configureVideoViewInTile:(id)arg1;
- (id)_currentAirplayRoute;
- (bool)_currentItemHasAudio;
- (id)_currentTVOutTile;
- (id)_currentTVOutVideoView;
- (void)_delayedExitEditingMode;
- (id)_deletedIndexPath;
- (void)_dereferenceTile:(id)arg1;
- (void)_didDeleteCurrentAsset;
- (void)_didLoadImage:(id)arg1 forObjectID:(id)arg2;
- (void)_disableIdleTimer;
- (void)_disableStreamingSlideshow;
- (void)_discardPhotoScrubber;
- (void)_dismissEditControllerWithOldStatusBarStyle:(long long)arg1;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (bool)_enableInteractionEventsAfterUpdatingTileIndex;
- (void)_enableStreamingSlideshow;
- (void)_externalScreenConnected:(id)arg1;
- (void)_externalScreenDisconnected:(id)arg1;
- (void)_fadeIn;
- (void)_fadeOut;
- (void)_fadeToViewContents;
- (void)_fetchPublicGlobalUUIDForCurrentAsset:(id)arg1;
- (id)_findIndexPathForAssetWithObjectID:(id)arg1 globalUUID:(id)arg2 priorIndexPath:(id)arg3 assetCollection:(id)arg4;
- (void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)_flushTileCache;
- (void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2;
- (void)_forceDismissActionSheet:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceDismissAlertView:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceDismissDeleteController:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceRemoveSavingPhotoHUD;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_handleImageResultForPhoto:(id)arg1 inTile:(id)arg2 objectID:(id)arg3 result:(id)arg4 info:(id)arg5;
- (void)_hideCallout;
- (void)_hideCommentsTableIfNecessary:(double)arg1;
- (void)_invalidateAirplayCache;
- (bool)_isPhotoTileViewControllerStaleAtIndex:(unsigned long long)arg1;
- (bool)_isScrolling;
- (bool)_isTrashBin;
- (id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
- (void)_loadImageForTile:(id)arg1 format:(int)arg2;
- (void)_loadSlideshowPlugin;
- (void)_longPressRecognized:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (bool)_mainScrollerIsVisible;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_mediaControlClient;
- (id)_newSessionForRoute:(id)arg1;
- (id)_nextAirTunesSlideshowPhoto;
- (id)_originalAssetContainerDataSource;
- (Class)_pageControllerScrollViewClass;
- (bool)_pauseSlideshow;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(bool)arg2;
- (id)_pendingAssetForTileUpdate;
- (void)_performCATransition:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (id)_pl_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (bool)_playSlideshow;
- (id)_playbackVideoView;
- (id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(bool)arg2;
- (void)_prepareForDelete;
- (void)_prepareForTVOut;
- (void)_prepareToFade;
- (long long)_presentEditPhotoController;
- (id)_priorIndexPath;
- (void)_redisplayDeleteController:(id)arg1;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_removeProgressView;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeTVOutWindow;
- (void)_requestImageForPhoto:(id)arg1 imageFormat:(int)arg2 inTile:(id)arg3 resultHandler:(id)arg4;
- (void)_scheduleTimeoutForPendingAsset;
- (id)_scrubbedImageIndexPath;
- (void)_scrubberDidBeginScrubbing:(id)arg1;
- (void)_scrubberDidEndScrubbing:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1 refreshAssetTrackingDetails:(bool)arg2;
- (void)_setDeletedIndexPath:(id)arg1;
- (void)_setEnableInteractionEventsAfterUpdatingTileIndex:(bool)arg1;
- (void)_setIgnoreInteractionEventsForVideoViewRemaking:(bool)arg1;
- (void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1;
- (void)_setMusicIsPlaying:(bool)arg1;
- (void)_setMusicIsPlaying:(bool)arg1 forPhoto:(id)arg2;
- (void)_setOriginalAssetContainerDataSource:(id)arg1;
- (void)_setPendingAssetForTileUpdate:(id)arg1;
- (void)_setPriorIndexPath:(id)arg1;
- (void)_setScrubbedImageIndexPath:(id)arg1;
- (void)_setSlideshowEndIndexPath:(id)arg1;
- (void)_setupPhotoScrubber:(bool)arg1;
- (bool)_shouldPauseOrStopVideo;
- (void)_showCommentTableIfNecessary:(double)arg1;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_showHDRPromptIfNeeded;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showTileCache;
- (void)_shuffleAssets:(bool)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (id)_slideshowEndIndexPath;
- (bool)_slideshowNotRunning;
- (void)_slideshowPlayCurrentSlide;
- (void)_slideshowPlayTimerFired:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (void)_slideshowWillBegin;
- (void)_slideshowWillEnd;
- (void)_startAirTunesSlideShow;
- (void)_startSlideshowTimer;
- (bool)_startingSlideshow;
- (void)_stopAirTunesSlideShow:(bool)arg1;
- (bool)_stopSlideshow;
- (void)_stopSlideshowTimer;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_stopVideoPlaybackForIndexPath:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_suppresionContexts;
- (id)_tileForAsset:(id)arg1 shouldCreate:(bool)arg2 tileCache:(id)arg3;
- (void)_timeoutPendingAsset;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 insideCurrentAssetContainer:(bool)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(bool)arg6;
- (void)_updateAfterAnimation;
- (void)_updateCurrentIndexForPageController:(id)arg1;
- (void)_updateForCommentsControllerEditMode:(id)arg1;
- (void)_updateFullScreenPreviewImageForPhoto:(id)arg1 inTile:(id)arg2 completionHandler:(id)arg3;
- (id)_updateIndexPath:(id)arg1 withChange:(id)arg2 deleteAction:(int)arg3;
- (void)_updateIndexPathsWithChange:(id)arg1;
- (void)_updatePageControllerWithCurrentPath:(id)arg1 priorPreviousTileAsset:(id)arg2 priorNextTileAsset:(id)arg3;
- (void)_updateStatusBarVisibilityWithDuration:(double)arg1;
- (void)_updateTVOutAfterAnimation;
- (void)_updateTileAndImageCachesForChange:(id)arg1;
- (void)_updateTileIndexForPendingAssetIfNeededAndAvailable;
- (void)_validateTileCache:(id)arg1;
- (void)_willDisplayTileController:(id)arg1;
- (void)actionSheetDidFinish;
- (void)actionSheetWillAppear;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2;
- (id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2;
- (id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2;
- (bool)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (bool)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (unsigned long long)allAssetsCount;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetContainerDataSource;
- (bool)barsAreVisible;
- (void)beginEditingPhoto;
- (void)beginLocalOrigamiSlideshowWithSettings:(id)arg1;
- (void)beginLocalSlideshowWithSettings:(id)arg1;
- (void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2;
- (id)cachingImageManager;
- (bool)canDelayImageLoading;
- (bool)canEditVideo;
- (bool)canShowCopyCallout;
- (bool)canShowNextImage;
- (bool)canShowPreviousImage;
- (void)cancelVideoEditingMode:(id)arg1;
- (void)cleanupAfterDismissal;
- (id)commentsView;
- (void)commitPendingUpdatesWithCompletionHandler:(id)arg1;
- (id)contentScrollView;
- (void)currentAirplayRouteChanged;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentIndexPath;
- (bool)currentItemIsPlaying;
- (id)currentTile;
- (id)currentTileForZoomTransition;
- (unsigned long long)currentTileIndex;
- (id)currentVideoView;
- (void)dealloc;
- (bool)delayImageLoading;
- (id)delegate;
- (void)deleteImageClicked:(id)arg1;
- (bool)deletesDuplicatesWhenNecessary;
- (void)didEndEditingPhoto;
- (bool)dismissPopovers;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)endEditingPhoto;
- (void)endSlideshow;
- (void)hideCommentsTable;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)init;
- (bool)isActiveViewControllerInNavigationController;
- (bool)isCameraApp;
- (bool)isEditing;
- (bool)isEditingVideo;
- (bool)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (bool)isPlayingSlideshow;
- (bool)isRotationEnabled;
- (id)mainScroller;
- (void)mainScrollerDidEndSmoothScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuControllerSourceRect;
- (id)mostRecentlyActiveTile;
- (id)navigationBar;
- (id)newNavigationBar;
- (id)newToolbar;
- (long long)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)pageController;
- (id)pageController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (void)pageControllerDidEndPaging:(id)arg1;
- (id)pageControllerScrollView;
- (id)pageControllerView;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (void)pauseCurrentMedia:(id)arg1;
- (id)photoCountFormatter;
- (void)photoLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)photoScrollerTitle;
- (id)photoScrubber;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(bool)arg2 atIndex:(long long)arg3 forLoupe:(bool)arg4;
- (void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(long long)arg2;
- (int)photoThumbnailFormat;
- (void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2;
- (bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (bool)photoTileViewControllerCanShowCenterOverlay:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (id)photoTileViewControllerCustomCenterOverlay:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (id)photoTileViewControllerTopLayoutGuide:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)playCurrentMedia:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(bool)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)prepareToDisplayActivitySheet;
- (id)remakerContainerView;
- (void)removeAdjacentCommentsTables;
- (void)removeCurrentPhoto;
- (void)removeRemakerContainerView;
- (void)revealComment:(id)arg1;
- (id)rootNavigationController;
- (id)rotatingFooterView;
- (void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAirTunesMode:(int)arg1;
- (void)setAppInteractionDisabled:(bool)arg1;
- (void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3;
- (void)setBottomBarDisabled:(bool)arg1;
- (void)setCanDelayImageLoading:(bool)arg1;
- (void)setCanShowCopyCallout:(bool)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(bool)arg2;
- (void)setCurrentTileIndex:(unsigned long long)arg1;
- (void)setCurrentTileIndex:(unsigned long long)arg1 updateAfterAnimation:(bool)arg2;
- (void)setDelayImageLoading:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(bool)arg1;
- (void)setIsCameraApp:(bool)arg1;
- (void)setMainScrollerEnabled:(bool)arg1;
- (void)setMenuControllerSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMostRecentlyActiveTile:(id)arg1;
- (void)setNavigationBarDisabled:(bool)arg1;
- (bool)setNextSlideshowState:(int)arg1;
- (void)setPageControllerScrollView:(id)arg1;
- (void)setPhotoScrubber:(id)arg1;
- (void)setPhotoThumbnailFormat:(int)arg1;
- (void)setRotationDisabled:(bool)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(bool)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(bool)arg1;
- (void)setShouldShowOverlaysWhenViewDisappears:(bool)arg1;
- (void)setSlideshowSettingsForCurrentAssetContainer:(id)arg1;
- (void)setStatusBarIsLocked:(bool)arg1;
- (void)setUsesPhotoBrowserStyleStatusBar:(bool)arg1 animated:(bool)arg2;
- (void)setVideoEditingMode:(bool)arg1;
- (void)setVideoEditingMode:(bool)arg1 animated:(bool)arg2;
- (bool)shouldPlayVideoWhenViewAppears;
- (bool)shouldShowActionMenu;
- (bool)shouldShowOverlaysWhenViewAppears;
- (bool)shouldShowOverlaysWhenViewDisappears;
- (bool)shouldShowPlayButton;
- (void)showCommentsTable;
- (void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2;
- (void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2;
- (bool)showingCommentsTable;
- (bool)showsAirTunesOption;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (id)slideshowSettingsForCurrentAssetContainer;
- (bool)statusBarIsLocked;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)togglePlayPause:(id)arg1;
- (void)transitionDidEndWithOperation:(long long)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionWillBegin;
- (void)trimVideo:(id)arg1;
- (void)updateAfterCollapse;
- (void)updateBarsAnimated:(bool)arg1;
- (void)updateOverlaysAnimated:(bool)arg1;
- (void)updateProgressView;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (int)videoRemakerMode;
- (void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (bool)videoViewCanBeginPlayback:(id)arg1;
- (bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidCreateAttachments:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(bool)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (id)videoViewRequestsPickedAirplayRoute:(id)arg1;
- (bool)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsPhotoBrowserStyleStatusBar;

@end
