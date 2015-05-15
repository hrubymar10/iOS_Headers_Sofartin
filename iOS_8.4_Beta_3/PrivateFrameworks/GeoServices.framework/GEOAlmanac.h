/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanac : NSObject {
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
}

@property(assign,readonly) bool isDayLight;
@property(assign,readonly) NSDate * nextSunrise;
@property(assign,readonly) NSDate * nextSunset;
@property(assign,readonly) NSDate * nextTransit;
@property(assign,readonly) NSDate * previousSunrise;
@property(assign,readonly) NSDate * previousSunset;
@property(assign,readonly) NSDate * previousTransit;
@property(assign,readonly) NSDate * sunrise;
@property(assign,readonly) NSDate * sunset;
@property(assign,readonly) NSDate * transit;

- (id)_newRiseTransitSetForLocation:(struct { double x1; double x2; })arg1 julianDay:(double)arg2 altitude:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3;
- (void)dealloc;
- (bool)isDayLight;
- (bool)isDayLightForDate:(id)arg1;
- (bool)isDayLightForTime:(double)arg1;
- (id)nextSunrise;
- (id)nextSunset;
- (id)nextTransit;
- (id)previousSunrise;
- (id)previousSunset;
- (id)previousTransit;
- (id)sortedTimesForDate:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)transit;

@end
