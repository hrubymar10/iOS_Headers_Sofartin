/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
    CalDAVCalendarServerCancelItem *_cancel;
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerReplyItem *_reply;
    CalDAVCalendarServerUpdateItem *_update;
}

@property(assign,retain) CalDAVCalendarServerCancelItem * cancel;
@property(assign,retain) CoreDAVItemWithNoChildren * create;
@property(assign,retain) CalDAVCalendarServerReplyItem * reply;
@property(assign,retain) CalDAVCalendarServerUpdateItem * update;

- (id)cancel;
- (id)copyParseRules;
- (id)create;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)reply;
- (void)setCancel:(id)arg1;
- (void)setCreate:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setUpdate:(id)arg1;
- (id)update;

@end
