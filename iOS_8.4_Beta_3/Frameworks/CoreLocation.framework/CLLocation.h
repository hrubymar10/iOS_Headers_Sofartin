/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocation : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {
    id _internal;
}

@property(assign,readonly) int _mapkit_source;
@property(assign,readonly) double altitude;
@property(assign,readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; } clientLocation;
@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,readonly) double course;
@property(assign,readonly) double courseAccuracy;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,copy) CLFloor * floor;
@property(assign,readonly) bool hasMatch;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double horizontalAccuracy;
@property(assign,readonly) unsigned int integrity;
@property(assign,readonly) NSString * iso6709Notation;
@property(assign,readonly) bool legacyHasMatch;
@property(assign,readonly) CLLocationMatchInfo * matchInfo;
@property(assign,readonly) struct { double x1; double x2; } rawCoordinate;
@property(assign,readonly) double rawCourse;
@property(assign,readonly) double speed;
@property(assign,readonly) double speedAccuracy;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSDate * timestamp;
@property(assign,readonly) int type;
@property(assign,readonly) double verticalAccuracy;

+ (id)_mapKit_locationWithPlace:(id)arg1;
+ (id)_mapkit_stringWithType:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (int)_mapkit_source;
- (double)altitude;
- (id)cam_videoMetadataRepresentation;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; })clientLocation;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floor;
- (double)getDistanceFrom:(id)arg1;
- (bool)hasMatch;
- (bool)hasValidCourse;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; })arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; })arg1 matchInfo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 rawCoordinate:(struct { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 matchInfo:(id)arg13;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (unsigned int)integrity;
- (bool)isEqualToLocationCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isStale;
- (id)iso6709Notation;
- (bool)legacyHasMatch;
- (id)locationDescription;
- (id)matchInfo;
- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (struct { double x1; double x2; })rawCoordinate;
- (double)rawCourse;
- (id)routeMatch;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)shortDescription;
- (id)snapToResolution:(double)arg1;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (int)type;
- (double)verticalAccuracy;

@end
