/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int occurrenceResponseIndex : 1; 
        unsigned int occurrenceStepIndex : 1; 
        unsigned int switchedToResponseIndex : 1; 
        unsigned int synthesizedStepManeuverType : 1; 
        unsigned int type : 1; 
    } _has;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteId;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
}

@property(assign,readwrite) long long errorCode;
@property(assign,retain) NSString * errorDomain;
@property(assign,readwrite) bool hasErrorCode;
@property(assign,readonly) bool hasErrorDomain;
@property(assign,readonly) bool hasOccurrenceLatLng;
@property(assign,readwrite) bool hasOccurrenceResponseIndex;
@property(assign,readonly) bool hasOccurrenceRouteId;
@property(assign,readwrite) bool hasOccurrenceStepIndex;
@property(assign,readwrite) bool hasSwitchedToResponseIndex;
@property(assign,readonly) bool hasSwitchedToRouteId;
@property(assign,readonly) bool hasSynthesizedStepInstructions;
@property(assign,readwrite) bool hasSynthesizedStepManeuverType;
@property(assign,readwrite) bool hasType;
@property(assign,retain) GEOLatLng * occurrenceLatLng;
@property(assign,readwrite) unsigned int occurrenceResponseIndex;
@property(assign,retain) NSData * occurrenceRouteId;
@property(assign,readwrite) unsigned int occurrenceStepIndex;
@property(assign,readwrite) unsigned int switchedToResponseIndex;
@property(assign,retain) NSData * switchedToRouteId;
@property(assign,retain) NSString * synthesizedStepInstructions;
@property(assign,readwrite) int synthesizedStepManeuverType;
@property(assign,readwrite) int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOccurrenceLatLng;
- (bool)hasOccurrenceResponseIndex;
- (bool)hasOccurrenceRouteId;
- (bool)hasOccurrenceStepIndex;
- (bool)hasSwitchedToResponseIndex;
- (bool)hasSwitchedToRouteId;
- (bool)hasSynthesizedStepInstructions;
- (bool)hasSynthesizedStepManeuverType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)occurrenceLatLng;
- (unsigned int)occurrenceResponseIndex;
- (id)occurrenceRouteId;
- (unsigned int)occurrenceStepIndex;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasOccurrenceResponseIndex:(bool)arg1;
- (void)setHasOccurrenceStepIndex:(bool)arg1;
- (void)setHasSwitchedToResponseIndex:(bool)arg1;
- (void)setHasSynthesizedStepManeuverType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOccurrenceLatLng:(id)arg1;
- (void)setOccurrenceResponseIndex:(unsigned int)arg1;
- (void)setOccurrenceRouteId:(id)arg1;
- (void)setOccurrenceStepIndex:(unsigned int)arg1;
- (void)setSwitchedToResponseIndex:(unsigned int)arg1;
- (void)setSwitchedToRouteId:(id)arg1;
- (void)setSynthesizedStepInstructions:(id)arg1;
- (void)setSynthesizedStepManeuverType:(int)arg1;
- (void)setType:(int)arg1;
- (unsigned int)switchedToResponseIndex;
- (id)switchedToRouteId;
- (id)synthesizedStepInstructions;
- (int)synthesizedStepManeuverType;
- (int)type;
- (void)writeTo:(id)arg1;

@end
