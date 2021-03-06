/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRegionBookmark : PBCodable <NSCopying> {
    GEOMapRegion *_region;
    NSString *_title;
    PBUnknownFields *_unknownFields;
}

@property(assign,readonly) bool hasRegion;
@property(assign,readonly) bool hasTitle;
@property(assign,retain) GEOMapRegion * region;
@property(assign,retain) NSString * title;
@property(assign,readonly) PBUnknownFields * unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRegion;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
