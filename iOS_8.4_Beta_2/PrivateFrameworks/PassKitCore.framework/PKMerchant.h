/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMerchant : NSObject <NSSecureCoding> {
    NSString *_industryCategory;
    long long _industryCode;
    double _locationLatitude;
    double _locationLongitude;
    unsigned long long _mapsIdentifier;
    NSString *_mapsName;
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_rawName;
    NSURL *_url;
}

@property(assign,readonly) NSString * displayName;
@property(assign,copy) NSString * industryCategory;
@property(assign,readwrite) long long industryCode;
@property(assign,copy) CLLocation * location;
@property(assign,readwrite) double locationLatitude;
@property(assign,readwrite) double locationLongitude;
@property(assign,readwrite) unsigned long long mapsIdentifier;
@property(assign,copy) NSString * mapsName;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * phoneNumber;
@property(assign,copy) NSString * rawName;
@property(setter=setURL:,assign,copy) NSURL * url;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)industryCategory;
- (long long)industryCode;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMerchant:(id)arg1;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (unsigned long long)mapsIdentifier;
- (id)mapsName;
- (id)name;
- (id)phoneNumber;
- (id)rawName;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setMapsIdentifier:(unsigned long long)arg1;
- (void)setMapsName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRawName:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
