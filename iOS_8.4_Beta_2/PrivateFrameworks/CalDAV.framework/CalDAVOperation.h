/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVOperation : CoreDAVTaskGroup {
    bool _isCancellingTaskGroups;
    NSMutableSet *_outstandingTaskGroups;
    <CalDAVPrincipal> *_principal;
}

@property(assign,readonly) NSMutableSet * outstandingTaskGroups;
@property(assign,readonly) <CalDAVPrincipal> * principal;

- (void)_tearDownAllTaskGroupsWithBlock:(id)arg1;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)dealloc;
- (id)init;
- (id)initWithPrincipal:(id)arg1;
- (id)outstandingTaskGroups;
- (id)principal;

@end