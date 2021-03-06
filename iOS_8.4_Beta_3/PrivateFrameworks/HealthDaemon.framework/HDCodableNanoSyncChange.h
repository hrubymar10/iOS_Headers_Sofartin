/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncChange : PBCodable <HDNanoSyncDescription, HDSyncChange, NSCopying> {
    long long _endAnchor;
    struct { 
        unsigned int endAnchor : 1; 
        unsigned int startAnchor : 1; 
        unsigned int objectType : 1; 
    } _has;
    NSMutableArray *_objectDatas;
    int _objectType;
    long long _startAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endAnchor;
@property (nonatomic) bool hasEndAnchor;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) bool hasStartAnchor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *objectDatas;
@property (nonatomic) int objectType;
@property (nonatomic) long long startAnchor;
@property (readonly) Class superclass;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;

- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endAnchor;
- (bool)hasEndAnchor;
- (bool)hasObjectType;
- (bool)hasStartAnchor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (id)objectDatas;
- (unsigned long long)objectDatasCount;
- (int)objectType;
- (bool)readFrom:(id)arg1;
- (void)setEndAnchor:(long long)arg1;
- (void)setHasEndAnchor:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasStartAnchor:(bool)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2;
- (void)setStartAnchor:(long long)arg1;
- (long long)startAnchor;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end
