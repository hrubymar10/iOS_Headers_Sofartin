/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {
    bool _active;
    NSMutableArray *_currentActionSets;
    HMDHome *_home;
    NSDate *_mostRecentFireDate;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readwrite) bool active;
@property(assign,retain) NSMutableArray * currentActionSets;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) HMDHome * home;
@property(assign,readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(assign,readonly) NSUUID * messageTargetUUID;
@property(assign,copy) NSDate * mostRecentFireDate;
@property(assign,retain) HMMessageDispatcher * msgDispatcher;
@property(assign,retain) NSString * name;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSUUID * uuid;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activate:(bool)arg1;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_registerForMessages;
- (id)_updateActionSets:(id)arg1 add:(bool)arg2;
- (id)actionSets;
- (bool)active;
- (void)checkForNoActions;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)currentActionSets;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)mostRecentFireDate;
- (id)msgDispatcher;
- (id)name;
- (void)reEvaluate;
- (void)removeActionSet:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMostRecentFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)triggerFired;
- (id)uuid;
- (id)workQueue;

@end
