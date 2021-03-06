/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal *_externalDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSData *MFiCertificateSerialNumber;
@property (nonatomic, readonly) NSData *OEMIcon;
@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic, readonly) bool OEMIconVisible;
@property (nonatomic) <AVExternalDeviceDelegate> *delegate;
@property (nonatomic, readonly) NSArray *externalDeviceHIDs;
@property (nonatomic, readonly) bool limitedUI;
@property (nonatomic, readonly) NSArray *limitedUIElements;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool nightMode;
@property (nonatomic, readonly) bool nightModeSupported;
@property (nonatomic, readonly) bool ownsTurnByTurnNavigation;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic, readonly) NSArray *screenIDs;
@property (nonatomic, readonly) NSDictionary *screenInputCapabilities;
@property (nonatomic, readonly) NSData *settingsIcon;
@property (nonatomic, readonly) long long transportType;

+ (id)currentCarPlayExternalDevice;
+ (id)currentExternalDevice;
+ (bool)setDiagnosticMode:(bool)arg1 error:(id*)arg2;
+ (id)sharedLocalDevice;

- (id)ID;
- (id)MFiCertificateSerialNumber;
- (id)OEMIcon;
- (id)OEMIconLabel;
- (bool)OEMIconVisible;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (id)_weakReference;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)externalDeviceHIDWithUUID:(id)arg1;
- (id)externalDeviceHIDs;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (void)finalize;
- (id)init;
- (id)initWithCurrentCarPlayExternalDevice;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (bool)limitedUI;
- (id)limitedUIElements;
- (id)modelName;
- (id)name;
- (bool)nightMode;
- (bool)nightModeSupported;
- (bool)ownsTurnByTurnNavigation;
- (void)requestCarUI;
- (id)requestTurnByTurnNavigationOwnership;
- (bool)rightHandDrive;
- (id)screenIDs;
- (id)screenInputCapabilities;
- (void)setDelegate:(id)arg1;
- (id)settingsIcon;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (long long)transportType;

@end
