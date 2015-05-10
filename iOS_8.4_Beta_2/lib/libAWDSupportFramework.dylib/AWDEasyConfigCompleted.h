/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDEasyConfigCompleted : PBCodable <NSCopying> {
    bool _adminPasswordSet;
    unsigned int _channelOfDestinationAP;
    unsigned int _channelOfSWAP;
    bool _destinationNetworkPSKInKeychain;
    bool _destinationNetworkRecommendationUsed;
    NSString *_eaBundleSeedID;
    NSString *_eaFirmwareRevision;
    NSString *_eaHardwareRevision;
    NSString *_eaManufacturerName;
    NSString *_eaModelName;
    NSMutableArray *_eaProtocolStrings;
    int _easyConfigStoppedReasonError;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channelOfDestinationAP : 1; 
        unsigned int channelOfSWAP : 1; 
        unsigned int easyConfigStoppedReasonError : 1; 
        unsigned int rssiOfDestinationAP : 1; 
        unsigned int rssiOfSWAP : 1; 
        unsigned int secondsToApplyConfig : 1; 
        unsigned int secondsToCompleteFullConfig : 1; 
        unsigned int secondsToCompleteMFiSAPAuth : 1; 
        unsigned int secondsToCompletePostConfigCheck : 1; 
        unsigned int secondsToFindPostConfigDevice : 1; 
        unsigned int secondsToFindPreConfigDevice : 1; 
        unsigned int secondsToGetLinkUpOnDestination : 1; 
        unsigned int secondsToGetLinkUpOnSWAP : 1; 
        unsigned int snrOfDestinationAP : 1; 
        unsigned int snrOfSWAP : 1; 
        unsigned int wifiJoinDestinationAPError : 1; 
        unsigned int wifiJoinSWAPError : 1; 
        unsigned int adminPasswordSet : 1; 
        unsigned int destinationNetworkPSKInKeychain : 1; 
        unsigned int destinationNetworkRecommendationUsed : 1; 
        unsigned int hitJoiningDestinationAPTimeout : 1; 
        unsigned int hitJoiningTargetSWAPTimeout : 1; 
        unsigned int pauseAfterApply : 1; 
        unsigned int playPasswordSet : 1; 
        unsigned int userChangedFriendlyName : 1; 
    } _has;
    bool _hitJoiningDestinationAPTimeout;
    bool _hitJoiningTargetSWAPTimeout;
    bool _pauseAfterApply;
    bool _playPasswordSet;
    int _rssiOfDestinationAP;
    int _rssiOfSWAP;
    float _secondsToApplyConfig;
    float _secondsToCompleteFullConfig;
    float _secondsToCompleteMFiSAPAuth;
    float _secondsToCompletePostConfigCheck;
    float _secondsToFindPostConfigDevice;
    float _secondsToFindPreConfigDevice;
    float _secondsToGetLinkUpOnDestination;
    float _secondsToGetLinkUpOnSWAP;
    unsigned int _snrOfDestinationAP;
    unsigned int _snrOfSWAP;
    unsigned long long _timestamp;
    bool _userChangedFriendlyName;
    int _wifiJoinDestinationAPError;
    int _wifiJoinSWAPError;
}

