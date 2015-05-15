/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonReference : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_extraProperties;
    NSString *_personIdentifier;
}

@property (nonatomic, copy) NSDictionary *extraProperties;
@property (nonatomic, copy) NSString *personIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personIdentifier;
- (id)serializedString;
- (void)setExtraProperties:(id)arg1;
- (void)setPersonIdentifier:(id)arg1;

@end
