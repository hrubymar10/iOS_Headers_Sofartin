/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) unsigned long long connectionID;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property (nonatomic, readonly) NSString *firmwareRevision;
@property (nonatomic, readonly) NSString *hardwareRevision;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelNumber;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *protocolStrings;
@property (nonatomic, readonly) NSString *serialNumber;

- (void)_addSession:(id)arg1;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)_internalConnectionID;
- (bool)_internalNotPresentInIAPAccessoriesArray;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_removeSession:(id)arg1;
- (void)_setConnected:(bool)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(bool)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (unsigned int)accessoryCapabilities;
- (bool)accessoryHasNMEASentencesAvailable;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (id)bonjourName;
- (int)classType;
- (unsigned long long)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (bool)getEphemerisExpirationInterval:(double*)arg1;
- (bool)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (bool)getEphemerisURL:(id*)arg1;
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(id)arg2;
- (bool)getNMEASentence:(id*)arg1;
- (id)getVehicleInfoData;
- (id)hardwareRevision;
- (bool)hasIPConnection;
- (id)init;
- (bool)isAvailableOverBonjour;
- (bool)isConnected;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (unsigned long long)pointOfInterestDataFormatMaximumSupportedVersion;
- (bool)pointOfInterestHandoffEnabled;
- (id)preferredApp;
- (id)protocolStrings;
- (void)resetIAPTimeSyncKalmanFilter;
- (bool)sendEphemeris:(id)arg1;
- (bool)sendEphemerisPointDataGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (bool)sendGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2;
- (bool)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2;
- (id)serialNumber;
- (void)setDelegate:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setIAPTimeSyncParams:(id)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (bool)setNMEASentencesToFilter:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;
- (bool)shouldBeHiddenFromUI;
- (bool)supportsAccessibility;
- (bool)supportsCarPlay;
- (bool)supportsLocation;
- (bool)supportsPointOfInterest;
- (bool)supportsPublicIap;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;
- (id)wakeToken;

@end
