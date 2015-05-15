/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWBluetoothRemote : SWRemote {
    NSMutableData *_bluetoothInputData;
    NSTimer *_leftKeyTimer;
    bool _leftKeyWasDown;
    SWBluetoothMessageHandler *_messageHandler;
    NSTimer *_nikeKeyTimer;
    bool _nikeKeyWasDown;
    SWPacketUnscrambler *_packetUnscrambler;
    NSTimer *_playKeyTimer;
    bool _playKeyWasDown;
    NSTimer *_remoteLeftKeyLongPressTimer;
    NSTimer *_remoteNikeKeyLongPressTimer;
    NSTimer *_remotePlayKeyLongPressTimer;
    NSTimer *_remoteRightKeyLongPressTimer;
    NSTimer *_rightKeyTimer;
    bool _rightKeyWasDown;
    NSTimer *_volumeDownKeyTimer;
    bool _volumeDownKeyWasDown;
    NSTimer *_volumeUpKeyTimer;
    bool _volumeUpKeyWasDown;
}

- (void)_connectToDeviceWithAddress:(struct { unsigned char x1[6]; })arg1;
- (struct { unsigned char x1[6]; })_deviceAddressForSerialNumber:(id)arg1;
- (void)_discoverDevice;
- (void)_handleNikeKeyIsDown:(bool)arg1;
- (void)_handleNikeKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteLeftKeyIsDown:(bool)arg1;
- (void)_handleSimpleRemoteLeftKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemotePlayKeyIsDown:(bool)arg1;
- (void)_handleSimpleRemotePlayKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteRightKeyIsDown:(bool)arg1;
- (void)_handleSimpleRemoteRightKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteVolumeDownKeyIsDown:(bool)arg1;
- (void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteVolumeUpKeyIsDown:(bool)arg1;
- (void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)arg1;
- (void)_postBeginMusicFastForwardNotification:(id)arg1;
- (void)_postBeginMusicRewindNotification:(id)arg1;
- (void)_postEndWorkoutNotification:(id)arg1;
- (void)_postFirePowersongNotification:(id)arg1;
- (void)_receivedActivationNotification:(id)arg1;
- (void)_receivedConnectionFailureNotification:(id)arg1;
- (void)_receivedConnectionNotification:(id)arg1;
- (void)_receivedDiscoveryNotification:(id)arg1;
- (void)_receivedInputReadNotification:(id)arg1;
- (void)_registerToReadInput;
- (id)_serialNumberForPacket:(id)arg1 timestamp:(unsigned long long)arg2 radioId:(unsigned int*)arg3;
- (void)beginLinking;
- (void)beginSearching;
- (void)cancelLinking;
- (void)cancelSearching;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)unlink;

@end