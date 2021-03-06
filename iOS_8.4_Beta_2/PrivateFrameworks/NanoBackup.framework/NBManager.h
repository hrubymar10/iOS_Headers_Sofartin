/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
 */

@interface NBManager : NSObject {
    NSObject<OS_dispatch_queue> *_externalQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_xpcConnection;
}

@property(assign,retain) NSObject<OS_dispatch_queue> * externalQueue;
@property(assign,retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(assign,retain) NSXPCConnection * xpcConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)createBackupForPairingID:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (void)deleteBackup:(id)arg1 completionHandler:(id)arg2;
- (id)externalQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)internalQueue;
- (void)listBackupsWithCompletionHandler:(id)arg1;
- (void)restoreFromBackup:(id)arg1 completionHandler:(id)arg2;
- (void)restoreFromBackup:(id)arg1 forPairingID:(id)arg2 pairingDataStore:(id)arg3 completionHandler:(id)arg4;
- (void)restoreFromPairingID:(id)arg1 completionHandler:(id)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end
