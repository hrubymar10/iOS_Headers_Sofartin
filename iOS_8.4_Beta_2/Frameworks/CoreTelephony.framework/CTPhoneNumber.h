/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTPhoneNumber : NSObject <CTMessageAddress, NSCopying> {
    NSString *_countryCode;
    NSString *_digits;
    bool _isShortCode;
}

@property(assign,readonly) NSString * countryCode;
@property(assign,readonly) NSString * digits;
@property(assign,readwrite) bool isShortCode;

+ (bool)isValidPhoneNumber:(id)arg1;
+ (bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;

- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)digits;
- (id)encodedString;
- (id)formatForCallingCountry:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (bool)isShortCode;
- (long long)numberOfDigitsForShortCodeNumber;
- (void)setIsShortCode:(bool)arg1;

@end