/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying> {
    bool _clientVersionETagMatch;
    struct { 
        unsigned int clientVersionETagMatch : 1; 
    } _has;
    CKDPRecord *_record;
}

@property(assign,readwrite) bool clientVersionETagMatch;
@property(assign,readwrite) bool hasClientVersionETagMatch;
@property(assign,readonly) bool hasRecord;
@property(assign,retain) CKDPRecord * record;

- (void).cxx_destruct;
- (bool)clientVersionETagMatch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientVersionETagMatch;
- (bool)hasRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setClientVersionETagMatch:(bool)arg1;
- (void)setHasClientVersionETagMatch:(bool)arg1;
- (void)setRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
