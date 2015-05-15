/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSyncAllObjects : PBCodable <NSCopying> {
    NSMutableArray *_allObjects;
    SYMessageHeader *_header;
    NSString *_syncID;
    unsigned long long _version;
}

@property (nonatomic, retain) NSMutableArray *allObjects;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *syncID;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (void)addAllObjects:(id)arg1;
- (id)allObjects;
- (id)allObjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allObjectsCount;
- (void)clearAllObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllObjects:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)syncID;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
