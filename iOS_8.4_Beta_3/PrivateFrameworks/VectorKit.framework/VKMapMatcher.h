/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions> {
    GEOMapAccess *_map;
    <GEORoutePreloadSession> *_routePreloader;
}

@property (nonatomic, readonly) bool allowsNetworkTileLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloader;
@property (readonly) Class superclass;

+ (id)mapMatcherOfType:(id)arg1;

- (bool)allowsNetworkTileLoad;
- (void)dealloc;
- (id)init;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)routePreloader;
- (void)setRoutePreloader:(id)arg1;
- (id)tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;

@end
