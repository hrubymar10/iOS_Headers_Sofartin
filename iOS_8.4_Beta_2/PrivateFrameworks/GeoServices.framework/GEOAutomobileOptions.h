/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int includeHistoricTravelTime : 1; 
    } _has;
    bool _includeHistoricTravelTime;
}

@property(assign,readwrite) bool hasIncludeHistoricTravelTime;
@property(assign,readwrite) bool includeHistoricTravelTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeHistoricTravelTime;
- (unsigned long long)hash;
- (bool)includeHistoricTravelTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
