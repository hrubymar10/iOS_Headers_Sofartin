/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {
    NSString *_minimumVersionEtag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
}

@property(assign,readonly) bool hasMinimumVersionEtag;
@property(assign,readonly) bool hasRecordIdentifier;
@property(assign,readonly) bool hasRequestedFields;
@property(assign,retain) NSString * minimumVersionEtag;
@property(assign,retain) CKDPRecordIdentifier * recordIdentifier;
@property(assign,retain) CKDPRequestedFields * requestedFields;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumVersionEtag;
- (bool)hasRecordIdentifier;
- (bool)hasRequestedFields;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minimumVersionEtag;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setMinimumVersionEtag:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
