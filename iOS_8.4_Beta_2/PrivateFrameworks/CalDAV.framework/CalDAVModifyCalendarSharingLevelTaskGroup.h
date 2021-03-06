/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    int _action;
    NSURL *_publishedURL;
    int _state;
    NSURL *_url;
}

@property(assign,readwrite) int action;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSURL * publishedURL;
@property(assign,readwrite) int state;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSURL * url;

- (int)action;
- (void)dealloc;
- (id)description;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (id)publishedURL;
- (void)setAction:(int)arg1;
- (void)setPublishedURL:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)url;

@end
