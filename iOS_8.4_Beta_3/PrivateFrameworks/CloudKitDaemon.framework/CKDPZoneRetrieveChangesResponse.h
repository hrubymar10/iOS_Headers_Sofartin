/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {
    NSMutableArray *_changedZones;
    struct { 
        unsigned int status : 1; 
    } _has;
    int _status;
    NSData *_syncContinuationToken;
}

@property (nonatomic, retain) NSMutableArray *changedZones;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasSyncContinuationToken;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *syncContinuationToken;

- (void).cxx_destruct;
- (void)addChangedZones:(id)arg1;
- (id)changedZones;
- (id)changedZonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedZonesCount;
- (void)clearChangedZones;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (bool)hasSyncContinuationToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangedZones:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (int)status;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
