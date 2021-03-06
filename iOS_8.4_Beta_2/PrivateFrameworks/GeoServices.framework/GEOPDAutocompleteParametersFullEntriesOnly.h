/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersFullEntriesOnly : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
    } _has;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
}

@property(assign,readwrite) bool hasMaxResults;
@property(assign,readonly) bool hasQuery;
@property(assign,readonly) bool hasViewportInfo;
@property(assign,readwrite) int maxResults;
@property(assign,retain) NSString * query;
@property(assign,retain) GEOPDViewportInfo * viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
