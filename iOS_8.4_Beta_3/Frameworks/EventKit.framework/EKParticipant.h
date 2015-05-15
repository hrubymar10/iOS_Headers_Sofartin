/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {
    EKCalendarItem *_owner;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) NSString * UUID;
@property(assign,copy) NSURL * address;
@property(assign,copy) NSString * comment;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * emailAddress;
@property(assign,copy) NSString * firstName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isCurrentUser;
@property(assign,copy) NSString * lastName;
@property(assign,readonly) NSString * name;
@property(assign,readonly) EKCalendarItem * owner;
@property(assign,readonly) int participantRole;
@property(assign,readonly) int participantStatus;
@property(assign,readonly) int participantType;
@property(assign,readonly) Class superclass;

+ (void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)UUID;
- (id)_persistentItem;
- (id)address;
- (id)comment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3;
- (id)emailAddress;
- (id)firstName;
- (bool)isCurrentUser;
- (bool)isEqualToParticipant:(id)arg1;
- (id)lastName;
- (id)name;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (void)setAddress:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end