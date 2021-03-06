/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareDeleteRequest : PBRequest <NSCopying> {
    NSString *_etag;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
}

@property(assign,retain) NSString * etag;
@property(assign,readonly) bool hasEtag;
@property(assign,readonly) bool hasSelfAddedPcs;
@property(assign,readonly) bool hasShareId;
@property(assign,retain) CKDPProtectionInfo * selfAddedPcs;
@property(assign,retain) CKDPShareIdentifier * shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasSelfAddedPcs;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)selfAddedPcs;
- (void)setEtag:(id)arg1;
- (void)setSelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
