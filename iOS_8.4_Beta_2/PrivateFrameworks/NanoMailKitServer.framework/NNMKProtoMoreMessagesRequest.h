/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessagesRequest : PBRequest <NSCopying> {
    NSData *_beforeDateReceived;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
}

@property(assign,retain) NSData * beforeDateReceived;
@property(assign,readwrite) unsigned int fullSyncVersion;
@property(assign,readonly) bool hasBeforeDateReceived;
@property(assign,readwrite) bool hasFullSyncVersion;

- (void).cxx_destruct;
- (id)beforeDateReceived;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasBeforeDateReceived;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeforeDateReceived:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
