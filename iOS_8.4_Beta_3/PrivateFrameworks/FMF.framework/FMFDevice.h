/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString *_deviceId;
    NSString *_deviceName;
    bool _isActiveDevice;
    bool _isThisDevice;
}

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) bool isActiveDevice;
@property (nonatomic) bool isThisDevice;

+ (id)deviceWithId:(id)arg1 name:(id)arg2 isActive:(bool)arg3 isThisDevice:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)deviceId;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveDevice;
- (bool)isEqual:(id)arg1;
- (bool)isThisDevice;
- (void)setDeviceId:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIsActiveDevice:(bool)arg1;
- (void)setIsThisDevice:(bool)arg1;
- (void)updateIsActive:(bool)arg1 isThisDevice:(bool)arg2;

@end
