/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {
    GEOPDPlaceGlobalResult *_globalResult;
    struct { 
        unsigned int requestType : 1; 
        unsigned int status : 1; 
    } _has;
    NSMutableArray *_placeResults;
    int _requestType;
    int _status;
}

@property(assign,retain) GEOPDPlaceGlobalResult * globalResult;
@property(assign,readonly) bool hasGlobalResult;
@property(assign,readwrite) bool hasRequestType;
@property(assign,readwrite) bool hasStatus;
@property(assign,retain) NSMutableArray * placeResults;
@property(assign,readwrite) int requestType;
@property(assign,readwrite) int status;

- (id)_disambiguationLabels;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalResult;
- (bool)hasGlobalResult;
- (bool)hasRequestType;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithGeocoderPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (id)placeResults;
- (unsigned long long)placeResultsCount;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setGlobalResult:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
