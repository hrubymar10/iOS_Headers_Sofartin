/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceProvisioningData : NSObject <NSSecureCoding> {
    NSString *_deviceName;
    CLLocation *_location;
    NSString *_phoneNumber;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly) NSString *extensiveLatitude;
@property (nonatomic, readonly) NSString *extensiveLongitude;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *phoneNumberSuffix;
@property (nonatomic, readonly) NSString *sanitizedLatitude;
@property (nonatomic, readonly) NSString *sanitizedLongitude;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)extensiveLatitude;
- (id)extensiveLongitude;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)phoneNumber;
- (id)phoneNumberSuffix;
- (id)sanitizedLatitude;
- (id)sanitizedLongitude;
- (void)setDeviceName:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
