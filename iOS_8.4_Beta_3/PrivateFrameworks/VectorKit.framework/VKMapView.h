/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapView : CALayer <GGLLayerDisruptor, GGLRenderQueueSource, MDMapControllerDelegate, VKInteractiveMapDelegate> {
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    bool _additionalManifestConfigurationLoaderOpen;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _animatingToEdgeInsets;
    NSMutableArray *_annotationMarkersToAddToNewCanvas;
    unsigned int _applicationState;
    VKMapCanvas *_canvas;
    bool _containsOverlay;
    GGLDisplayLink *_displayLink;
    long long _displayRate;
    VKAnimation *_edgeInsetAnimation;
    VKClassicGlobeCanvas *_globe;
    bool _isChangingMapType;
    bool _isInBackground;
    bool _loaderOpen;
    <VKMapViewDelegate> *_mapDelegate;
    unsigned long long _mapDisplayStyle;
    VKAnimation *_mapDisplayStyleAnimation;
    MDDisplayLayer *_mapLayer;
    long long _mapType;
    VKMemoryObserver *_memoryObserver;
    unsigned long long _regionChangeCount;
    struct shared_ptr<ggl::RenderQueue> { 
        struct RenderQueue {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _renderQueue;
    long long _requestedRate;
    VKLabelMarker *_selectedLabelMarker;
    NSString *_tileLoaderClientID;
    double _verticalYaw;
}

@property(assign,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;
@property(assign,readwrite) bool allowDatelineWraparound;
@property(assign,readonly) double altitude;
@property(getter=isAnimatingToTrackAnnotation,assign,readonly) bool animatingToTrackAnnotation;
@property(assign,readonly) NSArray * annotationMarkers;
@property(assign,readwrite) long long annotationTrackingHeadingAnimationDisplayRate;
@property(assign,readwrite) long long annotationTrackingZoomStyle;
@property(assign,readwrite) unsigned int applicationState;
@property(assign,readonly) bool canEnter3DMode;
@property(assign,readonly) bool canShowFlyover;
@property(assign,readonly) bool canShowFlyoverAnimation;
@property(assign,readwrite) struct { double x1; double x2; double x3; } centerCoordinate;
@property(assign,readonly) double currentZoomLevel;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) bool debugDrawContinuously;
@property(assign,readwrite) bool debugEnableMultisampling;
@property(assign,readonly) float debugFramesPerSecond;
@property(assign,readwrite) bool debugLayoutContinuously;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long displayRate;
@property(assign,readwrite) bool dynamicMapModesEnabled;
@property(assign,readwrite) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property(assign,readonly) bool enableDebugLabelHighlighting;
@property(assign,retain) NSArray * externalTrafficIncidents;
@property(assign,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter;
@property(getter=isFullyDrawn,assign,readonly) bool fullyDrawn;
@property(assign,readwrite) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } fullyOccludedEdgeInsets;
@property(getter=isFullyPitched,assign,readonly) bool fullyPitched;
@property(getter=isGesturing,assign,readwrite) bool gesturing;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CADisplay * hostDisplay;
@property(assign,readwrite) bool iconsShouldAlignToPixels;
@property(assign,readwrite) bool isPitchable;
@property(assign,readwrite) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } labelEdgeInsets;
@property(getter=isLabelMarkerSelectionEnabled,assign,readwrite) bool labelMarkerSelectionEnabled;
@property(assign,readonly) NSArray * labelMarkers;
@property(assign,readwrite) long long labelScaleFactor;
@property(assign,readwrite) bool localizeLabels;
@property(assign,readonly) VKMapCanvas * mapCanvas;
@property(assign,readwrite) <VKMapViewDelegate> * mapDelegate;
@property(assign,readwrite) unsigned long long mapDisplayStyle;
@property(assign,retain) GEOMapRegion * mapRegion;
@property(assign,readonly) GEOMapRegion * mapRegionOfInterest;
@property(assign,readwrite) long long mapType;
@property(assign,readonly) double maximumZoomLevel;
@property(assign,readonly) double minimumZoomLevel;
@property(assign,readwrite) long long navigationShieldSize;
@property(assign,readonly) double pitch;
@property(getter=isPitched,assign,readonly) bool pitched;
@property(assign,readonly) double presentationYaw;
@property(assign,readwrite) bool rendersInBackground;
@property(assign,retain) <GEORoutePreloadSession> * routePreloadSession;
@property(assign,readonly) VKLabelMarker * selectedLabelMarker;
@property(assign,readwrite) long long shieldIdiom;
@property(assign,readwrite) long long shieldSize;
@property(assign,readwrite) bool shouldLoadFallbackTiles;
@property(assign,readwrite) bool shouldLoadMapMargin;
@property(getter=isShowingFlyover,assign,readonly) bool showingFlyover;
@property(assign,readwrite) bool showsBuildings;
@property(assign,readwrite) bool showsPointsOfInterest;
@property(assign,readwrite) bool staysCenteredDuringPinch;
@property(assign,readwrite) bool staysCenteredDuringRotation;
@property(assign,retain) VKStyleManager * styleManager;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) long long targetDisplay;
@property(assign,readwrite) int trackingCameraPanStyle;
@property(assign,readwrite) double trackingZoomScale;
@property(assign,readwrite) bool trafficEnabled;
@property(assign,readwrite) double userZoomFocusStyleGroundspanMeters;
@property(assign,readwrite) double userZoomFocusStyleMaxGroundspanMeters;
@property(assign,readwrite) double userZoomFocusStyleMinGroundspanMeters;
@property(assign,readonly) double verticalYaw;
@property(assign,readonly) NSArray * visibleTileSets;
@property(assign,readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearAnalytics;
- (void)_closeAdditionalManifestConfigurationLoaderConnection;
- (bool)_createDisplayLayer;
- (void)_createGlobe;
- (void)_mapkit_configureFromDefaults:(bool)arg1;
- (void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1;
- (void)_openAdditionalManifestConfigurationLoaderConnection;
- (void)_resetMaximumZoomLevel;
- (void)_runFlyoverTourStateChange:(int)arg1 completion:(id)arg2;
- (void)_setMaximumZoomLevel:(double)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(unsigned long long)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateAnalytics:(bool)arg1;
- (void)_updateBackgroundColor;
- (void)_updateDisplayRate;
- (void)_updateMapDisplayStyle;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(bool)arg2;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (bool)allowDatelineWraparound;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (id)annotationCoordinateTest;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 avoidCurrent:(bool)arg2;
- (id)annotationMarkers;
- (id)annotationRectTest;
- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (unsigned int)applicationState;
- (id)attributionsForCurrentRegion;
- (bool)buildingFootprintsDisabled;
- (bool)canEnter3DMode;
- (bool)canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (bool)canShowFlyover;
- (bool)canShowFlyoverAnimation;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearScene;
- (void)closeLoaderConnection;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateFromLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toMapPointFromLayer:(id)arg2;
- (id)currentCanvas;
- (bool)currentMapTypeSupportsNightMode;
- (double)currentZoomLevel;
- (bool)currentZoomLevelAllowsRotation;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (void)dealloc;
- (bool)debugDrawContinuously;
- (bool)debugDynamicMapModesEnabled;
- (bool)debugEnableMultisampling;
- (void)debugFlyoverTour:(unsigned int)arg1 trip:(unsigned int)arg2;
- (float)debugFramesPerSecond;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)debugLayoutContinuously;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)deselectLabelMarker;
- (id)detailedDescription;
- (void)didDrawWithTimestamp:(double)arg1;
- (void)didEnterBackground;
- (void)didFinishSnapshotting;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didStartPanningDeceleration;
- (void)disableFlyoverStatistics;
- (long long)displayRate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (bool)dynamicMapModesEnabled;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)enableDebugLabelHighlighting;
- (void)enableFlyoverStatistics;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)externalTrafficIncidents;
- (void)flushTileLoads;
- (id)flyoverStatistics;
- (id)focusedLabelsPolylinePainter;
- (void)forceFrame;
- (void)forceLayout;
- (void)forceSceneLoad;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (bool)gridDisabled;
- (id)hostDisplay;
- (bool)iconsShouldAlignToPixels;
- (id)initWithGlobe:(bool)arg1 shouldRasterize:(bool)arg2 inBackground:(bool)arg3;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isEffectivelyHidden;
- (bool)isFullyDrawn;
- (bool)isFullyPitched;
- (bool)isGesturing;
- (bool)isLabelMarkerSelectionEnabled;
- (bool)isPitchable;
- (bool)isPitched;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingFlyover;
- (bool)isShowingNoDataPlaceholders;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })labelEdgeInsets;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (id)labelMarkers;
- (long long)labelScaleFactor;
- (bool)labelsDisabled;
- (bool)localizeLabels;
- (void)map:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)map:(id)arg1 didBecomePitched:(bool)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (id)mapCanvas;
- (void)mapController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)mapControllerNeedsDisplay:(id)arg1;
- (void)mapControllerNeedsInitialization:(id)arg1;
- (id)mapDelegate;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(unsigned long long)arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id)arg1;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (unsigned long long)mapDisplayStyle;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapRegionBounds;
- (id)mapRegionOfInterest;
- (long long)mapType;
- (double)maximumZoomLevel;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevel;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (long long)navigationShieldSize;
- (void)onTimerFired:(id)arg1;
- (void)openLoaderConnection;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)pauseFlyoverTourAnimation;
- (void)pauseTracking;
- (double)pitch;
- (bool)polygonsDisabled;
- (void)preloadNavigationSceneResources;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; bool x3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (bool)rastersDisabled;
- (bool)realisticLandDisabled;
- (bool)realisticRoadsDisabled;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (struct RenderQueue { struct vector<ggl::RenderQueue::Pass, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_1_1_1; struct Pass {} *x_1_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, std::__1::allocator<ggl::RenderQueue::Pass> > { struct Pass {} *x_3_2_1; } x_1_1_3; } x1; struct vector<ggl::CommandBuffer *, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_2_1_1; struct CommandBuffer {} **x_2_1_2; struct __compressed_pair<ggl::CommandBuffer **, std::__1::allocator<ggl::CommandBuffer *> > { struct CommandBuffer {} **x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::RenderTransaction> { struct RenderTransaction {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)renderQueue;
- (bool)rendersInBackground;
- (void)resetRenderQueue;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (bool)roadClassDisabled:(int)arg1;
- (bool)roadsDisabled;
- (id)routePreloadSession;
- (void)runAnimation:(id)arg1;
- (id)secondaryCanvas;
- (void)selectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (id)selectedLabelMarker;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(bool)arg2;
- (void)setContentsScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDrawContinuously:(bool)arg1;
- (void)setDebugDynamicMapModesEnabled:(bool)arg1;
- (void)setDebugEnableMultisampling:(bool)arg1;
- (void)setDebugLayoutContinuously:(bool)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setDisableBuildingFootprints:(bool)arg1;
- (void)setDisableGrid:(bool)arg1;
- (void)setDisableLabels:(bool)arg1;
- (void)setDisablePolygons:(bool)arg1;
- (void)setDisableRasters:(bool)arg1;
- (void)setDisableRealisticLand:(bool)arg1;
- (void)setDisableRealisticRoads:(bool)arg1;
- (void)setDisableRoadClass:(bool)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(bool)arg1;
- (void)setDisplayRate:(long long)arg1;
- (void)setDynamicMapModesEnabled:(bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(id)arg4;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(bool)arg1;
- (void)setIsPitchable:(bool)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabelMarkerSelectionEnabled:(bool)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (void)setMapDisplayStyle:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 animated:(bool)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 completion:(id)arg5;
- (void)setMapType:(long long)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRendersInBackground:(bool)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldLimitTrackingCameraHeight:(bool)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShouldLoadMapMargin:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)setStyleManager:(id)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(long long)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingCameraPanStyle:(int)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldLoadMapMargin;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withMapRegion:(id)arg2;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(bool)arg2 completion:(id)arg3;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(bool)arg2 completion:(id)arg3;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stopFlyoverAnimation;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (id)styleManager;
- (id)styleManagerForCurrentMapType;
- (bool)stylesheetIsDevResource;
- (id)stylesheetName;
- (bool)supportsMapType:(long long)arg1;
- (long long)targetDisplay;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (int)trackingCameraPanStyle;
- (double)trackingZoomScale;
- (bool)trafficEnabled;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(id)arg3;
- (void)updateCameraContext:(id)arg1;
- (bool)updateDisplayLinkStatus;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (double)verticalYaw;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)willEnterForeground;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
