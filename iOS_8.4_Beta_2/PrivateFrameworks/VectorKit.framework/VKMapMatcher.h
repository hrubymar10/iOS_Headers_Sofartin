/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions> {
    GEOMapAccess *_map;
    <GEORoutePreloadSession> *_routePreloader;
}

@property(assign,readonly) bool allowsNetworkTileLoad;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) <GEORoutePreloadSession> * routePreloader;
@property(assign,readonly) Class superclass;

+ (id)mapMatcherOfType:(id)arg1;

- (bool)allowsNetworkTileLoad;
- (void)dealloc;
- (id)init;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)routePreloader;
- (void)setRoutePreloader:(id)arg1;
- (id)tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;

@end
