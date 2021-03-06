/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataService : NSObject <NSSecureCoding> {
    HAPMetadataService *_hapServiceMetadata;
    NSArray *_mandatoryCharacteristics;
    NSArray *_optionalCharacteristics;
}

@property(assign,retain) HAPMetadataService * hapServiceMetadata;
@property(assign,retain) NSArray * mandatoryCharacteristics;
@property(assign,retain) NSArray * optionalCharacteristics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristics:(id)arg1 hapCharacteristics:(id)arg2;
- (id)hapServiceMetadata;
- (id)hmdCharacteristics:(id)arg1 hapCharacteristics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPService:(id)arg1 hapCharacteristics:(id)arg2;
- (id)mandatoryCharacteristics;
- (id)optionalCharacteristics;
- (void)setHapServiceMetadata:(id)arg1;
- (void)setMandatoryCharacteristics:(id)arg1;
- (void)setOptionalCharacteristics:(id)arg1;

@end
