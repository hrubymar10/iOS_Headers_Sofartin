/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoInitialContentSyncCompletedNotification : PBCodable <NSCopying> {
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
}

@property(assign,readwrite) unsigned int fullSyncVersion;
@property(assign,readwrite) bool hasFullSyncVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end