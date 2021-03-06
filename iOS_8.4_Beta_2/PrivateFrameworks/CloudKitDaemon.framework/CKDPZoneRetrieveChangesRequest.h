/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChangedZones : 1; 
    } _has;
    unsigned int _maxChangedZones;
    NSData *_syncContinuationToken;
}

@property(assign,readwrite) bool hasMaxChangedZones;
@property(assign,readonly) bool hasSyncContinuationToken;
@property(assign,readwrite) unsigned int maxChangedZones;
@property(assign,retain) NSData * syncContinuationToken;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxChangedZones;
- (bool)hasSyncContinuationToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxChangedZones;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxChangedZones:(bool)arg1;
- (void)setMaxChangedZones:(unsigned int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
