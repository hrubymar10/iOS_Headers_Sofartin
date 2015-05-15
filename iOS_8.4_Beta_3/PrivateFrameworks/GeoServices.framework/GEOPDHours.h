/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _days;
    struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
}

@property(assign,readonly) int* days;
@property(assign,readonly) unsigned long long daysCount;
@property(assign,readonly) struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* timeRanges;
@property(assign,readonly) unsigned long long timeRangesCount;

+ (bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)currentOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (bool)operatingHoursAvailableForPlaceData:(id)arg1;

- (void)addDay:(int)arg1;
- (void)addTimeRange:(struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;
- (int*)days;
- (unsigned long long)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDays:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeRanges:(struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })timeRangeAtIndex:(unsigned long long)arg1;
- (struct { unsigned int x1; unsigned int x2; bool x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)timeRanges;
- (unsigned long long)timeRangesCount;
- (void)writeTo:(id)arg1;

@end
