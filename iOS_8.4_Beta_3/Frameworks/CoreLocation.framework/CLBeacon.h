/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {
    double _accuracy;
    NSNumber *_major;
    NSNumber *_minor;
    long long _proximity;
    NSUUID *_proximityUUID;
    long long _rssi;
}

@property(assign,readonly) double accuracy;
@property(assign,readonly) NSNumber * major;
@property(assign,readonly) NSNumber * minor;
@property(assign,readonly) long long proximity;
@property(assign,readonly) NSUUID * proximityUUID;
@property(assign,readonly) long long rssi;

+ (bool)supportsSecureCoding;

- (double)accuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;
- (id)major;
- (id)minor;
- (long long)proximity;
- (id)proximityUUID;
- (long long)rssi;

@end
