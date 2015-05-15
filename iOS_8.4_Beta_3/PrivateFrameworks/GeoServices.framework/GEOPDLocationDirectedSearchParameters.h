/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int sortOrder : 1; 
    } _has;
    unsigned int _maxResults;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasSearchLocation;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOLatLng *searchLocation;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasSearchLocation;
- (bool)hasSearchString;
- (bool)hasSortOrder;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchLocation;
- (id)searchString;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
