/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
    NSMutableArray *_nestedGroupPrincipalURLs;
    int _state;
}

@property(assign,retain) NSMutableArray * nestedGroupPrincipalURLs;
@property(assign,readwrite) int state;

- (void)_expandProperties;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_getChildProperties;
- (void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)nestedGroupPrincipalURLs;
- (void)setNestedGroupPrincipalURLs:(id)arg1;
- (void)setState:(int)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;

@end
