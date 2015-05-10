/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataSyncEntity : NSObject <HDSyncEntity>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)_objectWithCodable:(id)arg1;
+ (id)_objectsFromCodableObjectsInCollection:(id)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (Class)healthEntityClass;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (bool)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (long long)syncEntityType;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5;

@end