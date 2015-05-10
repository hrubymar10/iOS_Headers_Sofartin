/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequestShareIdUpdate : PBCodable <NSCopying> {
    CKDPShareIdentifier *_shareId;
}

@property(assign,readonly) bool hasShareId;
@property(assign,retain) CKDPShareIdentifier * shareId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
