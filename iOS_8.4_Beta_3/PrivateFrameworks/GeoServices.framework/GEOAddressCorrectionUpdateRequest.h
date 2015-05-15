/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    NSString *_addressID;
    int _correctionStatus;
    struct { 
        unsigned int correctionStatus : 1; 
    } _has;
    NSMutableArray *_significantLocations;
}

@property(assign,retain) NSString * addressID;
@property(assign,readwrite) int correctionStatus;
@property(assign,readonly) bool hasAddressID;
@property(assign,readwrite) bool hasCorrectionStatus;
@property(assign,retain) NSMutableArray * significantLocations;

- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionStatus;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasCorrectionStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAddressID:(id)arg1;
- (void)setCorrectionStatus:(int)arg1;
- (void)setHasCorrectionStatus:(bool)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
