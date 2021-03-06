/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    ICSDocument *_calendarAvailability;
    NSURL *_inboxURL;
}

@property(assign,retain) ICSDocument * calendarAvailability;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CoreDAVTaskGroupDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSURL * inboxURL;
@property(assign,readonly) Class superclass;

- (id)calendarAvailability;
- (void)dealloc;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)startTaskGroup;

@end
