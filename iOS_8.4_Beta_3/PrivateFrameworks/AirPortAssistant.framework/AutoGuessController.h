/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AutoGuessController : AssistantCallbackController {
    struct ACPBrowserSession { } *_acpBrowserSession;
    NSThread *_autoGuessThread;
    bool _autoJoinState;
    int _bonjourBrowseStatus;
    NSTimer *_browseReadyTimer;
    NSMutableDictionary *_browsedBases;
    int _currentAutoGuessUISelector;
    NSString *_currentParamString;
    id _delegate;
    NSDictionary *_guessCompletionDict;
    struct AutoGuessContext { } *_guessContext;
    int _lastAutoGuessUISelector;
    NSDictionary *_lastInstrumentation;
    NSString *_lastParamString;
    bool _onShortTimer;
    NSDictionary *_targetBrowseRecord;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
    bool _updatedTargetInfo;
    NSArray *_wifiScanInfos;
    int _wifiScanStatus;
    NSDictionary *unconfiguredDeviceThatIsBeingSetup;
}

@property (retain) NSTimer *_browseReadyTimer;
@property (retain) NSMutableDictionary *_browsedBases;
@property (retain) NSArray *_wifiScanInfos;
@property int currentAutoGuessUISelector;
@property (retain) NSString *currentParamString;
@property <AutoGuessUIDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *guessCompletionDict;
@property int lastAutoGuessUISelector;
@property (retain) NSDictionary *lastInstrumentation;
@property (retain) NSString *lastParamString;
@property (retain) NSDictionary *targetBrowseRecord;
@property (retain) NSString *targetMACAddress;
@property (retain) NSDictionary *targetScanRecord;
@property (retain) NSDictionary *unconfiguredDeviceThatIsBeingSetup;

+ (id)fullAutoGuessDictionaryFromCompletionDict:(id)arg1;
+ (bool)isRestoreAnOptionForTheRecommendations:(id)arg1;
+ (id)primaryRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)recommendationStringFromCompletionDict:(id)arg1;
+ (id)recommendationToActionChoice:(id)arg1;
+ (id)restoreOfferFromCompletionDict:(id)arg1;
+ (id)restoreRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)arg1;
+ (id)shortProductNameFromBaseStationDictionary:(id)arg1;
+ (bool)shouldShowPasswordUIForRecommendation:(id)arg1;
+ (id)sourceBaseStationFromRecommendation:(id)arg1;
+ (id)sourceNetworkFromRecommendation:(id)arg1;
+ (id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)arg1;
+ (id)unconfiguredBaseStationFromGuessCompleteDict:(id)arg1;
+ (id)unconfiguredBaseStationFromRecommendation:(id)arg1;

- (id)_browseReadyTimer;
- (id)_browsedBases;
- (id)_wifiScanInfos;
- (void)autoGuessEngineComplete;
- (int)bonjourBrowseStatus;
- (void)bonjourTXTRemoved:(id)arg1;
- (void)bonjourTXTUpdated:(id)arg1;
- (void)browseReadyTimerCallback:(id)arg1;
- (int)cancelAutoGuess;
- (void)cancelBonjourBrowser;
- (void)cancelWiFiScanner;
- (id)createCompletionDictFromAutoGuessResults:(id)arg1;
- (int)currentAutoGuessUISelector;
- (id)currentParamString;
- (void)dealloc;
- (id)delegate;
- (id)guessCompletionDict;
- (id)init;
- (int)lastAutoGuessUISelector;
- (id)lastInstrumentation;
- (id)lastParamString;
- (bool)okToSwitchToShortBonjourTimeout:(id)arg1;
- (void)runAutoGuessThread:(id)arg1;
- (int)runAutoGuessWithWifiScanInfos:(id)arg1;
- (void)setBonjourBrowseStatus:(int)arg1;
- (void)setCurrentAutoGuessUISelector:(int)arg1;
- (void)setCurrentParamString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuessCompletionDict:(id)arg1;
- (void)setLastAutoGuessUISelector:(int)arg1;
- (void)setLastInstrumentation:(id)arg1;
- (void)setLastParamString:(id)arg1;
- (void)setTargetBrowseRecord:(id)arg1;
- (void)setTargetMACAddress:(id)arg1;
- (void)setTargetScanRecord:(id)arg1;
- (void)setUnconfiguredDeviceThatIsBeingSetup:(id)arg1;
- (void)setWiFiScanStatus:(int)arg1;
- (void)set_browseReadyTimer:(id)arg1;
- (void)set_browsedBases:(id)arg1;
- (void)set_wifiScanInfos:(id)arg1;
- (int)startAutoGuessForUnconfiguredMACAddress:(id)arg1 withWifiScanInfos:(id)arg2;
- (void)startAutoGuessIfReady;
- (int)startBonjourBrowser;
- (int)startWiFiScanner;
- (void)stopBonjourBrowser;
- (void)stopWiFiScanner;
- (id)targetBrowseRecord;
- (id)targetInfo;
- (id)targetMACAddress;
- (id)targetScanRecord;
- (void)uiAssetsUpdated:(id)arg1;
- (id)unconfiguredDeviceThatIsBeingSetup;
- (void)updateTargetInfo:(bool)arg1;
- (int)wifiScanStatus;
- (void)wirelessScanDone:(id)arg1;

@end
