/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutTotalDistanceFilter : _HKFilter {
    unsigned long long _operatorType;
    HKQuantity *_totalDistance;
}

@property(assign,readonly) unsigned long long operatorType;
@property(assign,readonly) HKQuantity * totalDistance;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithTotalDistance:(id)arg1 operatorType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;
- (id)totalDistance;

@end
