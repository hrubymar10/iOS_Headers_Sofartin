/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    CalDAVPrincipalEmailDetailsResult *_principalResult;
    NSURL *_principalURL;
}

@property(assign,retain) NSSet * addresses;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * displayName;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CalDAVPrincipalEmailDetailsResult * principalResult;
@property(assign,retain) NSURL * principalURL;
@property(assign,readonly) Class superclass;

- (void)_finishWithError:(id)arg1;
- (void)_processPropFind:(id)arg1;
- (id)addresses;
- (void)dealloc;
- (id)displayName;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)principalResult;
- (id)principalURL;
- (void)setPrincipalResult:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
