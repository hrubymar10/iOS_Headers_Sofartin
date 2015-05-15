/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerData : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *fDistance;
    NSDate *fEndDate;
    NSNumber *fFloorAscended;
    NSNumber *fFloorDescended;
    NSNumber *fNumberOfSteps;
    NSNumber *fPace;
    NSNumber *fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
}

@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *floorsAscended;
@property (nonatomic, readonly) NSNumber *floorsDescended;
@property (nonatomic, readonly) NSNumber *numberOfSteps;
@property (nonatomic, readonly) NSNumber *pace;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)floorsAscended;
- (id)floorsDescended;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorAscended:(int)arg5 floorDescended:(int)arg6 recordID:(int)arg7 pace:(double)arg8 sourceId:(id)arg9;
- (id)numberOfSteps;
- (id)pace;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
