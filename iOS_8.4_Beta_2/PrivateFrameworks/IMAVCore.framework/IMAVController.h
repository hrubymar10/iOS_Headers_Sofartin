/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVController : NSObject {
    bool _blockIncomingInvitationsDuringCall;
    bool _blockMultipleIncomingInvitations;
    bool _blockOutgoingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

@property(assign,retain) NSMutableArray * _delegates;
@property(assign,readonly) bool _ready;
@property(assign,readwrite) bool blockIncomingInvitationsDuringCall;
@property(assign,readwrite) bool blockMultipleIncomingInvitations;
@property(assign,readwrite) bool blockOutgoingInvitationsDuringCall;
@property(assign,readonly) bool cameraCapable;
@property(assign,readonly) bool cameraConnected;
@property(assign,readwrite) <IMAVControllerDelegate> * delegate;
@property(assign,retain) NSArray * delegates;
@property(assign,readonly) bool hasActiveConference;
@property(assign,readonly) bool hasRunningConference;
@property(assign,readonly) bool microphoneCapable;
@property(assign,readonly) bool microphoneConnected;
@property(assign,readonly) unsigned int overallChatState;

+ (id)sharedInstance;

- (id)_delegates;
- (void)_dumpCaps;
- (void)_markSetup;
- (bool)_ready;
- (void)_receivedPendingACRequests;
- (void)_receivedPendingVCRequests;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (bool)_shouldObserveConferences;
- (bool)_shouldRunACConferences;
- (bool)_shouldRunConferences;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (bool)blockIncomingInvitationsDuringCall;
- (bool)blockMultipleIncomingInvitations;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1;
- (bool)blockOutgoingInvitationsDuringCall;
- (bool)cameraCapable;
- (bool)cameraConnected;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)delegate;
- (id)delegates;
- (bool)hasActiveConference;
- (bool)hasRunningConference;
- (id)init;
- (bool)microphoneCapable;
- (bool)microphoneConnected;
- (unsigned int)overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)removeDelegate:(id)arg1;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
- (void)setBlockIncomingInvitationsDuringCall:(bool)arg1;
- (void)setBlockMultipleIncomingInvitations:(bool)arg1;
- (void)setBlockOutgoingInvitationsDuringCall:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasActiveConference:(bool)arg1;
- (void)setHasRunningConference:(bool)arg1;
- (void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2;
- (void)set_delegates:(id)arg1;
- (void)setupIMAVController;
- (void)updateActiveConference;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;

@end