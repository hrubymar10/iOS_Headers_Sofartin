/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapViewController : UIViewController <FMF3HiddenMapTrackingHandlerDelegate, FMFMapOptionsViewControllerDelegate, FMFMapViewDelegateInternalDelegate, FMFNoLocationViewDelegate, FMFSessionDelegateInternal> {
    bool __blockDidReceiveAnimation;
    NSSet *__internalHandlesShowingLocations;
    bool __isRenderingInitialMap;
    NSSet *__preloadedHandles;
    bool __refreshingIsPaused;
    void *_addressBook;
    UIColor *_annotationTintColor;
    UIImageView *_cachedMapView;
    bool _canShowNoLocation;
    unsigned long long _defaultMapType;
    <FMFMapViewControllerDelegate> *_delegate;
    UIBarButtonItem *_directionsBarButtonItem;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    UIToolbar *_floatingLocationToolbar;
    UIView *_floatingToolbarView;
    FMFSession *_fmfSession;
    FMF3HiddenMapTrackingHandler *_hiddenMap;
    UIBarButtonItem *_infoBarButtonItem;
    bool _isSimpleMap;
    FMFMapOptionsViewController *_mapOptionsVC;
    bool _mapTypeLoaded;
    MKMapView *_mapView;
    FMFMapViewDelegateInternal *_mapViewDelegate;
    FMFNoLocationView *_noLocationView;
    FMFRefreshBarButtonItem *_refreshButton;
    bool _shouldZoomToFitMeAndLocations;
    bool _shouldZoomToFitNewLocations;
    bool _showFloatingMapLocationButton;
    FMFTitleView *_titleView;
    UIToolbar *_toolbar;
    MKUserTrackingBarButtonItem *_userLocationButton;
    bool _viewWillAppearCalled;
}

@property (nonatomic) bool _blockDidReceiveAnimation;
@property (nonatomic, retain) NSSet *_internalHandlesShowingLocations;
@property (nonatomic) bool _isRenderingInitialMap;
@property (nonatomic, retain) NSSet *_preloadedHandles;
@property (nonatomic) bool _refreshingIsPaused;
@property (nonatomic) void*addressBook;
@property (nonatomic, copy) UIColor *annotationTintColor;
@property (nonatomic, retain) UIImageView *cachedMapView;
@property (nonatomic) bool canShowNoLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultMapType;
@property (nonatomic) <FMFMapViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *directionsBarButtonItem;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UIToolbar *floatingLocationToolbar;
@property (nonatomic, retain) UIView *floatingToolbarView;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (nonatomic, copy) NSSet *handlesShowingLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FMF3HiddenMapTrackingHandler *hiddenMap;
@property (nonatomic, retain) UIBarButtonItem *infoBarButtonItem;
@property (nonatomic) bool isSimpleMap;
@property (nonatomic, retain) FMFMapOptionsViewController *mapOptionsVC;
@property (nonatomic) bool mapTypeLoaded;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) FMFMapViewDelegateInternal *mapViewDelegate;
@property (nonatomic, retain) FMFNoLocationView *noLocationView;
@property (nonatomic, retain) FMFRefreshBarButtonItem *refreshButton;
@property (nonatomic) bool shouldZoomToFitMeAndLocations;
@property (nonatomic) bool shouldZoomToFitNewLocations;
@property (nonatomic) bool showFloatingMapLocationButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) FMFTitleView *titleView;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) MKUserTrackingBarButtonItem *userLocationButton;
@property (nonatomic) bool viewWillAppearCalled;

+ (struct CGSize { double x1; double x2; })annotationImageSize;
+ (id)smallAnnotationViewImage;
+ (id)smallAnnotationViewImageWithTintColor:(id)arg1;

