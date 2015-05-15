/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    struct { 
        unsigned int problematicStepIndex : 1; 
    } _has;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicStepIndex;
    GEORPUserSearchInput *_startWaypoint;
}

@property(assign,retain) NSData * directionsResponseId;
@property(assign,retain) GEORPUserSearchInput * endWaypoint;
@property(assign,readonly) bool hasDirectionsResponseId;
@property(assign,readonly) bool hasEndWaypoint;
@property(assign,readonly) bool hasOverviewScreenshotImageData;
@property(assign,readwrite) bool hasProblematicStepIndex;
@property(assign,readonly) bool hasStartWaypoint;
@property(assign,retain) NSData * overviewScreenshotImageData;
@property(assign,readwrite) unsigned int problematicStepIndex;
@property(assign,retain) GEORPUserSearchInput * startWaypoint;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseId;
- (id)endWaypoint;
- (bool)hasDirectionsResponseId;
- (bool)hasEndWaypoint;
- (bool)hasOverviewScreenshotImageData;
- (bool)hasProblematicStepIndex;
- (bool)hasStartWaypoint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)overviewScreenshotImageData;
- (unsigned int)problematicStepIndex;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setHasProblematicStepIndex:(bool)arg1;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (void)writeTo:(id)arg1;

@end