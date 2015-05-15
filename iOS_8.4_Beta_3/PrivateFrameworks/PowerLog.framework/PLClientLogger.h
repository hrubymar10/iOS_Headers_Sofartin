/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLClientLogger : NSObject {
    bool _clientDebug;
    NSMutableDictionary *_pendingTaskCache;
    NSMutableDictionary *_permissionCache;
    NSObject<OS_dispatch_queue> *_permissionQueue;
    NSString *_processName;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

@property bool clientDebug;
@property (retain) NSMutableDictionary *pendingTaskCache;
@property (retain) NSMutableDictionary *permissionCache;
@property (retain) NSObject<OS_dispatch_queue> *permissionQueue;
@property (retain) NSString *processName;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (bool)clientDebug;
- (id)init;
- (void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)logStateCaches;
- (id)pendingTaskCache;
- (id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3;
- (id)permissionCache;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (id)permissionQueue;
- (void)powerlogStateChanged;
- (id)processName;
- (id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4;
- (void)setClientDebug:(bool)arg1;
- (void)setPendingTaskCache:(id)arg1;
- (void)setPermissionCache:(id)arg1;
- (void)setPermissionQueue:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (id)workQueue;
- (id)xpcConnection;
- (id)xpcConnectionQueue;
- (void)xpcSendMessage:(id)arg1;
- (id)xpcSendMessageWithReply:(id)arg1;

@end
