/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRoom : NSObject <HMMessageReceiver, NSSecureCoding> {
    HMHome *_home;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)_updateName:(id)arg1 completionHandler:(id)arg2;
- (id)accessories;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRoomRenamedNotification:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)unconfigure;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