@property(assign,readwrite) bool adminPasswordSet;
@property(assign,readwrite) unsigned int channelOfDestinationAP;
@property(assign,readwrite) unsigned int channelOfSWAP;
@property(assign,readwrite) bool destinationNetworkPSKInKeychain;
@property(assign,readwrite) bool destinationNetworkRecommendationUsed;
@property(assign,retain) NSString * eaBundleSeedID;
@property(assign,retain) NSString * eaFirmwareRevision;
@property(assign,retain) NSString * eaHardwareRevision;
@property(assign,retain) NSString * eaManufacturerName;
@property(assign,retain) NSString * eaModelName;
@property(assign,retain) NSMutableArray * eaProtocolStrings;
@property(assign,readwrite) int easyConfigStoppedReasonError;
@property(assign,readwrite) bool hasAdminPasswordSet;
@property(assign,readwrite) bool hasChannelOfDestinationAP;
@property(assign,readwrite) bool hasChannelOfSWAP;
@property(assign,readwrite) bool hasDestinationNetworkPSKInKeychain;
@property(assign,readwrite) bool hasDestinationNetworkRecommendationUsed;
@property(assign,readonly) bool hasEaBundleSeedID;
@property(assign,readonly) bool hasEaFirmwareRevision;
@property(assign,readonly) bool hasEaHardwareRevision;
@property(assign,readonly) bool hasEaManufacturerName;
@property(assign,readonly) bool hasEaModelName;
@property(assign,readwrite) bool hasEasyConfigStoppedReasonError;
@property(assign,readwrite) bool hasHitJoiningDestinationAPTimeout;
@property(assign,readwrite) bool hasHitJoiningTargetSWAPTimeout;
@property(assign,readwrite) bool hasPauseAfterApply;
@property(assign,readwrite) bool hasPlayPasswordSet;
@property(assign,readwrite) bool hasRssiOfDestinationAP;
@property(assign,readwrite) bool hasRssiOfSWAP;
@property(assign,readwrite) bool hasSecondsToApplyConfig;
@property(assign,readwrite) bool hasSecondsToCompleteFullConfig;
@property(assign,readwrite) bool hasSecondsToCompleteMFiSAPAuth;
@property(assign,readwrite) bool hasSecondsToCompletePostConfigCheck;
@property(assign,readwrite) bool hasSecondsToFindPostConfigDevice;
@property(assign,readwrite) bool hasSecondsToFindPreConfigDevice;
@property(assign,readwrite) bool hasSecondsToGetLinkUpOnDestination;
@property(assign,readwrite) bool hasSecondsToGetLinkUpOnSWAP;
@property(assign,readwrite) bool hasSnrOfDestinationAP;
@property(assign,readwrite) bool hasSnrOfSWAP;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasUserChangedFriendlyName;
@property(assign,readwrite) bool hasWifiJoinDestinationAPError;
@property(assign,readwrite) bool hasWifiJoinSWAPError;
@property(assign,readwrite) bool hitJoiningDestinationAPTimeout;
@property(assign,readwrite) bool hitJoiningTargetSWAPTimeout;
@property(assign,readwrite) bool pauseAfterApply;
@property(assign,readwrite) bool playPasswordSet;
@property(assign,readwrite) int rssiOfDestinationAP;
@property(assign,readwrite) int rssiOfSWAP;
@property(assign,readwrite) float secondsToApplyConfig;
@property(assign,readwrite) float secondsToCompleteFullConfig;
@property(assign,readwrite) float secondsToCompleteMFiSAPAuth;
@property(assign,readwrite) float secondsToCompletePostConfigCheck;
@property(assign,readwrite) float secondsToFindPostConfigDevice;
@property(assign,readwrite) float secondsToFindPreConfigDevice;
@property(assign,readwrite) float secondsToGetLinkUpOnDestination;
@property(assign,readwrite) float secondsToGetLinkUpOnSWAP;
@property(assign,readwrite) unsigned int snrOfDestinationAP;
@property(assign,readwrite) unsigned int snrOfSWAP;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) bool userChangedFriendlyName;
@property(assign,readwrite) int wifiJoinDestinationAPError;
@property(assign,readwrite) int wifiJoinSWAPError;

