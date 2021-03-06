/* Generated by RuntimeBrowser.
 */

@protocol AXHADeviceProtocol <NSObject>

@required

- (int)availableEars;
- (void)connect;
- (bool)containsPeripheralWithUUID:(NSString *)arg1;
- (NSString *)deviceUUID;
- (bool)didLoadBasicProperties;
- (bool)didLoadRequiredProperties;
- (void)disconnect;
- (bool)hasConnection;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isPaired;
- (bool)keepInSync;
- (bool)leftAvailable;
- (double)leftBatteryLevel;
- (NSDate *)leftBatteryLowDate;
- (NSString *)leftFirmwareVersion;
- (NSString *)leftHardwareVersion;
- (double)leftMicrophoneVolume;
- (NSString *)leftPeripheralUUID;
- (NSArray *)leftPrograms;
- (AXHearingAidMode *)leftSelectedProgram;
- (double)leftStreamVolume;
- (NSString *)leftUUID;
- (void)loadRequiredProperties;
- (NSString *)manufacturer;
- (NSString *)model;
- (NSString *)name;
- (NSArray *)programs;
- (bool)rightAvailable;
- (double)rightBatteryLevel;
- (NSDate *)rightBatteryLowDate;
- (NSString *)rightFirmwareVersion;
- (NSString *)rightHardwareVersion;
- (double)rightMicrophoneVolume;
- (NSString *)rightPeripheralUUID;
- (NSArray *)rightPrograms;
- (AXHearingAidMode *)rightSelectedProgram;
- (double)rightStreamVolume;
- (NSString *)rightUUID;
- (void)selectProgram:(AXHearingAidMode *)arg1;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setKeepInSync:(bool)arg1;
- (void)setLeftMicrophoneVolume:(double)arg1;
- (void)setLeftStreamVolume:(double)arg1;
- (void)setRightMicrophoneVolume:(double)arg1;
- (void)setRightStreamVolume:(double)arg1;
- (void)setValue:(id)arg1 forProperty:(long long)arg2;
- (id)valueForProperty:(long long)arg1;

@end
