/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVTelephonyManager : NSObject {
    CTCallCenter *_callCenter;
    struct __CFUUID { } *_ctAudioToken;
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFMachPort { } *_ctServerMachPort;
    struct __CFUUID { } *_ctVideoToken;
    NSMutableDictionary *_currentCallDictionary;
    bool _isDesignatedAudioServiceProvider;
    bool _isDesignatedVideoServiceProvider;
}

@property (nonatomic, readonly) unsigned int callState;

+ (id)numberToDialForNumber:(id)arg1 dialAssist:(bool*)arg2;
+ (id)sharedInstance;

- (void)__handleCallEvent:(id)arg1;
- (void)_answerCall:(struct __CTCall { }*)arg1;
- (bool)_breakCSCallsIfNecessary;
- (struct __CTCall { }*)_callRefForChat:(id)arg1;
- (void)_chatStateChanged:(id)arg1;
- (void)_cleanupMachInfo;
- (void)_dialRequested:(struct __CFDictionary { }*)arg1;
- (void)_disconnectCSCallWithID:(id)arg1;
- (bool)_disconnectCTServerConnection;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (void)_handleCallEvent:(id)arg1;
- (void)_hangUpCall:(struct __CTCall { }*)arg1;
- (bool)_isOnCallToID:(id)arg1;
- (void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(bool)arg2;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (bool)_registerCTRequestService;
- (void)_setCallRef:(struct __CTCall { }*)arg1 forChat:(id)arg2;
- (void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2;
- (bool)_setupCTServerConnection;
- (bool)_unregisterCTRequestService;
- (bool)_wantsBreakBeforeMake;
- (unsigned int)callState;
- (void)dealloc;
- (id)init;
- (void)notifyCallConnectedForChat:(id)arg1;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)startWatchingForCTRequests;
- (void)stopWatchingForCTRequests;

@end
