/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteTrafficBuilder : NSObject {
    NSMutableData *_trafficColors;
    unsigned int _trafficDistance;
    NSMutableData *_trafficOffsets;
}

- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)copyTrafficToRoute:(id)arg1;
- (void)dealloc;
- (id)init;

@end
