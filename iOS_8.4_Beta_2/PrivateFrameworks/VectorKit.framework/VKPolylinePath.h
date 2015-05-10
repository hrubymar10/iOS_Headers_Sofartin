/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylinePath : NSObject {
    VKPolylineOverlay *_overlay;
    bool _ownsPoints;
    unsigned int _pointCount;
    struct Matrix<float, 2, 1> { float x1[2]; } *_points;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeStart;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    BOOL _trafficSpeed;
}

@property(assign,readonly) bool hasCompletedMapMatching;
@property(assign,readonly) bool isMapMatched;
@property(assign,readonly) unsigned int pointCount;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct * points; /* unknown property attribute:  1>=[2f]} */
@property(assign,readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeEnd;
@property(assign,readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeStart;
@property(assign,readonly) GEOComposedRouteSection * section;
@property(assign,readonly) GEOSnappedRoutePath * snappedPath;
@property(assign,readwrite) BOOL trafficSpeed;

- (id).cxx_construct;
- (void)assignPoints:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 count:(unsigned int)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)arg2;
- (void)dealloc;
- (id)description;
- (bool)hasCompletedMapMatching;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (struct Matrix<float, 2, 1> { float x1[2]; })interpolateAt:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1;
- (bool)isMapMatched;
- (struct PolylineCoordinate { unsigned int x1; float x2; })pathIndexFromRouteIndex:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (struct Matrix<float, 2, 1> { float x1[2]; }*)points;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeEnd;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeStart;
- (id)section;
- (void)setRouteEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setTrafficSpeed:(BOOL)arg1;
- (id)snappedPath;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;
- (BOOL)trafficSpeed;

@end
