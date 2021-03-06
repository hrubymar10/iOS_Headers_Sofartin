/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {
    bool _canNavigate;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _coordinates;
    GEOMapItemStorage *_destination;
    NSString *_destinationName;
    unsigned int _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicalDuration : 1; 
        unsigned int originalDuration : 1; 
        unsigned int canNavigate : 1; 
    } _has;
    unsigned int _historicalDuration;
    NSString *_name;
    GEOMapItemStorage *_origin;
    unsigned int _originalDuration;
    NSData *_routeID;
    NSMutableArray *_steps;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _trafficColors;
}

@property (nonatomic) bool canNavigate;
@property (nonatomic, readonly) double*coordinates;
@property (nonatomic, readonly) unsigned long long coordinatesCount;
@property (nonatomic, retain) GEOMapItemStorage *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic) unsigned int distance;
@property (nonatomic) bool hasCanNavigate;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasHistoricalDuration;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasOriginalDuration;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) unsigned int historicalDuration;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOMapItemStorage *origin;
@property (nonatomic) unsigned int originalDuration;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;

- (void)addCoordinates:(double)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (bool)canNavigate;
- (void)clearCoordinates;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (double*)coordinates;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coordinatesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (bool)hasCanNavigate;
- (bool)hasDestination;
- (bool)hasDestinationName;
- (bool)hasDistance;
- (bool)hasHistoricalDuration;
- (bool)hasName;
- (bool)hasOrigin;
- (bool)hasOriginalDuration;
- (bool)hasRouteID;
- (unsigned long long)hash;
- (unsigned int)historicalDuration;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSyntheticRoute;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)origin;
- (unsigned int)originalDuration;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (void)setCanNavigate:(bool)arg1;
- (void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasCanNavigate:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasHistoricalDuration:(bool)arg1;
- (void)setHasOriginalDuration:(bool)arg1;
- (void)setHistoricalDuration:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOriginalDuration:(unsigned int)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (void)writeTo:(id)arg1;

@end
