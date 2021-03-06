/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface LTEAudioDevice : NSObject {
    NSNumber *_deviceID;
    NSString *_deviceName;
    bool _inputAvailable;
    bool _isLineIn;
    bool _outputAvailable;
}

@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) bool inputAvailable;
@property (nonatomic, readonly) bool outputAvailable;

- (void)createName;
- (void)createNameForScope:(unsigned int)arg1;
- (void)dealloc;
- (id)deviceID;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithDeviceID:(id)arg1;
- (bool)inputAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isSomethingConnectedToJack;
- (bool)isStreamAvailableForScope:(unsigned int)arg1;
- (bool)isValidDevice;
- (bool)isValidInputDevice;
- (bool)outputAvailable;

@end
