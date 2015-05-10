/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant

@property(assign,readwrite) bool commentChanged;
@property(assign,readonly) NSDate * lastModifiedParticipationStatus;
@property(assign,readwrite) int pendingStatus;
@property(assign,readwrite) bool statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)_persistentAttendee;
- (bool)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedParticipationStatus;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (int)pendingStatus;
- (void)setCommentChanged:(bool)arg1;
- (void)setParticipantRole:(int)arg1;
- (void)setParticipantStatus:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPendingStatus:(int)arg1;
- (void)setStatusChanged:(bool)arg1;
- (bool)statusChanged;

@end