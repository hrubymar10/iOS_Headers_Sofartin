/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallEnded : PBCodable <NSCopying> {
    unsigned int _backCameraCaptureDuration;
    unsigned int _callDuration;
    unsigned int _conferenceMiscError;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    unsigned int _dataRate;
    unsigned int _diagnosticPingAvg;
    unsigned int _diagnosticPingMax;
    unsigned int _diagnosticPingMin;
    unsigned int _diagnosticPingPacketLoss;
    unsigned int _endedReason;
    unsigned int _frontCameraCaptureDuration;
    unsigned int _gameKitError;
    int _genericError;
    int _gksError;
    int _gksReturnCode;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int backCameraCaptureDuration : 1; 
        unsigned int callDuration : 1; 
        unsigned int conferenceMiscError : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int dataRate : 1; 
        unsigned int diagnosticPingAvg : 1; 
        unsigned int diagnosticPingMax : 1; 
        unsigned int diagnosticPingMin : 1; 
        unsigned int diagnosticPingPacketLoss : 1; 
        unsigned int endedReason : 1; 
        unsigned int frontCameraCaptureDuration : 1; 
        unsigned int gameKitError : 1; 
        unsigned int genericError : 1; 
        unsigned int gksError : 1; 
        unsigned int gksReturnCode : 1; 
        unsigned int invitationServiceError : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isCallUpgrade : 1; 
        unsigned int isInitiator : 1; 
        unsigned int isNetworkActive : 1; 
        unsigned int isNetworkEnabled : 1; 
        unsigned int isNetworkReachable : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int messageDeliveryError : 1; 
        unsigned int networkCheckResult : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int registrationError : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int relayError : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
        unsigned int viceroyError : 1; 
    } _has;
    unsigned int _invitationServiceError;
    unsigned int _isAudioInterrupted;
    unsigned int _isCallUpgrade;
    unsigned int _isInitiator;
    unsigned int _isNetworkActive;
    unsigned int _isNetworkEnabled;
    unsigned int _isNetworkReachable;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _localNetworkConnection;
    unsigned int _messageDeliveryError;
    unsigned int _networkCheckResult;
    unsigned int _onLockScreen;
    unsigned int _registrationError;
    unsigned int _relayConnectDuration;
    unsigned int _relayError;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned long long _timestamp;
    unsigned int _usesRelay;
    unsigned int _viceroyError;
}

@property (nonatomic) unsigned int backCameraCaptureDuration;
@property (nonatomic) unsigned int callDuration;
@property (nonatomic) unsigned int conferenceMiscError;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) unsigned int dataRate;
@property (nonatomic) unsigned int diagnosticPingAvg;
@property (nonatomic) unsigned int diagnosticPingMax;
@property (nonatomic) unsigned int diagnosticPingMin;
@property (nonatomic) unsigned int diagnosticPingPacketLoss;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) unsigned int frontCameraCaptureDuration;
@property (nonatomic) unsigned int gameKitError;
@property (nonatomic) int genericError;
@property (nonatomic) int gksError;
@property (nonatomic) int gksReturnCode;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasBackCameraCaptureDuration;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasConferenceMiscError;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentNatType;
@property (nonatomic) bool hasDataRate;
@property (nonatomic) bool hasDiagnosticPingAvg;
@property (nonatomic) bool hasDiagnosticPingMax;
@property (nonatomic) bool hasDiagnosticPingMin;
@property (nonatomic) bool hasDiagnosticPingPacketLoss;
@property (nonatomic) bool hasEndedReason;
@property (nonatomic) bool hasFrontCameraCaptureDuration;
@property (nonatomic) bool hasGameKitError;
@property (nonatomic) bool hasGenericError;
@property (nonatomic) bool hasGksError;
@property (nonatomic) bool hasGksReturnCode;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasInvitationServiceError;
@property (nonatomic) bool hasIsAudioInterrupted;
@property (nonatomic) bool hasIsCallUpgrade;
@property (nonatomic) bool hasIsInitiator;
@property (nonatomic) bool hasIsNetworkActive;
@property (nonatomic) bool hasIsNetworkEnabled;
@property (nonatomic) bool hasIsNetworkReachable;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasIsVideoInterrupted;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasLocalNetworkConnection;
@property (nonatomic) bool hasMessageDeliveryError;
@property (nonatomic) bool hasNetworkCheckResult;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasRegistrationError;
@property (nonatomic) bool hasRelayConnectDuration;
@property (nonatomic) bool hasRelayError;
@property (nonatomic) bool hasRemoteNatType;
@property (nonatomic) bool hasRemoteNetworkConnection;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsesRelay;
@property (nonatomic) bool hasViceroyError;
@property (nonatomic) unsigned int invitationServiceError;
@property (nonatomic) unsigned int isAudioInterrupted;
@property (nonatomic) unsigned int isCallUpgrade;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int isVideoInterrupted;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) unsigned int messageDeliveryError;
@property (nonatomic) unsigned int networkCheckResult;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned int registrationError;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) unsigned int relayError;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usesRelay;
@property (nonatomic) unsigned int viceroyError;

