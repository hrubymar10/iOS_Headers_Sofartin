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

@property (nonatomic, readonly) bool canBeUsedForRunCalibration;
@property (nonatomic, readonly) bool canBeUsedForWalkCalibration;
@property (nonatomic, readonly) SWDataController *dataController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEverStarted;
@property (nonatomic, readonly) bool hasPowerSong;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCalibratedForRun;
@property (nonatomic, readonly) bool isCalibratedForWalk;
@property (nonatomic) bool isCalibration;
@property (nonatomic, readonly) float maxCalibrationDistanceMiles;
@property (nonatomic, readonly) float minCalibrationDistanceMiles;
@property (nonatomic, readonly) NSString *powerSongName;
@property (nonatomic, retain) SWRunWorkoutPreset *preset;
@property (nonatomic, readonly) SWRemote *remote;
@property (nonatomic, readonly) SWRunSensor *sensor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *workoutData;
@property (nonatomic, readonly) NSString *workoutState;

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
