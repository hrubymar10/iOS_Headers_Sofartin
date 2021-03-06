/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property(assign,retain) NSString * compactDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasGeomagneticVector;
@property(assign,readonly) double heading;
@property(assign,readonly) double headingAccuracy;
@property(assign,readonly) double magneticHeading;
@property(assign,copy) NSDate * timestamp;
@property(assign,readonly) double trueHeading;
@property(assign,readonly) double x;
@property(assign,readonly) double y;
@property(assign,readonly) double z;

+ (bool)supportsSecureCoding;

- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasGeomagneticVector;
- (double)heading;
- (double)headingAccuracy;
- (id)initWithClientHeading:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;
- (double)magneticHeading;
- (id)shortDescription;
- (id)timestamp;
- (double)trueHeading;
- (double)x;
- (double)y;
- (double)z;

@end
