/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding> {
    HAPMetadataCharacteristic *_hapCharacteristicMetadata;
    HMDHAPMetadataCharacteristicValue *_valueMetadata;
}

@property (nonatomic, retain) HAPMetadataCharacteristic *hapCharacteristicMetadata;
@property (nonatomic, retain) HMDHAPMetadataCharacteristicValue *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristicMetadata;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPCharacteristic:(id)arg1;
- (void)setHapCharacteristicMetadata:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;

@end
