/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    NSString *_etag;
    CKDPRecordIdentifier *_recordIdentifier;
}

@property(assign,retain) NSString * etag;
@property(assign,readonly) bool hasEtag;
@property(assign,readonly) bool hasRecordIdentifier;
@property(assign,retain) CKDPRecordIdentifier * recordIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasRecordIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEtag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
