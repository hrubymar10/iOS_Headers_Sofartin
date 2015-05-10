/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteLine : NSObject <GEORouteMapMatchingDataSource> {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _bounds;
    double _boundsInWorldUnit;
    double _boundsUnitsPerMeter;
    bool _curve;
    bool _hasNewRoadMatches;
    struct { 
        double v[4][4]; 
    } _inverseMatrix;
    double _lastTrafficTimeStamp;
    double _lastUserLocationMatchTimestamp;
    bool _matchToRoads;
    double _metersPerPoint;
    VKPolylineOverlay *_overlay;
    VKPolylineOverlayRenderRegion *_renderRegion;
    NSSet *_retainedTiles;
    struct vector<geo::fast_shared_ptr<vk::RouteLineSection>, std::__1::allocator<geo::fast_shared_ptr<vk::RouteLineSection> > > { 
        struct fast_shared_ptr<vk::RouteLineSection> {} *__begin_; 
        struct fast_shared_ptr<vk::RouteLineSection> {} *__end_; 
        struct __compressed_pair<geo::fast_shared_ptr<vk::RouteLineSection> *, std::__1::allocator<geo::fast_shared_ptr<vk::RouteLineSection> > > { 
            struct fast_shared_ptr<vk::RouteLineSection> {} *__first_; 
        } __end_cap_; 
    } _sections;
    double _simplificationEpsilonPoints;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _userLocation;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _userLocationIndex;
    struct fast_shared_ptr<vk::RouteLineSection> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _userLocationSection;
    double _viewUnitsPerPoint;
}

@property(assign,readonly) struct { double x1; double x2; double x3; double x4; } bounds;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool hasNewRoadMatches;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool needsUpdate;
@property(assign,readwrite) VKPolylineOverlay * overlay;
@property(assign,readwrite) double simplificationEpsilonPoints;
@property(assign,readonly) Class superclass;
@property(assign,readonly) struct PolylineCoordinate { unsigned int x1; float x2; }* userLocationIndex;
@property(assign,readonly) struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; } userLocationSection;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateBounds:(id)arg1;
- (void)_updateTilesCovered:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; })bounds;
- (bool)buildRouteLineForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 containerModel:(id)arg4 viewUnitsPerPoint:(double)arg5 force:(bool)arg6 curve:(bool)arg7 selected:(bool)arg8;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)dealloc;
- (void)forEachMapMatchingSection:(id)arg1;
- (void)forEachSection:(id)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (bool)hasNewRoadMatches;
- (bool)isTrafficUpToDate;
- (bool)isTrafficUptoDate:(double)arg1;
- (bool)needsUpdate;
- (id)overlay;
- (void)setHasNewRoadMatches:(bool)arg1;
- (void)setOverlay:(id)arg1;
- (void)setSimplificationEpsilonPoints:(double)arg1;
- (double)simplificationEpsilonPoints;
- (void)splitRouteLineAtAnnotation:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; }*)userLocationIndex;
- (struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })userLocationSection;

@end