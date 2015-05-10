/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelTransitionSet : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSMutableArray *_instances;
    unsigned long long _timestamp;
}

@property(assign,readwrite) bool hasTimestamp;
@property(assign,retain) NSMutableArray * instances;
@property(assign,readwrite) unsigned long long timestamp;

- (void)addInstance:(id)arg1;
- (void)clearInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)instances;
- (unsigned long long)instancesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstances:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
