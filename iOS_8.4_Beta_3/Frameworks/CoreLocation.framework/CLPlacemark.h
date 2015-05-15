/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property(assign,copy) NSString * ISOcountryCode;
@property(assign,copy) NSDictionary * addressDictionary;
@property(assign,copy) NSString * administrativeArea;
@property(assign,copy) NSArray * areasOfInterest;
@property(assign,copy) NSString * country;
@property(assign,copy) NSString * inlandWater;
@property(assign,copy) NSString * locality;
@property(assign,copy) CLLocation * location;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * ocean;
@property(assign,copy) NSString * postalCode;
@property(assign,copy) CLRegion * region;
@property(assign,copy) NSString * subAdministrativeArea;
@property(assign,copy) NSString * subLocality;
@property(assign,copy) NSString * subThoroughfare;
@property(assign,copy) NSString * thoroughfare;

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)name;
- (id)ocean;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end