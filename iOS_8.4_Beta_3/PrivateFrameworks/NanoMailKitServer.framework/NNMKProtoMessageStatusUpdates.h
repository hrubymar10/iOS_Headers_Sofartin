/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying> {
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
    NSMutableArray *_messageStatusUpdates;
}

@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, retain) NSMutableArray *messageStatusUpdates;

- (void).cxx_destruct;
- (void)addMessageStatusUpdate:(id)arg1;
- (void)clearMessageStatusUpdates;
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
- (id)messageStatusUpdateAtIndex:(unsigned long long)arg1;
- (id)messageStatusUpdates;
- (unsigned long long)messageStatusUpdatesCount;
- (bool)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMessageStatusUpdates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
