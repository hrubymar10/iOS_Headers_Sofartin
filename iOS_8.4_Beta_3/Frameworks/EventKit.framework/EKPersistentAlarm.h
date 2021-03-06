/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSDate *absoluteDate;
@property (nonatomic, copy) NSDate *acknowledgedDate;
@property (nonatomic) int alarmType;
@property (getter=isDefaultAlarm, nonatomic) bool defaultAlarm;
@property (nonatomic, copy) NSData *externalData;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, readonly) bool isAbsolute;
@property (nonatomic, copy) EKPersistentLocation *location;
@property (nonatomic, retain) EKPersistentAlarm *originalAlarm;
@property (nonatomic) long long proximity;
@property (nonatomic) double relativeOffset;
@property (nonatomic, copy) NSSet *snoozedAlarms;
@property (nonatomic, copy) NSTimeZone *timeZone;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (int)alarmType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)externalData;
- (id)externalID;
- (id)init;
- (bool)isAbsolute;
- (bool)isDefaultAlarm;
- (id)location;
- (id)originalAlarm;
- (id)owner;
- (long long)proximity;
- (double)relativeOffset;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setAlarmType:(int)arg1;
- (void)setDefaultAlarm:(bool)arg1;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRelativeOffset:(double)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)snoozedAlarms;
- (id)timeZone;
- (bool)validate:(id*)arg1;

@end
