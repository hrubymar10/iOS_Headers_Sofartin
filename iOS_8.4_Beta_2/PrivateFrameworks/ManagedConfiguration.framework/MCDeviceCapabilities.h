/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDeviceCapabilities : NSObject {
    bool _supportsBlockLevelEncryption;
    bool _supportsFileLevelEncryption;
}

@property(assign,readonly) bool supportsBlockLevelEncryption;
@property(assign,readonly) bool supportsFileLevelEncryption;

+ (id)currentDevice;

- (bool)_mediaDiskIsEncrypted;
- (id)init;
- (bool)supportsBlockLevelEncryption;
- (bool)supportsFileLevelEncryption;
- (bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3;

@end
