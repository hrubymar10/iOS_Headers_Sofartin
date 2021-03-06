/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying> {
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
}

@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;

- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
