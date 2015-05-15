/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartRateReading : NSObject <NSSecureCoding> {
    long long _confidence;
    HKQuantity *_heartRate;
}

@property(assign,readwrite) long long confidence;
@property(assign,retain) HKQuantity * heartRate;

+ (id)readingWithHeartRate:(id)arg1 confidence:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)heartRate;
- (id)initWithCoder:(id)arg1;
- (void)setConfidence:(long long)arg1;
- (void)setHeartRate:(id)arg1;

@end
