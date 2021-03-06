/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {
    unsigned long long _allowedEntityTypes;
    int _status;
}

@property(assign,readwrite) unsigned long long allowedEntityTypes;
@property(assign,readwrite) int status;

- (unsigned long long)allowedEntityTypes;
- (id)initWithType:(long long)arg1;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
