/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessages : PBCodable <NSCopying> {
    NSMutableArray *_addedMessages;
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
}

@property(assign,retain) NSMutableArray * addedMessages;
@property(assign,retain) NSData * dateForRequestingMoreMessages;
@property(assign,retain) NSData * dateSynced;
@property(assign,readwrite) unsigned int fullSyncVersion;
@property(assign,readonly) bool hasDateForRequestingMoreMessages;
@property(assign,readonly) bool hasDateSynced;
@property(assign,readwrite) bool hasFullSyncVersion;

- (void).cxx_destruct;
- (void)addAddedMessage:(id)arg1;
- (id)addedMessageAtIndex:(unsigned long long)arg1;
- (id)addedMessages;
- (unsigned long long)addedMessagesCount;
- (void)clearAddedMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForRequestingMoreMessages;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasDateForRequestingMoreMessages;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddedMessages:(id)arg1;
- (void)setDateForRequestingMoreMessages:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
