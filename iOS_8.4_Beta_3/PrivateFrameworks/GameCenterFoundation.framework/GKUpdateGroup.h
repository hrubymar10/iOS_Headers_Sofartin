/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSError *_error;
    NSLock *_lock;
    NSString *_name;
    NSMutableArray *_notifiers;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property(assign,readwrite) NSObject<OS_dispatch_group> * dispatchGroup;
@property(assign,retain) NSError * error;
@property(assign,retain) NSLock * lock;
@property(assign,retain) NSString * name;
@property(assign,retain) NSMutableArray * notifiers;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * targetQueue;
@property(assign,readonly) long long updateCount;

+ (id)updateGroup;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1;
+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)applyUpdates;
- (void)cancelUpdates;
- (void)dealloc;
- (id)dispatchGroup;
- (id)error;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(id)arg1;
- (id)lock;
- (id)name;
- (id)notifiers;
- (void)perform:(id)arg1;
- (void)performOnQueue:(id)arg1 block:(id)arg2;
- (void)setDispatchGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifiers:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (id)targetQueue;
- (long long)updateCount;
- (void)wait;

@end