/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertion : NSObject {
    SBSStatusBarStyleOverridesAssertionData *_assertionData;
    id _invalidationHandler;
    NSRecursiveLock *_invalidationLock;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
}

@property(assign,retain) SBSStatusBarStyleOverridesAssertionData * assertionData;
@property(assign,copy) id invalidationHandler;
@property(assign,retain) NSRecursiveLock * invalidationLock;
@property(assign,retain) NSObject<OS_dispatch_queue> * invalidationQueue;
@property(assign,readonly) bool isExclusive;
@property(assign,readonly) int pid;
@property(assign,readonly) int statusBarStyleOverrides;
@property(assign,copy) NSString * uniqueIdentifier;

+ (id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3;
+ (id)backgroundLocationAssertionForPID:(int)arg1;

- (void)_callInvalidationHandler;
- (void)acquireWithHandler:(id)arg1 onQueue:(id)arg2;
- (id)assertionData;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (void)invalidate;
- (void)invalidateFromServer;
- (id)invalidationHandler;
- (id)invalidationLock;
- (id)invalidationQueue;
- (bool)isEqual:(id)arg1;
- (bool)isExclusive;
- (int)pid;
- (void)setAssertionData:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setInvalidationLock:(id)arg1;
- (void)setInvalidationQueue:(id)arg1;
- (int)statusBarStyleOverrides;
- (id)uniqueIdentifier;

@end
