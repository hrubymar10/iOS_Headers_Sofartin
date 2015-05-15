/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFLocation : NSObject <MKAnnotation, NSCopying, NSSecureCoding> {
    double _TTL;
    FMFHandle *_handle;
    NSString *_label;
    bool _locatingInProgress;
    CLLocation *_location;
    NSString *_longAddress;
    double _maxLocatingInterval;
    NSString *_shortAddressString;
    NSDate *_timestamp;
}

@property(assign,readwrite) double TTL;
@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) FMFHandle * handle;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * label;
@property(getter=isLocatingInProgress,assign,readwrite) bool locatingInProgress;
@property(assign,retain) CLLocation * location;
@property(assign,copy) NSString * longAddress;
@property(assign,readwrite) double maxLocatingInterval;
@property(assign,copy) NSString * shortAddress;
@property(assign,copy) NSString * shortAddressString;
@property(assign,copy) NSString * subtitle;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSDate * timestamp;
@property(assign,copy) NSString * title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)TTL;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocatingInProgress;
- (bool)isValid;
- (id)label;
- (id)location;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)longAddress;
- (double)maxLocatingInterval;
- (void)resetLocateInProgress:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocatingInProgress:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongAddress:(id)arg1;
- (void)setMaxLocatingInterval:(double)arg1;
- (void)setShortAddressString:(id)arg1;
- (void)setTTL:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortAddress;
- (id)shortAddressString;
- (id)subtitle;
- (id)timestamp;
- (id)title;
- (void)updateHandle:(id)arg1;
- (void)updateLocation:(id)arg1;

@end
