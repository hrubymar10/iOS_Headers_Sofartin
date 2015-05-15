/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectAssociations : PBCodable <NSCopying> {
    NSData *_associationUuid;
    NSData *_objectUuids;
}

@property(assign,retain) NSData * associationUuid;
@property(assign,readonly) bool hasAssociationUuid;
@property(assign,readonly) bool hasObjectUuids;
@property(assign,retain) NSData * objectUuids;

- (void).cxx_destruct;
- (id)associationUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedAssociationUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociationUuid;
- (bool)hasObjectUuids;
- (unsigned long long)hash;
- (id)initWithAssociationUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectUuids;
- (bool)readFrom:(id)arg1;
- (void)setAssociationUuid:(id)arg1;
- (void)setObjectUuids:(id)arg1;
- (void)writeTo:(id)arg1;

@end