- (void).cxx_destruct;
- (void)_authorizeMonitoringLocation;
- (bool)_blockDidReceiveAnimation;
- (void)_dismiss:(id)arg1;
- (id)_internalAnnotationTintColor;
- (id)_internalHandlesShowingLocations;
- (bool)_isRenderingInitialMap;
- (id)_preloadedHandles;
- (bool)_refreshingIsPaused;
- (id)_selectedHandleAnnotation;
- (void)_updateDirectionsButtonEnabled;
- (void)_updateLocationButtonEnabled;
- (void)_updateTitleViewLocation:(id)arg1;
- (void)addFloatingToolbar;
- (void)addHandlesToSession;
- (void*)addressBook;
- (id)annotationImageForHandle:(id)arg1;
- (id)annotationTintColor;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)cachedMapView;
- (bool)canShowNoLocation;
- (void)dealloc;
- (unsigned long long)defaultMapType;
- (id)delegate;
- (void)deselectAllAnnotations;
- (void)destroySession;
- (void)didDeselectLocation:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSelectLocation:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (id)directionsBarButtonItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)enablePreloadedHandles;
- (id)floatingLocationToolbar;
- (id)floatingToolbarView;
- (id)fmfSession;
- (void)getDirections;
- (id)handlesShowingLocations;
- (id)hiddenMap;
- (void)hiddenMapTrackerDidUpdateMapToTrackingType:(long long)arg1;
- (void)hideCachedMap;
- (id)infoBarButtonItem;
- (void)infoButtonTapped:(id)arg1;
- (id)init;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (void)initializeDefaults;
- (bool)isCompact;
- (bool)isSimpleMap;
- (void)loadCachedLocationsForHandles;
- (void)loadDelegate;
- (void)loadView;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(bool)arg2;
- (bool)mapHasUserLocations;
- (id)mapOptionsVC;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (bool)mapTypeLoaded;
- (id)mapView;
- (id)mapViewDelegate;
- (void)mapViewDidFinishRenderingMap;
- (id)noLocationView;
- (void)openInMapsButtonTapped:(id)arg1;
- (id)personImageForNoLocationView;
- (void)presentMapOptionsModal:(id)arg1;
- (void)reZoomToFit;
- (id)refreshButton;
- (void)refreshButtonTapped:(id)arg1;
- (void)regionDidChangeAnimated:(bool)arg1;
- (void)regionWillChangeAnimated:(bool)arg1;
- (void)removeAllFriendLocationsFromMap;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (void)removeHandlesFromSession;
- (void)resumeRefreshingLocations;
- (void)selectAnnotationIfSingleForMac;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (bool)sessionContainsHandle:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAnnotationTintColor:(id)arg1;
- (void)setCachedMapView:(id)arg1;
- (void)setCanShowNoLocation:(bool)arg1;
- (void)setDefaultMapType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionsBarButtonItem:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFloatingLocationToolbar:(id)arg1;
- (void)setFloatingToolbarView:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (void)setHandlesShowingLocations:(id)arg1;
- (void)setHiddenMap:(id)arg1;
- (void)setInfoBarButtonItem:(id)arg1;
- (void)setIsSimpleMap:(bool)arg1;
- (void)setMapOptionsVC:(id)arg1;
- (void)setMapTypeLoaded:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)setMapViewDelegate:(id)arg1;
- (void)setNoLocationView:(id)arg1;
- (void)setRefreshButton:(id)arg1;
- (void)setShouldZoomToFitMeAndLocations:(bool)arg1;
- (void)setShouldZoomToFitNewLocations:(bool)arg1;
- (void)setShowFloatingMapLocationButton:(bool)arg1;
- (void)setTitleView:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setUserLocationButton:(id)arg1;
- (void)setViewWillAppearCalled:(bool)arg1;
- (void)set_blockDidReceiveAnimation:(bool)arg1;
- (void)set_internalHandlesShowingLocations:(id)arg1;
- (void)set_isRenderingInitialMap:(bool)arg1;
- (void)set_preloadedHandles:(id)arg1;
- (void)set_refreshingIsPaused:(bool)arg1;
- (bool)shouldZoomToFitMeAndLocations;
- (bool)shouldZoomToFitNewLocations;
- (bool)showFloatingMapLocationButton;
- (bool)singleAnnotationOnMap;
- (void)startShowingLocationsForHandles:(id)arg1;
- (void)stopRefreshingLocations;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (id)titleView;
- (id)titleViewForSelectedHandle;
- (id)toolbar;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (void)updateMapWithNewLocation:(id)arg1 animated:(bool)arg2;
- (void)updateNoLocationView:(bool)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (id)userLocationButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)viewWillAppearCalled;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit;
- (void)zoomToFit:(bool)arg1;

@end
