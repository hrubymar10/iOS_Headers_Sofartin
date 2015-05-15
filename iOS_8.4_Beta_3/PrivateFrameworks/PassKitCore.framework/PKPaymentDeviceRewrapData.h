/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding> {
    NSString *_CASDECCCertificate;
    NSString *_CASDRSACertificate;
    NSString *_deviceIdentifier;
}

@property (nonatomic, copy) NSString *CASDECCCertificate;
@property (nonatomic, copy) NSString *CASDRSACertificate;
@property (nonatomic, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (id)CASDECCCertificate;
- (id)CASDRSACertificate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCASDECCCertificate:(id)arg1;
- (void)setCASDRSACertificate:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;

@end
