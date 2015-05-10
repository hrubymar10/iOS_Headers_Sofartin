/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVTile : PBCodable <NSCopying> {
    NSMutableArray *_coastlines;
    GEOVConnectivity *_connectivity;
    struct { 
        unsigned int minZ : 1; 
        unsigned int sectionDeltaLengthBits : 1; 
        unsigned int vertexBits : 1; 
        unsigned int zBits : 1; 
    } _has;
    NSMutableArray *_labelLanguages;
    NSData *_labels;
    NSMutableArray *_lines;
    int _minZ;
    NSMutableArray *_points;
    NSMutableArray *_polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData *_vertices;
    int _zBits;
}

@property(assign,retain) NSMutableArray * coastlines;
@property(assign,retain) GEOVConnectivity * connectivity;
@property(assign,readonly) bool hasConnectivity;
@property(assign,readonly) bool hasLabels;
@property(assign,readwrite) bool hasMinZ;
@property(assign,readwrite) bool hasSectionDeltaLengthBits;
@property(assign,readwrite) bool hasVertexBits;
@property(assign,readonly) bool hasVertices;
@property(assign,readwrite) bool hasZBits;
@property(assign,retain) NSMutableArray * labelLanguages;
@property(assign,retain) NSData * labels;
@property(assign,retain) NSMutableArray * lines;
@property(assign,readwrite) int minZ;
@property(assign,retain) NSMutableArray * points;
@property(assign,retain) NSMutableArray * polygons;
@property(assign,readwrite) unsigned int sectionDeltaLengthBits;
@property(assign,readwrite) unsigned int vertexBits;
@property(assign,retain) NSData * vertices;
@property(assign,readwrite) int zBits;

- (void)addCoastlines:(id)arg1;
- (void)addLabelLanguage:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addPoint:(id)arg1;
- (void)addPolygon:(id)arg1;
- (void)clearCoastlines;
- (void)clearLabelLanguages;
- (void)clearLines;
- (void)clearPoints;
- (void)clearPolygons;
- (id)coastlines;
- (id)coastlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coastlinesCount;
- (id)connectivity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectivity;
- (bool)hasLabels;
- (bool)hasMinZ;
- (bool)hasSectionDeltaLengthBits;
- (bool)hasVertexBits;
- (bool)hasVertices;
- (bool)hasZBits;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labelLanguageAtIndex:(unsigned long long)arg1;
- (id)labelLanguages;
- (unsigned long long)labelLanguagesCount;
- (id)labels;
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (int)minZ;
- (id)pointAtIndex:(unsigned long long)arg1;
- (id)points;
- (unsigned long long)pointsCount;
- (id)polygonAtIndex:(unsigned long long)arg1;
- (id)polygons;
- (unsigned long long)polygonsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sectionDeltaLengthBits;
- (void)setCoastlines:(id)arg1;
- (void)setConnectivity:(id)arg1;
- (void)setHasMinZ:(bool)arg1;
- (void)setHasSectionDeltaLengthBits:(bool)arg1;
- (void)setHasVertexBits:(bool)arg1;
- (void)setHasZBits:(bool)arg1;
- (void)setLabelLanguages:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setMinZ:(int)arg1;
- (void)setPoints:(id)arg1;
- (void)setPolygons:(id)arg1;
- (void)setSectionDeltaLengthBits:(unsigned int)arg1;
- (void)setVertexBits:(unsigned int)arg1;
- (void)setVertices:(id)arg1;
- (void)setZBits:(int)arg1;
- (unsigned int)vertexBits;
- (id)vertices;
- (void)writeTo:(id)arg1;
- (int)zBits;

@end