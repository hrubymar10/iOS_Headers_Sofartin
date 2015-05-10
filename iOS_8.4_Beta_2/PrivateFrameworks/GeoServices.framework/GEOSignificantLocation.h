/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSignificantLocation : PBCodable <NSCopying> {
    double _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int locationIndex : 1; 
        unsigned int numberOfVisitsBucket : 1; 
    } _has;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
}

@property(assign,readwrite) double confidence;
@property(assign,readwrite) bool hasConfidence;
@property(assign,readonly) bool hasIdentifier;
@property(assign,readonly) bool hasLocation;
@property(assign,readwrite) bool hasLocationIndex;
@property(assign,readwrite) bool hasNumberOfVisitsBucket;
@property(assign,retain) NSString * identifier;
@property(assign,retain) GEOLocation * location;
@property(assign,readwrite) unsigned int locationIndex;
@property(assign,readwrite) unsigned int numberOfVisitsBucket;

- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasIdentifier;
- (bool)hasLocation;
- (bool)hasLocationIndex;
- (bool)hasNumberOfVisitsBucket;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)location;
- (unsigned int)locationIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucket;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLocationIndex:(bool)arg1;
- (void)setHasNumberOfVisitsBucket:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationIndex:(unsigned int)arg1;
- (void)setNumberOfVisitsBucket:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
