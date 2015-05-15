/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficTile : PBCodable <NSCopying> {
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property (nonatomic, readonly) bool hasVertices;
@property (nonatomic, retain) NSMutableArray *trafficIncidents;
@property (nonatomic, retain) NSMutableArray *trafficSegments;
@property (nonatomic, retain) NSData *vertices;

- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (void)clearTrafficIncidents;
- (void)clearTrafficSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; }*)createUnpackedVerticesWithGutterSize:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVertices;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrafficIncidents:(id)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(id)arg1;
- (id)trafficIncidentAtIndex:(unsigned long long)arg1;
- (id)trafficIncidents;
- (unsigned long long)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned long long)arg1;
- (id)trafficSegments;
- (unsigned long long)trafficSegmentsCount;
- (id)vertices;
- (void)writeTo:(id)arg1;

@end
