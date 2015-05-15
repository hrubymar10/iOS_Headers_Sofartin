/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant

@property(assign,readwrite) bool commentChanged;
@property(assign,copy) NSDate * lastModified;
@property(assign,readwrite) int participantRole;
@property(assign,readwrite) int participantStatus;
@property(assign,readwrite) int participantType;
@property(assign,readwrite) int pendingStatus;
@property(assign,readwrite) bool statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (void)_setFlag:(unsigned int)arg1 value:(bool)arg2;
- (bool)_valueForFlag:(unsigned int)arg1;
- (bool)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)lastModified;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (int)pendingStatus;
- (void)setCommentChanged:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setParticipantRole:(int)arg1;
- (void)setParticipantStatus:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPendingStatus:(int)arg1;
- (void)setStatusChanged:(bool)arg1;
- (bool)statusChanged;

@end
