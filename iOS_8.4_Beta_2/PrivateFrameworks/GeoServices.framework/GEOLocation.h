/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocation : PBCodable <NSCopying> {
    int _altitude;
    double _course;
    double _courseAccuracy;
    struct { 
        unsigned int course : 1; 
        unsigned int courseAccuracy : 1; 
        unsigned int heading : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int speed : 1; 
        unsigned int speedAccuracy : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
        unsigned int altitude : 1; 
        unsigned int type : 1; 
        unsigned int isMatchedLocation : 1; 
        unsigned int isShifted : 1; 
    } _has;
    double _heading;
    double _horizontalAccuracy;
    bool _isMatchedLocation;
    bool _isShifted;
    GEOLatLng *_latLng;
    double _speed;
    double _speedAccuracy;
    double _timestamp;
    int _type;
    double _verticalAccuracy;
}

@property(assign,readwrite) int altitude;
@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,readwrite) double course;
@property(assign,readwrite) double courseAccuracy;
@property(assign,readonly) bool hasAccurateCourse;
@property(assign,readwrite) bool hasAltitude;
@property(assign,readwrite) bool hasCourse;
@property(assign,readwrite) bool hasCourseAccuracy;
@property(assign,readwrite) bool hasHeading;
@property(assign,readwrite) bool hasHorizontalAccuracy;
@property(assign,readwrite) bool hasIsMatchedLocation;
@property(assign,readwrite) bool hasIsShifted;
@property(assign,readwrite) bool hasSpeed;
@property(assign,readwrite) bool hasSpeedAccuracy;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) bool hasVerticalAccuracy;
@property(assign,readwrite) double heading;
@property(assign,readwrite) double horizontalAccuracy;
@property(assign,readwrite) bool isMatchedLocation;
@property(assign,readwrite) bool isShifted;
@property(assign,retain) GEOLatLng * latLng;
@property(assign,readwrite) double speed;
@property(assign,readwrite) double speedAccuracy;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) int type;
@property(assign,readwrite) double verticalAccuracy;

+ (id)locationWithCLLocation:(id)arg1 course:(double)arg2;

- (id)_initWithCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; }*)arg1;
- (int)altitude;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccurateCourse;
- (bool)hasAltitude;
- (bool)hasCourse;
- (bool)hasCourseAccuracy;
- (bool)hasHeading;
- (bool)hasHorizontalAccuracy;
- (bool)hasIsMatchedLocation;
- (bool)hasIsShifted;
- (bool)hasSpeed;
- (bool)hasSpeedAccuracy;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasVerticalAccuracy;
- (unsigned long long)hash;
- (double)heading;
- (double)horizontalAccuracy;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCLLocation:(id)arg1 course:(double)arg2;
- (id)initWithCLLocation:(id)arg1 useMatchInfo:(bool)arg2;
- (id)initWithCoreLocation:(id)arg1;
- (id)initWithGEOCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMatchedLocation;
- (bool)isShifted;
- (id)latLng;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(int)arg1;
- (void)setCourse:(double)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasCourse:(bool)arg1;
- (void)setHasCourseAccuracy:(bool)arg1;
- (void)setHasHeading:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasIsMatchedLocation:(bool)arg1;
- (void)setHasIsShifted:(bool)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasSpeedAccuracy:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setIsMatchedLocation:(bool)arg1;
- (void)setIsShifted:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setSpeedAccuracy:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)speedAccuracy;
- (double)timestamp;
- (int)type;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end