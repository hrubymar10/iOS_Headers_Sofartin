/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(assign,retain) CoreDAVItemWithNoChildren * inviteNotification;
@property(assign,retain) CoreDAVItemWithNoChildren * inviteReply;
@property(assign,readonly) bool isInviteNotification;
@property(assign,readonly) bool isInviteReply;
@property(assign,readonly) bool isResourceChanged;
@property(assign,retain) CoreDAVItemWithNoChildren * resourceChanged;

- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)inviteNotification;
- (id)inviteReply;
- (bool)isInviteNotification;
- (bool)isInviteReply;
- (bool)isResourceChanged;
- (bool)notificationNameIn:(id)arg1;
- (bool)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (void)setInviteNotification:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setResourceChanged:(id)arg1;

@end