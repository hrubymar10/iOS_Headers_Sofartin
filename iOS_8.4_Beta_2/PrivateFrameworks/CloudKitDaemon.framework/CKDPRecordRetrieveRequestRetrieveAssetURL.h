/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {
    CKDPRequestedFields *_assetFields;
    struct { 
        unsigned int requestedTTL : 1; 
        unsigned int type : 1; 
    } _has;
    long long _requestedTTL;
    int _type;
}

@property(assign,retain) CKDPRequestedFields * assetFields;
@property(assign,readonly) bool hasAssetFields;
@property(assign,readwrite) bool hasRequestedTTL;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) long long requestedTTL;
@property(assign,readwrite) int type;

- (void).cxx_destruct;
- (id)assetFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetFields;
- (bool)hasRequestedTTL;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)requestedTTL;
- (void)setAssetFields:(id)arg1;
- (void)setHasRequestedTTL:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setRequestedTTL:(long long)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
