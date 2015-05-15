/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteStep : NSObject {
    GEOStep *_geoStep;
    NSString *_instructions;
    MKRouteStepPolyline *_polyline;
    unsigned long long _transportType;
}

@property (nonatomic, readonly) double distance;
@property (getter=_geoStep, nonatomic, readonly) GEOStep *geoStep;
@property (nonatomic, readonly) NSString *instructions;
@property (nonatomic, readonly) NSString *notice;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_geoStep;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;
- (double)distance;
- (id)instructions;
- (id)notice;
- (id)polyline;
- (unsigned long long)transportType;

@end
