/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteRoadInfo : NSObject {
    NSString *_name;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    NSString *_shieldGroup;
}

@property(assign,retain) NSString * name;
@property(assign,readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property(assign,retain) NSString * shieldGroup;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (id)name;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (id)shieldGroup;

@end