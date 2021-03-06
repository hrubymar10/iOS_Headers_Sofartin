/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    struct { 
        unsigned int placeRequestType : 1; 
        unsigned int serviceType : 1; 
    } _has;
    int _placeRequestType;
    NSString *_querySubstring;
    int _serviceType;
}

@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic, readonly) bool hasQuerySubstring;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, retain) NSString *querySubstring;
@property (nonatomic) int serviceType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceRequestType;
- (bool)hasQuerySubstring;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeRequestType;
- (id)querySubstring;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)setQuerySubstring:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
