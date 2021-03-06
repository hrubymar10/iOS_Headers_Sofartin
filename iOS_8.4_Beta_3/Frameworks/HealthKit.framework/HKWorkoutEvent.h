/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutEvent : NSObject <HDCoding, NSSecureCoding> {
    NSDate *_date;
    long long _type;
}

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long type;

+ (id)_newWorkoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)createWithCodable:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)_init;
- (void)_setDate:(id)arg1;
- (void)_setType:(long long)arg1;
- (id)_validateConfiguration;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)codableRepresentationForSync;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
