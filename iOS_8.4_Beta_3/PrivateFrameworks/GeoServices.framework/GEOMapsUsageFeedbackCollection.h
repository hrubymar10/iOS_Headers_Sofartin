/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {
    int _actionType;
    GEOCarInfo *_carInfo;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int zoomLevel : 1; 
        unsigned int actionType : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    int _sequenceNumber;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
}

@property(assign,readwrite) int actionType;
@property(assign,retain) GEOCarInfo * carInfo;
@property(assign,readwrite) bool hasActionType;
@property(assign,readonly) bool hasCarInfo;
@property(assign,readonly) bool hasMapRegion;
@property(assign,readonly) bool hasPlaceActionDetails;
@property(assign,readonly) bool hasProviderId;
@property(assign,readwrite) bool hasSequenceNumber;
@property(assign,readwrite) bool hasSessionID;
@property(assign,readwrite) bool hasSessionRelativeTimestamp;
@property(assign,readwrite) bool hasZoomLevel;
@property(assign,retain) GEOMapRegion * mapRegion;
@property(assign,retain) GEOPlaceActionDetails * placeActionDetails;
@property(assign,retain) NSString * providerId;
@property(assign,readwrite) int sequenceNumber;
@property(assign,readwrite) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(assign,readwrite) double sessionRelativeTimestamp;
@property(assign,readwrite) double zoomLevel;

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

- (int)actionType;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasCarInfo;
- (bool)hasMapRegion;
- (bool)hasPlaceActionDetails;
- (bool)hasProviderId;
- (bool)hasSequenceNumber;
- (bool)hasSessionID;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)placeActionDetails;
- (id)providerId;
- (bool)readFrom:(id)arg1;
- (int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (void)setActionType:(int)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end
