/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    double _confidence;
    <GEOMapItem> *_geoMapItem;
    NSUUID *_identifier;
    double _latitude;
    double _longitude;
    long long _type;
    double _uncertainty;
    NSArray *_visits;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) NSArray *visits;

+ (id)locationOfInterestTypeToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)frequencyCompare:(id)arg1;
- (id)geoMapItem;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 geoMapItem:(id)arg7 visits:(id)arg8;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
- (double)longitude;
- (id)mapItem;
- (id)name;
- (id)preciseName;
- (long long)recentCompare:(id)arg1;
- (id)relativeNameToMapItem:(id)arg1;
- (long long)type;
- (double)uncertainty;
- (id)visits;

@end