- (void)addEaProtocolStrings:(id)arg1;
- (bool)adminPasswordSet;
- (unsigned int)channelOfDestinationAP;
- (unsigned int)channelOfSWAP;
- (void)clearEaProtocolStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)destinationNetworkPSKInKeychain;
- (bool)destinationNetworkRecommendationUsed;
- (id)dictionaryRepresentation;
- (id)eaBundleSeedID;
- (id)eaFirmwareRevision;
- (id)eaHardwareRevision;
- (id)eaManufacturerName;
- (id)eaModelName;
- (id)eaProtocolStrings;
- (id)eaProtocolStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eaProtocolStringsCount;
- (int)easyConfigStoppedReasonError;
- (bool)hasAdminPasswordSet;
- (bool)hasChannelOfDestinationAP;
- (bool)hasChannelOfSWAP;
- (bool)hasDestinationNetworkPSKInKeychain;
- (bool)hasDestinationNetworkRecommendationUsed;
- (bool)hasEaBundleSeedID;
- (bool)hasEaFirmwareRevision;
- (bool)hasEaHardwareRevision;
- (bool)hasEaManufacturerName;
- (bool)hasEaModelName;
- (bool)hasEasyConfigStoppedReasonError;
- (bool)hasHitJoiningDestinationAPTimeout;
- (bool)hasHitJoiningTargetSWAPTimeout;
- (bool)hasPauseAfterApply;
- (bool)hasPlayPasswordSet;
- (bool)hasRssiOfDestinationAP;
- (bool)hasRssiOfSWAP;
- (bool)hasSecondsToApplyConfig;
- (bool)hasSecondsToCompleteFullConfig;
- (bool)hasSecondsToCompleteMFiSAPAuth;
- (bool)hasSecondsToCompletePostConfigCheck;
- (bool)hasSecondsToFindPostConfigDevice;
- (bool)hasSecondsToFindPreConfigDevice;
- (bool)hasSecondsToGetLinkUpOnDestination;
- (bool)hasSecondsToGetLinkUpOnSWAP;
- (bool)hasSnrOfDestinationAP;
- (bool)hasSnrOfSWAP;
- (bool)hasTimestamp;
- (bool)hasUserChangedFriendlyName;
- (bool)hasWifiJoinDestinationAPError;
- (bool)hasWifiJoinSWAPError;
- (unsigned long long)hash;
- (bool)hitJoiningDestinationAPTimeout;
- (bool)hitJoiningTargetSWAPTimeout;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pauseAfterApply;
- (bool)playPasswordSet;
- (bool)readFrom:(id)arg1;
- (int)rssiOfDestinationAP;
- (int)rssiOfSWAP;
- (float)secondsToApplyConfig;
- (float)secondsToCompleteFullConfig;
- (float)secondsToCompleteMFiSAPAuth;
- (float)secondsToCompletePostConfigCheck;
- (float)secondsToFindPostConfigDevice;
- (float)secondsToFindPreConfigDevice;
- (float)secondsToGetLinkUpOnDestination;
- (float)secondsToGetLinkUpOnSWAP;
- (void)setAdminPasswordSet:(bool)arg1;
- (void)setChannelOfDestinationAP:(unsigned int)arg1;
- (void)setChannelOfSWAP:(unsigned int)arg1;
- (void)setDestinationNetworkPSKInKeychain:(bool)arg1;
- (void)setDestinationNetworkRecommendationUsed:(bool)arg1;
- (void)setEaBundleSeedID:(id)arg1;
- (void)setEaFirmwareRevision:(id)arg1;
- (void)setEaHardwareRevision:(id)arg1;
- (void)setEaManufacturerName:(id)arg1;
- (void)setEaModelName:(id)arg1;
- (void)setEaProtocolStrings:(id)arg1;
- (void)setEasyConfigStoppedReasonError:(int)arg1;
- (void)setHasAdminPasswordSet:(bool)arg1;
- (void)setHasChannelOfDestinationAP:(bool)arg1;
- (void)setHasChannelOfSWAP:(bool)arg1;
- (void)setHasDestinationNetworkPSKInKeychain:(bool)arg1;
- (void)setHasDestinationNetworkRecommendationUsed:(bool)arg1;
- (void)setHasEasyConfigStoppedReasonError:(bool)arg1;
- (void)setHasHitJoiningDestinationAPTimeout:(bool)arg1;
- (void)setHasHitJoiningTargetSWAPTimeout:(bool)arg1;
- (void)setHasPauseAfterApply:(bool)arg1;
- (void)setHasPlayPasswordSet:(bool)arg1;
- (void)setHasRssiOfDestinationAP:(bool)arg1;
- (void)setHasRssiOfSWAP:(bool)arg1;
- (void)setHasSecondsToApplyConfig:(bool)arg1;
- (void)setHasSecondsToCompleteFullConfig:(bool)arg1;
- (void)setHasSecondsToCompleteMFiSAPAuth:(bool)arg1;
- (void)setHasSecondsToCompletePostConfigCheck:(bool)arg1;
- (void)setHasSecondsToFindPostConfigDevice:(bool)arg1;
- (void)setHasSecondsToFindPreConfigDevice:(bool)arg1;
- (void)setHasSecondsToGetLinkUpOnDestination:(bool)arg1;
- (void)setHasSecondsToGetLinkUpOnSWAP:(bool)arg1;
- (void)setHasSnrOfDestinationAP:(bool)arg1;
- (void)setHasSnrOfSWAP:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserChangedFriendlyName:(bool)arg1;
- (void)setHasWifiJoinDestinationAPError:(bool)arg1;
- (void)setHasWifiJoinSWAPError:(bool)arg1;
- (void)setHitJoiningDestinationAPTimeout:(bool)arg1;
- (void)setHitJoiningTargetSWAPTimeout:(bool)arg1;
- (void)setPauseAfterApply:(bool)arg1;
- (void)setPlayPasswordSet:(bool)arg1;
- (void)setRssiOfDestinationAP:(int)arg1;
- (void)setRssiOfSWAP:(int)arg1;
- (void)setSecondsToApplyConfig:(float)arg1;
- (void)setSecondsToCompleteFullConfig:(float)arg1;
- (void)setSecondsToCompleteMFiSAPAuth:(float)arg1;
- (void)setSecondsToCompletePostConfigCheck:(float)arg1;
- (void)setSecondsToFindPostConfigDevice:(float)arg1;
- (void)setSecondsToFindPreConfigDevice:(float)arg1;
- (void)setSecondsToGetLinkUpOnDestination:(float)arg1;
- (void)setSecondsToGetLinkUpOnSWAP:(float)arg1;
- (void)setSnrOfDestinationAP:(unsigned int)arg1;
- (void)setSnrOfSWAP:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserChangedFriendlyName:(bool)arg1;
- (void)setWifiJoinDestinationAPError:(int)arg1;
- (void)setWifiJoinSWAPError:(int)arg1;
- (unsigned int)snrOfDestinationAP;
- (unsigned int)snrOfSWAP;
- (unsigned long long)timestamp;
- (bool)userChangedFriendlyName;
- (int)wifiJoinDestinationAPError;
- (int)wifiJoinSWAPError;
- (void)writeTo:(id)arg1;

@end
