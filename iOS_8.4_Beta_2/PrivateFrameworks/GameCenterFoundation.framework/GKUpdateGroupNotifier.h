/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroupNotifier : NSObject {
    NSError *_error;
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
}

@property(assign,retain) NSError * error;
@property(assign,readwrite) GKUpdateGroup * group;
@property(assign,retain) NSLock * lock;
@property(assign,retain) NSMutableArray * updateQueue;

- (void)addUpdate:(id)arg1 error:(id)arg2;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)group;
- (id)init;
- (id)lock;
- (oneway void)release;
- (id)retain;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)updateError:(id)arg1;
- (id)updateQueue;

@end