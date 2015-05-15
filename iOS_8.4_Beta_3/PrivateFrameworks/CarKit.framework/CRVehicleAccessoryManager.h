/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleAccessoryManager : NSObject {
    <CRVehicleAccessoryManagerDelegate> *_vehicleAccessoryDelegate;
    NSMutableDictionary *_vehiclesBySerialNumber;
}

@property(assign,readwrite) <CRVehicleAccessoryManagerDelegate> * vehicleAccessoryDelegate;
@property(assign,retain) NSMutableDictionary * vehiclesBySerialNumber;

+ (id)_certificateSerialNumberForAccessory:(id)arg1;
+ (bool)_isValidAccessoryMacAddress:(id)arg1;
+ (bool)_isVehicleAccessory:(id)arg1;

- (void).cxx_destruct;
- (void)_primeConnectedVehicleAccessories;
- (id)_vehicleForAccessory:(id)arg1;
- (id)connectedVehicleAccessories;
- (void)dealloc;
- (void)handleAccessoryConnect:(id)arg1;
- (void)handleAccessoryDisconnect:(id)arg1;
- (void)handleAccessoryInformationUpdate:(id)arg1;
- (id)init;
- (void)setVehicleAccessoryDelegate:(id)arg1;
- (void)setVehiclesBySerialNumber:(id)arg1;
- (id)vehicleAccessoryDelegate;
- (id)vehicleAccessoryForCertificateSerial:(id)arg1;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1;
- (id)vehiclesBySerialNumber;

@end
