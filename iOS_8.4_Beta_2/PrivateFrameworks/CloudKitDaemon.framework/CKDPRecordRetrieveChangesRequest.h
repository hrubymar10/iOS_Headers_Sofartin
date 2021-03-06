/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChanges : 1; 
        unsigned int requestedChangeTypes : 1; 
    } _has;
    unsigned int _maxChanges;
    int _requestedChangeTypes;
    CKDPRequestedFields *_requestedFields;
    NSData *_syncContinuationToken;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property(assign,readwrite) bool hasMaxChanges;
@property(assign,readwrite) bool hasRequestedChangeTypes;
@property(assign,readonly) bool hasRequestedFields;
@property(assign,readonly) bool hasSyncContinuationToken;
@property(assign,readonly) bool hasZoneIdentifier;
@property(assign,readwrite) unsigned int maxChanges;
@property(assign,readwrite) int requestedChangeTypes;
@property(assign,retain) CKDPRequestedFields * requestedFields;
@property(assign,retain) NSData * syncContinuationToken;
@property(assign,retain) CKDPRecordZoneIdentifier * zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxChanges;
- (bool)hasRequestedChangeTypes;
- (bool)hasRequestedFields;
- (bool)hasSyncContinuationToken;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (int)requestedChangeTypes;
- (id)requestedFields;
- (Class)responseClass;
- (void)setHasMaxChanges:(bool)arg1;
- (void)setHasRequestedChangeTypes:(bool)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setRequestedChangeTypes:(int)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
