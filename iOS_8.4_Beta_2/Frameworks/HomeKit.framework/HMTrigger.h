/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSMutableArray *_currentActionSets;
    bool _enabled;
    HMHome *_home;
    NSDate *_lastFireDate;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,copy) NSArray * actionSets;
@property(assign,retain) NSMutableArray * currentActionSets;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) HMHome * home;
@property(assign,copy) NSDate * lastFireDate;
@property(assign,readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(assign,readonly) NSUUID * messageTargetUUID;
@property(assign,retain) HMMessageDispatcher * msgDispatcher;
@property(assign,copy) NSString * name;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSUUID * uuid;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleTriggerFired:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updateActionSet:(id)arg1 add:(bool)arg2 completionHandler:(id)arg3;
- (id)actionSets;
- (void)addActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)currentActionSets;
- (void)dealloc;
- (void)enable:(bool)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)handleTriggerActivatedNotification:(id)arg1;
- (void)handleTriggerFiredNotification:(id)arg1;
- (void)handleTriggerRenamedNotification:(id)arg1;
- (void)handleUpdatedActionSetNotification:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (bool)isEnabled;
- (id)lastFireDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (void)removeActionSet:(id)arg1 completionHandler:(id)arg2;
- (id)serializeForAdd;
- (void)setCurrentActionSets:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)unconfigure;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
