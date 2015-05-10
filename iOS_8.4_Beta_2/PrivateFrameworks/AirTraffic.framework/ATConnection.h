/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATConnection : NSObject <ATConnectionDelegate> {
    bool _atcRunning;
    int _atcRunningToken;
    NSObject<ATConnectionDelegate> *_delegate;
    bool _registerForStatus;
    NSMutableArray *_registeredDataclasses;
    NSXPCConnection *_xpcConnection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) NSObject<ATConnectionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDisconnect;
- (void)_sendStatusRegistration;
- (void)cancelSync;
- (void)clearSyncData;
- (void)connection:(id)arg1 updatedAssets:(id)arg2;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connectionWasInterrupted:(id)arg1;
- (void)dataMigrationFinished;
- (void)dealloc;
- (id)delegate;
- (id)getAssetMetrics;
- (id)init;
- (bool)isSyncing:(bool*)arg1 automatically:(bool*)arg2 wirelessly:(bool*)arg3;
- (void)keepATCAlive:(bool)arg1;
- (void)lowBatteryNotification;
- (void)openDeviceMessageLink;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2;
- (void)registerForAssetProgressForDataclass:(id)arg1;
- (void)registerForStatus;
- (void)requestSyncForLibrary:(id)arg1;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterForStatus;

@end
