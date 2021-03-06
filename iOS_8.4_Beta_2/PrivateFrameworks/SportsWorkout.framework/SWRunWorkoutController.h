/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate> {
    SWDataController *_dataController;
    SWDataControllerSnapshotObserver *_dataControllerSnapshotObserver;
    SWFastestDistanceWindowObserver *_fastestKilometerObserver;
    SWFastestDistanceWindowObserver *_fastestMileObserver;
    bool _hasEverStarted;
    bool _hasFiredBeginningWorkoutPrompt;
    bool _isWalk;
    SWIntervalSnapshotObserver *_kmSnapshotObserver;
    CLLocationManager *_locationManager;
    SWIntervalSnapshotObserver *_mileSnapshotObserver;
    SWRunWorkoutPreset *_preset;
    float _previousObservedCalories;
    float _previousObservedDistanceInMiles;
    unsigned long long _previousObservedElapsedTimeInSeconds;
    CLLocation *_previousObservedLocation;
    float _previousObservedPaceInSecondsPerMile;
    SWRemote *_remote;
    SWRunSensor *_sensor;
    bool _sensorBatteryIsLowNotificationSent;
    SWIntervalSnapshotObserver *_tenSecondSnapshotObserver;
    SWUserInteractionSnapshotObserver *_userInteractionSnapshotObserver;
    SWRunWorkout *_workout;
    NSTimer *_workoutObserverTimer;
    NSMutableArray *_workoutObservers;
    NSString *_workoutState;
}

@property(assign,readonly) bool canBeUsedForRunCalibration;
@property(assign,readonly) bool canBeUsedForWalkCalibration;
@property(assign,readonly) SWDataController * dataController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasEverStarted;
@property(assign,readonly) bool hasPowerSong;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isCalibratedForRun;
@property(assign,readonly) bool isCalibratedForWalk;
@property(assign,readwrite) bool isCalibration;
@property(assign,readonly) float maxCalibrationDistanceMiles;
@property(assign,readonly) float minCalibrationDistanceMiles;
@property(assign,readonly) NSString * powerSongName;
@property(assign,retain) SWRunWorkoutPreset * preset;
@property(assign,readonly) SWRemote * remote;
@property(assign,readonly) SWRunSensor * sensor;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSDictionary * workoutData;
@property(assign,readonly) NSString * workoutState;

+ (void)__releaseWorkoutInProgressFileLock;
+ (id)__systemVersion;
+ (bool)__takeWorkoutInProgressFileLock;
+ (id)__uniqueIdentifier;
+ (id)defaultController;
+ (void)disableSDA;
+ (id)distanceDisplayUnitsForPreferences;
+ (id)distanceUnitForString:(id)arg1;
+ (void)enableSDA;
+ (id)goalTypeForString:(id)arg1;
+ (bool)isWorkoutInProgressOnSystem;
+ (float)kgsToLbs:(float)arg1;
+ (float)kmToMiles:(float)arg1;
+ (float)lbsToKgs:(float)arg1;
+ (float)milesToKm:(float)arg1;
+ (void)resetDefaultController;
+ (float)secondsPerKmToSecondsPerMile:(float)arg1;
+ (float)secondsPerMileToSecondsPerKm:(float)arg1;
+ (bool)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1;
+ (bool)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1;

- (void)_beginSearchingForSensorAfterLink;
- (void)_cancelWorkoutObserverTimer;
- (void)_linkStateChangedNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)_powerSongPersistentUIDString;
- (void)_remoteCommandIssued:(id)arg1;
- (void)_searchStateChangedNotification:(id)arg1;
- (void)_setWorkoutState:(id)arg1;
- (bool)_shouldRecordLocation;
- (void)_startWorkoutObserverTimer;
- (void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2;
- (void)_updateWorkoutObserversForTimer:(id)arg1;
- (void)_updateWorkoutObserversForUserEvent:(id)arg1;
- (void)activateWorkout;
- (bool)canBeUsedForRunCalibration;
- (bool)canBeUsedForWalkCalibration;
- (id)dataController;
- (void)dealloc;
- (void)endWorkout;
- (bool)hasEverStarted;
- (bool)hasPowerSong;
- (id)initWithSensor:(id)arg1 remote:(id)arg2;
- (bool)isCalibratedForRun;
- (bool)isCalibratedForWalk;
- (bool)isCalibration;
- (float)maxCalibrationDistanceMiles;
- (float)minCalibrationDistanceMiles;
- (void)pauseWorkout;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (id)powerSongName;
- (void)prepareToActivateWorkout;
- (id)preset;
- (void)refreshSettings;
- (void)registerWorkoutObserver:(id)arg1;
- (id)remote;
- (void)resetCalibration;
- (bool)saveCalibrationData;
- (bool)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1;
- (id)sensor;
- (void)setIsCalibration:(bool)arg1;
- (void)setPreset:(id)arg1;
- (void)stopVoicePrompts;
- (void)togglePauseResumeWorkoutFromHeadset;
- (void)unlinkRemote;
- (void)unregisterWorkoutObserver:(id)arg1;
- (id)workoutData;
- (id)workoutState;

@end