- (unsigned int)backCameraCaptureDuration;
- (unsigned int)callDuration;
- (unsigned int)conferenceMiscError;
- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (unsigned int)dataRate;
- (void)dealloc;
- (id)description;
- (unsigned int)diagnosticPingAvg;
- (unsigned int)diagnosticPingMax;
- (unsigned int)diagnosticPingMin;
- (unsigned int)diagnosticPingPacketLoss;
- (id)dictionaryRepresentation;
- (unsigned int)endedReason;
- (unsigned int)frontCameraCaptureDuration;
- (unsigned int)gameKitError;
- (int)genericError;
- (int)gksError;
- (int)gksReturnCode;
- (id)guid;
- (bool)hasBackCameraCaptureDuration;
- (bool)hasCallDuration;
- (bool)hasConferenceMiscError;
- (bool)hasConnectDuration;
- (bool)hasConnectionType;
- (bool)hasCurrentNatType;
- (bool)hasDataRate;
- (bool)hasDiagnosticPingAvg;
- (bool)hasDiagnosticPingMax;
- (bool)hasDiagnosticPingMin;
- (bool)hasDiagnosticPingPacketLoss;
- (bool)hasEndedReason;
- (bool)hasFrontCameraCaptureDuration;
- (bool)hasGameKitError;
- (bool)hasGenericError;
- (bool)hasGksError;
- (bool)hasGksReturnCode;
- (bool)hasGuid;
- (bool)hasInvitationServiceError;
- (bool)hasIsAudioInterrupted;
- (bool)hasIsCallUpgrade;
- (bool)hasIsInitiator;
- (bool)hasIsNetworkActive;
- (bool)hasIsNetworkEnabled;
- (bool)hasIsNetworkReachable;
- (bool)hasIsVideo;
- (bool)hasIsVideoInterrupted;
- (bool)hasLinkQuality;
- (bool)hasLocalNetworkConnection;
- (bool)hasMessageDeliveryError;
- (bool)hasNetworkCheckResult;
- (bool)hasOnLockScreen;
- (bool)hasRegistrationError;
- (bool)hasRelayConnectDuration;
- (bool)hasRelayError;
- (bool)hasRemoteNatType;
- (bool)hasRemoteNetworkConnection;
- (bool)hasTimestamp;
- (bool)hasUsesRelay;
- (bool)hasViceroyError;
- (unsigned long long)hash;
- (unsigned int)invitationServiceError;
- (unsigned int)isAudioInterrupted;
- (unsigned int)isCallUpgrade;
- (bool)isEqual:(id)arg1;
- (unsigned int)isInitiator;
- (unsigned int)isNetworkActive;
- (unsigned int)isNetworkEnabled;
- (unsigned int)isNetworkReachable;
- (unsigned int)isVideo;
- (unsigned int)isVideoInterrupted;
- (int)linkQuality;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageDeliveryError;
- (unsigned int)networkCheckResult;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (unsigned int)registrationError;
- (unsigned int)relayConnectDuration;
- (unsigned int)relayError;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setBackCameraCaptureDuration:(unsigned int)arg1;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setConferenceMiscError:(unsigned int)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setDataRate:(unsigned int)arg1;
- (void)setDiagnosticPingAvg:(unsigned int)arg1;
- (void)setDiagnosticPingMax:(unsigned int)arg1;
- (void)setDiagnosticPingMin:(unsigned int)arg1;
- (void)setDiagnosticPingPacketLoss:(unsigned int)arg1;
- (void)setEndedReason:(unsigned int)arg1;
- (void)setFrontCameraCaptureDuration:(unsigned int)arg1;
- (void)setGameKitError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGksError:(int)arg1;
- (void)setGksReturnCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasBackCameraCaptureDuration:(bool)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasConferenceMiscError:(bool)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentNatType:(bool)arg1;
- (void)setHasDataRate:(bool)arg1;
- (void)setHasDiagnosticPingAvg:(bool)arg1;
- (void)setHasDiagnosticPingMax:(bool)arg1;
- (void)setHasDiagnosticPingMin:(bool)arg1;
- (void)setHasDiagnosticPingPacketLoss:(bool)arg1;
- (void)setHasEndedReason:(bool)arg1;
- (void)setHasFrontCameraCaptureDuration:(bool)arg1;
- (void)setHasGameKitError:(bool)arg1;
- (void)setHasGenericError:(bool)arg1;
- (void)setHasGksError:(bool)arg1;
- (void)setHasGksReturnCode:(bool)arg1;
- (void)setHasInvitationServiceError:(bool)arg1;
- (void)setHasIsAudioInterrupted:(bool)arg1;
- (void)setHasIsCallUpgrade:(bool)arg1;
- (void)setHasIsInitiator:(bool)arg1;
- (void)setHasIsNetworkActive:(bool)arg1;
- (void)setHasIsNetworkEnabled:(bool)arg1;
- (void)setHasIsNetworkReachable:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasIsVideoInterrupted:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasLocalNetworkConnection:(bool)arg1;
- (void)setHasMessageDeliveryError:(bool)arg1;
- (void)setHasNetworkCheckResult:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setHasRelayConnectDuration:(bool)arg1;
- (void)setHasRelayError:(bool)arg1;
- (void)setHasRemoteNatType:(bool)arg1;
- (void)setHasRemoteNetworkConnection:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsesRelay:(bool)arg1;
- (void)setHasViceroyError:(bool)arg1;
- (void)setInvitationServiceError:(unsigned int)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (void)setIsCallUpgrade:(unsigned int)arg1;
- (void)setIsInitiator:(unsigned int)arg1;
- (void)setIsNetworkActive:(unsigned int)arg1;
- (void)setIsNetworkEnabled:(unsigned int)arg1;
- (void)setIsNetworkReachable:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setMessageDeliveryError:(unsigned int)arg1;
- (void)setNetworkCheckResult:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setRegistrationError:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRelayError:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (void)setViceroyError:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
- (unsigned int)viceroyError;
- (void)writeTo:(id)arg1;

@end
