/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_addressDictionary;
}

@property(assign,copy) NSString * ISOCountryCode;
@property(assign,retain) NSMutableDictionary * addressDictionary;
@property(assign,copy) NSString * city;
@property(assign,copy) NSString * country;
@property(assign,readonly) NSString * formattedAddress;
@property(assign,readonly) NSString * formattedAddressSingleLine;
@property(assign,copy) NSString * postalCode;
@property(assign,copy) NSString * state;
@property(assign,copy) NSString * street;
@property(assign,copy) NSString * subAdministrativeArea;
@property(assign,copy) NSString * subLocality;

+ (id)addressFormatsDictionary;
+ (id)defaultCountryCode;
+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;
+ (id)localizedCountryNameForCountryCode:(id)arg1;
+ (id)pkPostalAddressWithDictionary:(id)arg1;
+ (id)postalAddress;
+ (id)postalAddressWithDictionary:(id)arg1;

- (id)ISOCountryCode;
- (bool)_isAddressFieldEqual:(id)arg1 toField:(id)arg2;
- (id)addressDictionary;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (id)formattedAddress;
- (id)formattedAddressSingleLine;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyboardSettingsForAddressPart:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pkAddressDictionary;
- (id)pkFormattedAddressSingleLine;
- (id)postalCode;
- (void)setAddressDictionary:(id)arg1;
- (id)state;
- (id)street;
- (id)subAdministrativeArea;
- (id)subLocality;

@end
