/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {
    NSString *_comment;
    bool _commentChanged;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_name;
    int _participantStatus;
    bool _statusChanged;
    NSURL *_url;
}

@property(assign,readonly) NSString * comment;
@property(assign,readonly) bool commentChanged;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * emailAddress;
@property(assign,readonly) NSString * firstName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * lastName;
@property(assign,readonly) NSString * name;
@property(assign,readonly) int participantStatus;
@property(assign,readonly) bool statusChanged;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSURL * url;

- (id)comment;
- (bool)commentChanged;
- (void)dealloc;
- (id)emailAddress;
- (id)firstName;
- (id)initWithAttendee:(id)arg1;
- (id)lastName;
- (id)name;
- (int)participantStatus;
- (bool)statusChanged;
- (id)url;

@end
