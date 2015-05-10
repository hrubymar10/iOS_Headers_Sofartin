/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFVoiceInfo : NSObject <NSCopying, NSSecureCoding> {
    long long _gender;
    bool _isCustom;
    NSString *_languageCode;
    bool _wasInitalizedFromDictionaryRepresentation;
}

@property(assign,readwrite) long long gender;
@property(assign,readwrite) bool isCustom;
@property(assign,readonly) NSString * languageCode;
@property(assign,readonly) bool wasInitalizedFromDictionaryRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(bool)arg3;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)setGender:(long long)arg1;
- (void)setIsCustom:(bool)arg1;
- (bool)wasInitalizedFromDictionaryRepresentation;

@end
