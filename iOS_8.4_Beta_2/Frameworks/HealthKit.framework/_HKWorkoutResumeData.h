/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {
    NSMutableArray *_gaps;
    NSUUID *_lastUUID;
    bool _lastUUIDInJournal;
}

@property(assign,retain) NSMutableArray * gaps;
@property(assign,retain) NSUUID * lastUUID;
@property(assign,readwrite) bool lastUUIDInJournal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gaps;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUUID;
- (bool)lastUUIDInJournal;
- (void)setGaps:(id)arg1;
- (void)setLastUUID:(id)arg1;
- (void)setLastUUIDInJournal:(bool)arg1;

@end
