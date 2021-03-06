/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessageDeletions : PBCodable <NSCopying> {
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
    NSMutableArray *_messageDeletions;
}

@property(assign,retain) NSData * dateSynced;
@property(assign,readwrite) unsigned int fullSyncVersion;
@property(assign,readonly) bool hasDateSynced;
@property(assign,readwrite) bool hasFullSyncVersion;
@property(assign,retain) NSMutableArray * messageDeletions;

- (void).cxx_destruct;
- (void)addMessageDeletion:(id)arg1;
- (void)clearMessageDeletions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageDeletionAtIndex:(unsigned long long)arg1;
- (id)messageDeletions;
- (unsigned long long)messageDeletionsCount;
- (bool)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMessageDeletions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
