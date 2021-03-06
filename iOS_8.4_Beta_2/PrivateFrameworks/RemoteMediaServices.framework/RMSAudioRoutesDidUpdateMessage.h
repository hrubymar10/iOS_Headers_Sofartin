/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {
    NSMutableArray *_audioRoutes;
    struct { 
        unsigned int sessionIdentifier : 1; 
    } _has;
    int _sessionIdentifier;
}

@property(assign,retain) NSMutableArray * audioRoutes;
@property(assign,readwrite) bool hasSessionIdentifier;
@property(assign,readwrite) int sessionIdentifier;

- (void).cxx_destruct;
- (void)addAudioRoutes:(id)arg1;
- (id)audioRoutes;
- (id)audioRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioRoutesCount;
- (void)clearAudioRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setAudioRoutes:(id)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
