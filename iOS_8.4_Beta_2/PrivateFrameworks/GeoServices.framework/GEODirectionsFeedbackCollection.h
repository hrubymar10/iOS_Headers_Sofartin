/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {
    bool _arrivedAtDestination;
    NSMutableArray *_directionsFeedbacks;
    double _endTimeStamp;
    GEOLocation *_finalLocation;
    struct { 
        unsigned int navigationAudioFeedback : 1; 
        unsigned int endTimeStamp : 1; 
        unsigned int startTimeStamp : 1; 
        unsigned int arrivedAtDestination : 1; 
    } _has;
    struct { 
        int _currentRouteTypeAtEndOfNav; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        unsigned int _spokenPromptsCount; 
        bool _bTHFPAvailableAtEndOfNav; 
        bool _bTHFPRoutesAvailable; 
        bool _currentRouteHFPEnabledAtEndOfNav; 
        bool _everManuallyChangedRoute; 
        bool _everManuallyEnabledHFPRoute; 
        bool _everViewedAudioSheet; 
        bool _everViewedAudioSheetBTAny; 
        bool _everViewedAudioSheetBTHFP; 
        bool _viewedAudioSheet; 
        bool _viewedAudioSheetBTAny; 
        bool _viewedAudioSheetBTHFP; 
        bool _wirelessRoutesAvailable; 
        struct { 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    } _navigationAudioFeedback;
    double _startTimeStamp;
}

@property(assign,readwrite) bool arrivedAtDestination;
@property(assign,retain) NSMutableArray * directionsFeedbacks;
@property(assign,readwrite) double endTimeStamp;
@property(assign,retain) GEOLocation * finalLocation;
@property(assign,readwrite) bool hasArrivedAtDestination;
@property(assign,readwrite) bool hasEndTimeStamp;
@property(assign,readonly) bool hasFinalLocation;
@property(assign,readwrite) bool hasNavigationAudioFeedback;
@property(assign,readwrite) bool hasStartTimeStamp;
@property(assign,readwrite) struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; } navigationAudioFeedback;
@property(assign,readwrite) double startTimeStamp;

- (void)addDirectionsFeedback:(id)arg1;
- (bool)arrivedAtDestination;
- (void)clearDirectionsFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbacks;
- (unsigned long long)directionsFeedbacksCount;
- (double)endTimeStamp;
- (id)finalLocation;
- (bool)hasArrivedAtDestination;
- (bool)hasEndTimeStamp;
- (bool)hasFinalLocation;
- (bool)hasNavigationAudioFeedback;
- (bool)hasStartTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; })navigationAudioFeedback;
- (bool)readFrom:(id)arg1;
- (void)setArrivedAtDestination:(bool)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setEndTimeStamp:(double)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasArrivedAtDestination:(bool)arg1;
- (void)setHasEndTimeStamp:(bool)arg1;
- (void)setHasNavigationAudioFeedback:(bool)arg1;
- (void)setHasStartTimeStamp:(bool)arg1;
- (void)setNavigationAudioFeedback:(struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct { unsigned int x_18_1_1 : 1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 1; unsigned int x_18_1_6 : 1; unsigned int x_18_1_7 : 1; unsigned int x_18_1_8 : 1; unsigned int x_18_1_9 : 1; unsigned int x_18_1_10 : 1; unsigned int x_18_1_11 : 1; unsigned int x_18_1_12 : 1; unsigned int x_18_1_13 : 1; unsigned int x_18_1_14 : 1; unsigned int x_18_1_15 : 1; unsigned int x_18_1_16 : 1; unsigned int x_18_1_17 : 1; } x18; })arg1;
- (void)setStartTimeStamp:(double)arg1;
- (double)startTimeStamp;
- (void)writeTo:(id)arg1;

@end
