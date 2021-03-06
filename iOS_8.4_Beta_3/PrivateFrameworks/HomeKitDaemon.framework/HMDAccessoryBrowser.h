/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver> {
    HMDAccessoryManager *_accessoryManager;
    NSMutableSet *_browsingXPCConnections;
    unsigned long long _generationCounter;
    HMMessageDispatcher *_messageDispatcher;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) HMDAccessoryManager *accessoryManager;
@property (nonatomic, retain) NSMutableSet *browsingXPCConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_registerForMessages;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (id)accessoryManager;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (id)browsingXPCConnections;
- (void)dealloc;
- (unsigned long long)generationCounter;
- (id)initWithMessageDispatcher:(id)arg1 accessoryManager:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setAccessoryManager:(id)arg1;
- (void)setBrowsingXPCConnections:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
