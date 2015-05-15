/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBusProvider : CoreCECBus <CECBusPollingOperationDelegate, CECInterfaceDelegate, NSCopying, NSSecureCoding> {
    CECInterface *_interface;
    CECBusPollingOperation *_pollingOperation;
    unsigned char _powerStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) CECInterface *interface;
@property (nonatomic, retain) CECBusPollingOperation *pollingOperation;
@property (nonatomic) unsigned char powerStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_cecErrorWithInterfaceError:(id)arg1;
- (id)addDeviceWithLogicalAddress:(unsigned char)arg1 message:(id)arg2 reason:(unsigned long long)arg3;
- (id)addDeviceWithLogicalAddress:(unsigned char)arg1 physicalAddress:(id)arg2 deviceType:(unsigned long long)arg3 message:(id)arg4 reason:(unsigned long long)arg5;
- (id)addDeviceWithType:(unsigned long long)arg1 error:(id*)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)destinationConfirmedForMessage:(id)arg1;
- (id)destinationExpectedForMessage:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (void)interface:(id)arg1 receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2;
- (void)interfacePropertiesChanged:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)linkStateChanged:(bool)arg1 error:(id*)arg2;
- (id)pollingOperation;
- (void)pollingOperation:(id)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
- (void)pollingOperation:(id)arg1 encounteredError:(id)arg2 forMessage:(id)arg3;
- (bool)pollingOperation:(id)arg1 shouldSkipAddress:(unsigned char)arg2;
- (void)pollingOperationCompleted:(id)arg1;
- (unsigned char)powerStatus;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (void)receivedMessage:(id)arg1;
- (bool)refreshDevicesWithInitiator:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (id)serialQueue;
- (void)setOsdNameASCII:(union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })arg1;
- (void)setPollingOperation:(id)arg1;
- (void)setPowerStatus:(unsigned char)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setSystemAudioModeStatus:(unsigned long long)arg1;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x1[3]; })arg1;
- (bool)updateActiveSource:(id)arg1 error:(id*)arg2;

@end
