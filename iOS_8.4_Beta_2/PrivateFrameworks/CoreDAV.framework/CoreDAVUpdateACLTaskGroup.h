/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVACLTaskDelegate, CoreDAVPropFindTaskDelegate> {
    NSSet *_aceItems;
    CoreDAVPropFindTask *_fetchTask;
    int _state;
    NSURL *_url;
}

@property(assign,retain) NSSet * aceItems;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) CoreDAVPropFindTask * fetchTask;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int state;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSURL * url;

- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startGetACL;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (id)aceItems;
- (void)dealloc;
- (id)fetchTask;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;
- (void)setAceItems:(id)arg1;
- (void)setFetchTask:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)url;

@end
