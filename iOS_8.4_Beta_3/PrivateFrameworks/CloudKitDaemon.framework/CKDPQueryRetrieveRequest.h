/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {
    NSData *_continuationMarker;
    struct { 
        unsigned int limit : 1; 
    } _has;
    unsigned int _limit;
    CKDPQuery *_query;
    CKDPRequestedFields *_requestedFields;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property(assign,retain) NSData * continuationMarker;
@property(assign,readonly) bool hasContinuationMarker;
@property(assign,readwrite) bool hasLimit;
@property(assign,readonly) bool hasQuery;
@property(assign,readonly) bool hasRequestedFields;
@property(assign,readonly) bool hasZoneIdentifier;
@property(assign,readwrite) unsigned int limit;
@property(assign,retain) CKDPQuery * query;
@property(assign,retain) CKDPRequestedFields * requestedFields;
@property(assign,retain) CKDPRecordZoneIdentifier * zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (bool)hasLimit;
- (bool)hasQuery;
- (bool)hasRequestedFields;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
