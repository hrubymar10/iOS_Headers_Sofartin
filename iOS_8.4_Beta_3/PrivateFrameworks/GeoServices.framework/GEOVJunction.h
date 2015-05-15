/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVJunction : PBCodable <NSCopying> {
    NSMutableArray *_connectingRoads;
    NSMutableArray *_laneConnections;
}

@property (nonatomic, retain) NSMutableArray *connectingRoads;
@property (nonatomic, retain) NSMutableArray *laneConnections;

- (void)addConnectingRoad:(id)arg1;
- (void)addLaneConnections:(id)arg1;
- (void)clearConnectingRoads;
- (void)clearLaneConnections;
- (id)connectingRoadAtIndex:(unsigned long long)arg1;
- (id)connectingRoads;
- (unsigned long long)connectingRoadsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)laneConnections;
- (id)laneConnectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneConnectionsCount;
- (bool)readFrom:(id)arg1;
- (void)setConnectingRoads:(id)arg1;
- (void)setLaneConnections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
