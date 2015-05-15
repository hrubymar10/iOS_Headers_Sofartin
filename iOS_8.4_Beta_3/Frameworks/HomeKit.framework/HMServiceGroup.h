/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMServiceGroup : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSMutableArray *_currentServices;
    HMHome *_home;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSMutableArray *currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)addService:(id)arg1 completionHandler:(id)arg2;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)currentServices;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleServiceAddedNotification:(id)arg1;
- (void)handleServiceGroupRenamedNotification:(id)arg1;
- (void)handleServiceRemovedNotification:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (void)removeService:(id)arg1 completionHandler:(id)arg2;
- (void)removeServices:(id)arg1;
- (id)services;
- (void)setCurrentServices:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)unconfigure;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
