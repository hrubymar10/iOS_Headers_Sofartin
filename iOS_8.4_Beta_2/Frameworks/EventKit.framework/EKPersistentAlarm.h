/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

@property(assign,readonly) NSString * UUID;
@property(assign,copy) NSDate * absoluteDate;
@property(assign,copy) NSDate * acknowledgedDate;
@property(assign,readwrite) int alarmType;
@property(getter=isDefaultAlarm,assign,readwrite) bool defaultAlarm;
@property(assign,copy) NSData * externalData;
@property(assign,copy) NSString * externalID;
@property(assign,readonly) bool isAbsolute;
@property(assign,copy) EKPersistentLocation * location;
@property(assign,retain) EKPersistentAlarm * originalAlarm;
@property(assign,readwrite) long long proximity;
@property(assign,readwrite) double relativeOffset;
@property(assign,copy) NSSet * snoozedAlarms;
@property(assign,copy) NSTimeZone * timeZone;

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
