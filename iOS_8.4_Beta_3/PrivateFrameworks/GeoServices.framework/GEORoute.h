/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoute : PBCodable <NSCopying> {
    NSMutableArray *_advisoryNotices;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _advisorys;
    NSData *_arrivalRouteID;
    unsigned int _arrivalStepID;
    NSData *_basicPoints;
    NSData *_departureRouteID;
    unsigned int _departureStepID;
    unsigned int _distance;
    int _drivingSide;
    unsigned int _expectedTime;
    struct { 
        unsigned int arrivalStepID : 1; 
        unsigned int departureStepID : 1; 
        unsigned int distance : 1; 
        unsigned int drivingSide : 1; 
        unsigned int expectedTime : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int routeType : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _incidentEndOffsetsInRoutes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _incidentIndices;
    NSString *_name;
    NSString *_phoneticName;
    NSData *_routeID;
    NSMutableArray *_routeNames;
    int _routeType;
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
    int _transportType;
    NSData *_unpackedLatLngVertices;
    NSData *_zilchPoints;
}

@property(assign,retain) NSMutableArray * advisoryNotices;
@property(assign,readonly) int* advisorys;
@property(assign,readonly) unsigned long long advisorysCount;
@property(assign,retain) NSData * arrivalRouteID;
@property(assign,readwrite) unsigned int arrivalStepID;
@property(assign,retain) NSData * basicPoints;
@property(assign,retain) NSData * departureRouteID;
@property(assign,readwrite) unsigned int departureStepID;
@property(assign,readwrite) unsigned int distance;
@property(assign,readwrite) int drivingSide;
@property(assign,readwrite) unsigned int expectedTime;
@property(assign,readonly) bool hasArrivalRouteID;
@property(assign,readwrite) bool hasArrivalStepID;
@property(assign,readonly) bool hasBasicPoints;
@property(assign,readonly) bool hasDepartureRouteID;
@property(assign,readwrite) bool hasDepartureStepID;
@property(assign,readwrite) bool hasDistance;
@property(assign,readwrite) bool hasDrivingSide;
@property(assign,readwrite) bool hasExpectedTime;
@property(assign,readwrite) bool hasHistoricTravelTime;
@property(assign,readonly) bool hasName;
@property(assign,readonly) bool hasPhoneticName;
@property(assign,readonly) bool hasRouteID;
@property(assign,readwrite) bool hasRouteType;
@property(assign,readwrite) bool hasTransportType;
@property(assign,readonly) bool hasUnpackedLatLngVertices;
@property(assign,readonly) bool hasZilchPoints;
@property(assign,readwrite) unsigned int historicTravelTime;
@property(assign,readonly) unsigned int* incidentEndOffsetsInRoutes;
@property(assign,readonly) unsigned long long incidentEndOffsetsInRoutesCount;
@property(assign,readonly) unsigned int* incidentIndices;
@property(assign,readonly) unsigned long long incidentIndicesCount;
@property(assign,retain) NSString * name;
@property(assign,retain) NSString * phoneticName;
@property(assign,readonly) unsigned int pointCount;
@property(assign,retain) NSData * routeID;
@property(assign,retain) NSMutableArray * routeNames;
@property(assign,readwrite) int routeType;
@property(assign,retain) NSMutableArray * steps;
@property(assign,readonly) unsigned int* trafficColorOffsets;
@property(assign,readonly) unsigned long long trafficColorOffsetsCount;
@property(assign,readonly) unsigned int* trafficColors;
@property(assign,readonly) unsigned long long trafficColorsCount;
@property(assign,readwrite) int transportType;
@property(assign,retain) NSData * unpackedLatLngVertices;
@property(assign,retain) NSData * zilchPoints;

- (struct CGImage { }*)_mapKitImage;
- (void)addAdvisory:(int)arg1;
- (void)addAdvisoryNotice:(id)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)addRouteName:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (int)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (id)advisoryNotices;
- (unsigned long long)advisoryNoticesCount;
- (int*)advisorys;
- (unsigned long long)advisorysCount;
- (id)arrivalRouteID;
- (unsigned int)arrivalStepID;
- (id)basicPoints;
- (void)clearAdvisoryNotices;
- (void)clearAdvisorys;
- (void)clearIncidentEndOffsetsInRoutes;
- (void)clearIncidentIndices;
- (void)clearRouteNames;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void*)controlPoints;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(bool)arg2 uniquePointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)departureRouteID;
- (unsigned int)departureStepID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (int)drivingSide;
- (unsigned int)expectedTime;
- (bool)hasArrivalRouteID;
- (bool)hasArrivalStepID;
- (bool)hasBasicPoints;
- (bool)hasDepartureRouteID;
- (bool)hasDepartureStepID;
- (bool)hasDistance;
- (bool)hasDrivingSide;
- (bool)hasExpectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasRouteID;
- (bool)hasRouteType;
- (bool)hasTransportType;
- (bool)hasUnpackedLatLngVertices;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInRoutes;
- (unsigned long long)incidentEndOffsetsInRoutesCount;
- (unsigned int*)incidentIndices;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentIndicesCount;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (id)instructionsForStep:(id)arg1;
- (bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)maneuverImageForStep:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)newETARoute;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (id)phoneticName;
- (struct { double x1; double x2; })pointAt:(unsigned int)arg1;
- (unsigned int)pointCount;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (id)routeNames;
- (unsigned long long)routeNamesCount;
- (int)routeType;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setArrivalRouteID:(id)arg1;
- (void)setArrivalStepID:(unsigned int)arg1;
- (void)setBasicPoints:(id)arg1;
- (void)setDepartureRouteID:(id)arg1;
- (void)setDepartureStepID:(unsigned int)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDrivingSide:(int)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasArrivalStepID:(bool)arg1;
- (void)setHasDepartureStepID:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasDrivingSide:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasRouteType:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setName:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNames:(id)arg1;
- (void)setRouteType:(int)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTransportType:(int)arg1;
- (void)setUnpackedLatLngVertices:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)simplifiedDescription;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (bool)unpackBasicPoints;
- (bool)unpackLatLngVertices;
- (bool)unpackZilchPoints;
- (id)unpackedLatLngVertices;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
