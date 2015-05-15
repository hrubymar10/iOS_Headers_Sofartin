/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssociationSyncEntity : NSObject <HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 lastSyncAnchor:(long long*)arg5 healthDaemon:(id)arg6 error:(id*)arg7;
+ (bool)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (long long)syncEntityType;
+ (unsigned long long)syncObjectLimitForNanoSyncMessage;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5;

@end
