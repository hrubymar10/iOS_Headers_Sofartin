/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvice : NSObject <EKTravelAdvice> {
    unsigned long long _accidentState;
    NSDate *_predictedDepartureTime;
    unsigned long long _trafficLevel;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property(assign,readonly) unsigned long long accidentState;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSDate * predictedDepartureTime;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long trafficLevel;
@property(assign,readonly) unsigned long long travelState;
@property(assign,readonly) double travelStateScore;

- (unsigned long long)accidentState;
- (void)dealloc;
- (id)description;
- (id)initWithTrafficLevel:(unsigned long long)arg1 accidentState:(unsigned long long)arg2 travelState:(unsigned long long)arg3 travelStateScore:(double)arg4 predictedDepartureTime:(id)arg5;
- (id)predictedDepartureTime;
- (unsigned long long)trafficLevel;
- (unsigned long long)travelState;
- (double)travelStateScore;

@end