/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject <WPAirPlaySoloDelegate> {
    struct { 
        unsigned char flags; 
        unsigned char config; 
        unsigned char ipv4[4]; 
    } _btleAdvertisementData;
    unsigned char _btleEnabled;
    NSObject<OS_dispatch_queue> *_btleQueue;
    struct __SCDynamicStore { } *_btleSCStore;
    unsigned char _btleSeed;
    WPAirPlaySolo *_btleServer;
    unsigned char _btleStarted;
    NSObject<OS_dispatch_source> *_btleTimer;
    int _cloudConnectivityNotifyToken;
    int _conferenceRoomModeNotifyToken;
    AirPlayControllerServer *_controllerServer;
    int _dacpErrorNotifyToken;
    int _dacpNotifyTokens;
    int _lockDownActivationStateToken;
    int _managedDefaultsChangedNotificationToken;
    unsigned char _p2pSolo;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    unsigned char _playbackPrevented;
    int _prefChangedNotifyToken;
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; void *x2; id x3; struct { void *x_4_1_1; void *x_4_1_2; int (*x_4_1_3)(); int (*x_4_1_4)(); int (*x_4_1_5)(); int (*x_4_1_6)(); int (*x_4_1_7)(); } x4; unsigned char x5; unsigned long long x6; id x7; struct _DNSServiceRef_t {} *x8; unsigned char x9; unsigned char x10; struct _DNSServiceRef_t {} *x11; struct HTTPServerPrivate {} *x12; id x13; struct HTTPServerPrivate {} *x14; unsigned char x15[16]; float x16; struct AirPlayScreenServerPrivate {} *x17; id x18; unsigned char x19; int x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26[6]; BOOL x27[17]; BOOL x28[64]; int x29; unsigned char x30; unsigned char x31; unsigned char x32; id x33; unsigned char x34; unsigned char x35; unsigned char x36; BOOL x37[8]; unsigned long long x38; BOOL x39[8]; unsigned char x40; BOOL x41[64]; unsigned char x42; unsigned char x43; int x44; unsigned char x45; struct __CFDictionary {} *x46; struct __CFDictionary {} *x47; struct MediaControlServerPrivate {} *x48; struct __CFDictionary {} *x49; unsigned int x50; int x51; unsigned int x52; } *_server;
    struct __CFDictionary { } *_soloDevices;
    int _systemBufferSamples;
    int _systemSampleRate;
    int _touchSetupActiveNotifyToken;
    struct AirPlayReceiverUIPrivate { } *_ui;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_btleStart;
- (int)_btleStartListeningForNetworkChanges;
- (void)_btleStop;
- (void)_btleStopListeningForNetworkChanges;
- (void)_btleUpdate;
- (void)_btleUpdateAdvertisementData;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;

@end
