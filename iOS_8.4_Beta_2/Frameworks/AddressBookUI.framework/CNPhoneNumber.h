/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNPhoneNumber : NSObject <NSCopying> {
    NSString *_cachedFormattedNormalizedStringValue;
    NSString *_cachedNormalizedStringValue;
    NSString *_stringValue;
}

@property(assign,copy) NSString * countryCode;
@property(assign,copy) NSString * formattedStringValue;
@property(assign,copy) NSString * normalizedStringValue;
@property(assign,copy) NSString * stringValue;

+ (id)phoneNumberWithStringValue:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)formattedStringValue;
- (id)initWithStringValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)normalizedStringValue;
- (id)stringValue;

@end
