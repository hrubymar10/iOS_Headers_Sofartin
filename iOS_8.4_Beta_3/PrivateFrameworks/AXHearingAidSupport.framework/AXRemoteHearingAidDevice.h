/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol> {
    NSString *_deviceUUID;
    bool _isBluetoothPaired;
    bool _isConnecting;
    bool _isPaired;
    bool _keepInSync;
    double _leftBatteryLevel;
    NSDate *_leftBatteryLowDate;
    bool _leftConnected;
    NSString *_leftFirmwareVersion;
    NSString *_leftHardwareVersion;
    double _leftMicrophoneVolume;
    NSString *_leftPeripheralUUID;
    NSArray *_leftPrograms;
    AXHearingAidMode *_leftSelectedProgram;
    double _leftStreamVolume;
    NSString *_leftUUID;
    long long _loadedProperties;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    long long _pendingPropertyWrites;
    AXHATimer *_propertyWriteTimer;
    double _rightBatteryLevel;
    NSDate *_rightBatteryLowDate;
    bool _rightConnected;
    NSString *_rightFirmwareVersion;
    NSString *_rightHardwareVersion;
    double _rightMicrophoneVolume;
    NSString *_rightPeripheralUUID;
    NSArray *_rightPrograms;
    AXHearingAidMode *_rightSelectedProgram;
    double _rightStreamVolume;
    NSString *_rightUUID;
    <AXHARemoteUpdateProtocol> *_updateDelegate;
    int availableEars;
}

@property(assign,readwrite) int availableEars;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * deviceUUID;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isBluetoothPaired;
@property(assign,readwrite) bool isConnecting;
@property(assign,readwrite) bool isPaired;
@property(assign,readwrite) bool keepInSync;
@property(assign,readwrite) double leftBatteryLevel;
@property(assign,retain) NSDate * leftBatteryLowDate;
@property(assign,readwrite) bool leftConnected;
@property(assign,retain) NSString * leftFirmwareVersion;
@property(assign,retain) NSString * leftHardwareVersion;
@property(assign,readwrite) double leftMicrophoneVolume;
@property(assign,retain) NSString * leftPeripheralUUID;
@property(assign,copy) NSArray * leftPrograms;
@property(assign,retain) AXHearingAidMode * leftSelectedProgram;
@property(assign,readwrite) double leftStreamVolume;
@property(assign,retain) NSString * leftUUID;
@property(assign,readwrite) long long loadedProperties;
@property(assign,retain) NSString * manufacturer;
@property(assign,retain) NSString * model;
@property(assign,retain) NSString * name;
@property(assign,readwrite) long long pendingPropertyWrites;
@property(assign,readwrite) double rightBatteryLevel;
@property(assign,retain) NSDate * rightBatteryLowDate;
@property(assign,readwrite) bool rightConnected;
@property(assign,retain) NSString * rightFirmwareVersion;
@property(assign,retain) NSString * rightHardwareVersion;
@property(assign,readwrite) double rightMicrophoneVolume;
@property(assign,retain) NSString * rightPeripheralUUID;
@property(assign,copy) NSArray * rightPrograms;
@property(assign,retain) AXHearingAidMode * rightSelectedProgram;
@property(assign,readwrite) double rightStreamVolume;
@property(assign,retain) NSString * rightUUID;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <AXHARemoteUpdateProtocol> * updateDelegate;

- (void)_delayWriteProperties;
- (id)_valueForProperty:(long long)arg1;
- (int)availableEars;
- (void)connect;
- (bool)containsPeripheralWithUUID:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceUUID;
- (bool)didLoadBasicProperties;
- (bool)didLoadProperty:(long long)arg1;
- (bool)didLoadRequiredProperties;
- (void)disconnect;
- (bool)hasConnection;
- (id)init;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2;
- (bool)isBluetoothPaired;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isLeftConnected;
- (bool)isPaired;
- (bool)isRightConnected;
- (bool)keepInSync;
- (bool)leftAvailable;
- (double)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (bool)leftConnected;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (double)leftMicrophoneVolume;
- (id)leftPeripheralUUID;
- (id)leftPrograms;
- (id)leftSelectedProgram;
- (double)leftStreamVolume;
- (id)leftUUID;
- (void)loadRequiredProperties;
- (long long)loadedProperties;
- (id)manufacturer;
- (id)model;
- (id)name;
- (long long)pendingPropertyWrites;
- (id)programs;
- (bool)rightAvailable;
- (double)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (bool)rightConnected;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (double)rightMicrophoneVolume;
- (id)rightPeripheralUUID;
- (id)rightPrograms;
- (id)rightSelectedProgram;
- (double)rightStreamVolume;
- (id)rightUUID;
- (void)selectProgram:(id)arg1;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setIsBluetoothPaired:(bool)arg1;
- (void)setIsConnecting:(bool)arg1;
- (void)setIsPaired:(bool)arg1;
- (void)setKeepInSync:(bool)arg1;
- (void)setLeftBatteryLevel:(double)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftConnected:(bool)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftMicrophoneVolume:(double)arg1;
- (void)setLeftPeripheralUUID:(id)arg1;
- (void)setLeftPrograms:(id)arg1;
- (void)setLeftSelectedProgram:(id)arg1;
- (void)setLeftStreamVolume:(double)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setLoadedProperties:(long long)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingPropertyWrites:(long long)arg1;
- (void)setRightBatteryLevel:(double)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightConnected:(bool)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightMicrophoneVolume:(double)arg1;
- (void)setRightPeripheralUUID:(id)arg1;
- (void)setRightPrograms:(id)arg1;
- (void)setRightSelectedProgram:(id)arg1;
- (void)setRightStreamVolume:(double)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(long long)arg2;
- (id)updateDelegate;
- (id)valueForProperty:(long long)arg1;
- (void)writeVolumesForProperty:(long long)arg1;

@end
