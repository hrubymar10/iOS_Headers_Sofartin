/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {
    struct __CFPhoneNumber { } *_phoneNumberRef;
}

@property(assign,readonly) NSString * countryCode;
@property(assign,readonly) NSString * digits;
@property(assign,readonly) NSString * formattedInternationalRepresentation;
@property(assign,readonly) NSString * formattedRepresentation;
@property(assign,readwrite) struct __CFPhoneNumber { }* phoneNumberRef;
@property(assign,readonly) NSString * unformattedInternationalRepresentation;

+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)countryCode;
- (void)dealloc;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalRepresentation;
- (id)formattedRepresentation;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (void)setPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)unformattedInternationalRepresentation;

@end