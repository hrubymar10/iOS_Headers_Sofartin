/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoImageAttachmentSync : PBCodable <NSCopying> {
    NSString *_contentId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
    NSData *_imageData;
    NSString *_messageId;
}

@property(assign,retain) NSString * contentId;
@property(assign,retain) NSData * dateSynced;
@property(assign,readwrite) unsigned int fullSyncVersion;
@property(assign,readonly) bool hasContentId;
@property(assign,readonly) bool hasDateSynced;
@property(assign,readwrite) bool hasFullSyncVersion;
@property(assign,readonly) bool hasImageData;
@property(assign,readonly) bool hasMessageId;
@property(assign,retain) NSData * imageData;
@property(assign,retain) NSString * messageId;

- (void).cxx_destruct;
- (id)contentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasContentId;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasImageData;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end