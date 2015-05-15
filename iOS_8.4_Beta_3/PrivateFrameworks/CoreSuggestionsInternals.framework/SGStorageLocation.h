/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding> {
    double _accuracy;
    NSString *_address;
    NSString *_label;
    double _latitude;
    unsigned long long _locationType;
    double _longitude;
    double _quality;
}

@property(assign,readonly) double accuracy;
@property(assign,readonly) NSString * address;
@property(assign,readonly) NSString * label;
@property(assign,readonly) double latitude;
@property(assign,readonly) unsigned long long locationType;
@property(assign,readonly) double longitude;
@property(assign,readonly) double quality;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (id)address;
- (long long)compare:(id)arg1;
- (id)convertToLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 accuracy:(double)arg4 quality:(double)arg5;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageLocation:(id)arg1;
- (id)label;
- (double)latitude;
- (unsigned long long)locationType;
- (double)longitude;
- (double)quality;

@end
