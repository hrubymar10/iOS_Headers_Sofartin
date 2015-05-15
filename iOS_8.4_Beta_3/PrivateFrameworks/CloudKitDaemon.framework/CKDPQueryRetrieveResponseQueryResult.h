/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString *_etag;
    struct { 
        unsigned int type : 1; 
    } _has;
    CKDPRecordIdentifier *_identifier;
    CKDPRecord *_record;
    int _type;
}

@property(assign,retain) NSString * etag;
@property(assign,readonly) bool hasEtag;
@property(assign,readonly) bool hasIdentifier;
@property(assign,readonly) bool hasRecord;
@property(assign,readwrite) bool hasType;
@property(assign,retain) CKDPRecordIdentifier * identifier;
@property(assign,retain) CKDPRecord * record;
@property(assign,readwrite) int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasIdentifier;
- (bool)hasRecord;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setEtag:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
