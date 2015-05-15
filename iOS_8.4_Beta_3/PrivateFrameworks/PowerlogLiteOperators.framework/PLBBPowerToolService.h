/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBPowerToolService : PLService {
    PLEntryNotificationOperatorComposition *_audioEventCallback;
    PLEntryNotificationOperatorComposition *_bbHwOtherCallback;
    PLTelephonyConnection *_connection;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    bool _doesCurrPackageHasProblem;
    bool _doesPrevPackageHasProblem;
    double _elapsedDenumerator;
    NSMutableArray *_endExclusionPeriods;
    unsigned char _exclusionMask;
    double _gArmUtil;
    int _gPerepherialMax;
    PLEntryNotificationOperatorComposition *_hotspotEventCallback;
    bool _isUIAlertEnabled;
    PLEntryNotificationOperatorComposition *_lteRRCCallback;
    PLEntryNotificationOperatorComposition *_msgLiteCallback;
    NSDate *_notToRemoveDate;
    NSDate *_samplingDate;
    bool _sendAWD;
    NSMutableArray *_startExclusionPeriods;
    PLEntryNotificationOperatorComposition *_telActivityCallback;
    double _totalNormalARMUtility;
    PLEntryNotificationOperatorComposition *_wcdmaRRCCallback;
}

@property (retain) PLEntryNotificationOperatorComposition *audioEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property PLTelephonyConnection *connection;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property bool doesCurrPackageHasProblem;
@property bool doesPrevPackageHasProblem;
@property double elapsedDenumerator;
@property (retain) NSMutableArray *endExclusionPeriods;
@property unsigned char exclusionMask;
@property double gArmUtil;
@property int gPerepherialMax;
@property (retain) PLEntryNotificationOperatorComposition *hotspotEventCallback;
@property bool isUIAlertEnabled;
@property (retain) PLEntryNotificationOperatorComposition *lteRRCCallback;
@property (retain) PLEntryNotificationOperatorComposition *msgLiteCallback;
@property (retain) NSDate *notToRemoveDate;
@property (retain) NSDate *samplingDate;
@property bool sendAWD;
@property (retain) NSMutableArray *startExclusionPeriods;
@property (retain) PLEntryNotificationOperatorComposition *telActivityCallback;
@property double totalNormalARMUtility;
@property (retain) PLEntryNotificationOperatorComposition *wcdmaRRCCallback;

+ (id)entryAggregateDefinitions;
+ (id)entryArmUtil;
+ (id)entryCauseDefinition;
+ (id)entryCauseHelperDefinition;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)analazeCauseResultsReturnCause:(struct CauseDurations { int x1; double x2; double x3; double x4; double x5; }*)arg1;
- (void)analazeIntervalWithSnapshot:(struct CauseSnapshot { long long x1; double x2; long long x3; }*)arg1 withDuration:(struct CauseDurations { int x1; double x2; double x3; double x4; double x5; }*)arg2 withInterval:(double)arg3 withEntry:(id)arg4;
- (id)audioEventCallback;
- (id)bbHwOtherCallback;
- (double)calculateMaxPerepherialPercentageWithEntry:(id)arg1;
- (void)collectExtraDataForPackage:(id)arg1;
- (id)connection;
- (bool)containsExclusionsAfterCleanupWithDate:(id)arg1;
- (id)dailyTaskNotification;
- (id)displayEventCallback;
- (bool)doesCurrPackageHasProblem;
- (bool)doesCurrPeriodHaveProblem:(id)arg1;
- (bool)doesPrevPackageHasProblem;
- (double)elapsedDenumerator;
- (id)endExclusionPeriods;
- (unsigned char)exclusionMask;
- (id)findCauseWithEntry:(id)arg1;
- (double)gArmUtil;
- (int)gPerepherialMax;
- (void)handleAudioCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)handleExclusionWithState:(bool)arg1 withExclusion:(unsigned char)arg2;
- (void)handleHotspotCallback:(id)arg1;
- (void)handleMavBBHwOtherCallback:(id)arg1;
- (void)handleProblemWithEntry:(id)arg1;
- (id)hotspotEventCallback;
- (id)init;
- (void)initOperatorDependancies;
- (bool)isPackageTimeValidWithEntry:(id)arg1;
- (bool)isPackageValidWithEntry:(id)arg1;
- (bool)isUIAlertEnabled;
- (id)lteRRCCallback;
- (void)lteRRCCallback:(id)arg1;
- (id)msgLiteCallback;
- (void)msgLiteCallback:(id)arg1;
- (id)notToRemoveDate;
- (double)percentageHistogramFromArray:(id)arg1;
- (void)resetAllCounters:(id)arg1;
- (void)resetStructuresWithSnapshot:(struct CauseSnapshot { long long x1; double x2; long long x3; }*)arg1 withDuration:(struct CauseDurations { int x1; double x2; double x3; double x4; double x5; }*)arg2;
- (id)samplingDate;
- (bool)sendAWD;
- (void)setAudioEventCallback:(id)arg1;
- (void)setBbHwOtherCallback:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDailyTaskNotification:(id)arg1;
- (void)setDisplayEventCallback:(id)arg1;
- (void)setDoesCurrPackageHasProblem:(bool)arg1;
- (void)setDoesPrevPackageHasProblem:(bool)arg1;
- (void)setElapsedDenumerator:(double)arg1;
- (void)setEndExclusionPeriods:(id)arg1;
- (void)setExclusionMask:(unsigned char)arg1;
- (void)setGArmUtil:(double)arg1;
- (void)setGPerepherialMax:(int)arg1;
- (void)setHotspotEventCallback:(id)arg1;
- (void)setIsUIAlertEnabled:(bool)arg1;
- (void)setLteRRCCallback:(id)arg1;
- (void)setMsgLiteCallback:(id)arg1;
- (void)setNotToRemoveDate:(id)arg1;
- (void)setSamplingDate:(id)arg1;
- (void)setSendAWD:(bool)arg1;
- (void)setStartExclusionPeriods:(id)arg1;
- (void)setTelActivityCallback:(id)arg1;
- (void)setTotalNormalARMUtility:(double)arg1;
- (void)setWcdmaRRCCallback:(id)arg1;
- (void)setupInitExclusions;
- (id)startExclusionPeriods;
- (void)submitAWD;
- (id)telActivityCallback;
- (void)telActivityCallback:(id)arg1;
- (double)totalNormalARMUtility;
- (id)wcdmaRRCCallback;
- (void)wcdmaRRCCallback:(id)arg1;
- (void)writeToHelperTable:(id)arg1 WithValue:(double)arg2 withDate:(id)arg3;

@end
