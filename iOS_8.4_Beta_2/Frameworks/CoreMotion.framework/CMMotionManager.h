/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionManager : NSObject {
    id _internal;
}

@property(getter=isAccelerometerActive,assign,readonly) bool accelerometerActive;
@property(getter=isAccelerometerAvailable,assign,readonly) bool accelerometerAvailable;
@property(assign,readonly) CMAccelerometerData * accelerometerData;
@property(assign,readwrite) double accelerometerUpdateInterval;
@property(assign,readonly) CMAmbientPressureData * ambientPressureData;
@property(assign,readonly) unsigned long long attitudeReferenceFrame;
@property(assign,readonly) CMDeviceMotion * deviceMotion;
@property(getter=isDeviceMotionActive,assign,readonly) bool deviceMotionActive;
@property(getter=isDeviceMotionAvailable,assign,readonly) bool deviceMotionAvailable;
@property(assign,readwrite) double deviceMotionUpdateInterval;
@property(getter=isGyroActive,assign,readonly) bool gyroActive;
@property(getter=isGyroAvailable,assign,readonly) bool gyroAvailable;
@property(assign,readonly) CMGyroData * gyroData;
@property(assign,readwrite) double gyroUpdateInterval;
@property(getter=isMagnetometerActive,assign,readonly) bool magnetometerActive;
@property(getter=isMagnetometerAvailable,assign,readonly) bool magnetometerAvailable;
@property(assign,readonly) CMMagnetometerData * magnetometerData;
@property(assign,readwrite) double magnetometerUpdateInterval;
@property(assign,readwrite) bool showsDeviceMovementDisplay;
@property(getter=isSidebandSensorFusionAvailable,assign,readonly) bool sidebandSensorFusionAvailable;

+ (unsigned long long)availableAttitudeReferenceFrames;
+ (bool)configureM7Activity:(bool)arg1 stepCounting:(bool)arg2 activityForceCodeTransition:(bool)arg3 stepCountingForceCodeTransition:(bool)arg4 threshold:(bool)arg5 impulse:(bool)arg6 onBodyDetection:(bool)arg7 ispMode:(unsigned char)arg8 predictionInterval:(float)arg9 logLevel:(BOOL)arg10 proactiveRevisitTime:(unsigned short)arg11;
+ (void)dummySelector:(id)arg1;
+ (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; double x3; })gyroCalibrationDatabaseGetBiasFit;
+ (bool)hasRunMiniCal;
+ (void)initialize;
+ (void)setAllowInBackground:(bool)arg1;
+ (bool)startGyroMiniCalibration;
+ (bool)supportsGyroMiniCalibration;

- (id)accelerometerData;
- (double)accelerometerUpdateInterval;
- (id)ambientPressureData;
- (double)ambientPressureUpdateInterval;
- (unsigned long long)attitudeReferenceFrame;
- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceMotion;
- (double)deviceMotionGyroDt;
- (double)deviceMotionRequestedAccelerometerUpdateInterval;
- (double)deviceMotionRequestedCompassUpdateInterval;
- (double)deviceMotionRequestedGyroUpdateInterval;
- (double)deviceMotionUpdateInterval;
- (void)didBecomeActive:(id)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)dismissDeviceMovementDisplay;
- (id)gyroData;
- (long long)gyroStartupLatency;
- (double)gyroUpdateInterval;
- (int)gyttNumTemperatures;
- (id)init;
- (id)initPrivate;
- (id)initUsing6AxisSensorFusion;
- (id)initUsingGyroOnlySensorFusion;
- (bool)isAccelerometerActive;
- (bool)isAccelerometerAvailable;
- (bool)isAmbientPressureActive;
- (bool)isAmbientPressureAvailable;
- (bool)isDeviceMotionActive;
- (bool)isDeviceMotionAvailable;
- (bool)isGyroActive;
- (bool)isGyroAvailable;
- (bool)isMagnetometerActive;
- (bool)isMagnetometerAvailable;
- (bool)isSidebandSensorFusionAvailable;
- (id)magnetometerData;
- (double)magnetometerUpdateInterval;
- (void)onAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)onAmbientPressure:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (void)onDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; } x2; bool x3; }*)arg1;
- (void)onGeomagneticModel:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)onGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned short x3; bool x4; }*)arg1;
- (void)onMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)rebuildGytt;
- (void)setAccelerometerDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)setAmbientPressureUpdateInterval:(double)arg1;
- (void)setAmbientPressureUpdateIntervalPrivate:(double)arg1;
- (void)setDeviceMotionCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3 fsync:(bool)arg4;
- (void)setDeviceMotionCompassAlignmentCallback:(int (*)arg1 info:(void*)arg2;
- (void)setDeviceMotionCompassDataCallback:(int (*)arg1 info:(void*)arg2;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)setGyroBiasAndVarianceCallback:(int (*)arg1 info:(void*)arg2;
- (void)setGyroDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)setMagnetometerDataCallback:(int (*)arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)setMaxAccelerationVarianceForStability:(float)arg1;
- (void)setNotificationCallback:(int (*)arg1 info:(void*)arg2;
- (void)setSensorThrottleTime:(double)arg1;
- (void)setSensorTurnOffTime:(double)arg1;
- (void)setShowsDeviceMovementDisplay:(bool)arg1;
- (void)setShowsDeviceMovementDisplayPrivate:(bool)arg1;
- (bool)setSidebandSensorFusionEnable:(bool)arg1;
- (bool)setSidebandSensorFusionEnable:(bool)arg1 measureLatency:(bool)arg2 withSnoopHandler:(id)arg3;
- (bool)setSidebandSensorFusionEnable:(bool)arg1 withSnoopHandler:(id)arg2;
- (void)setSidebandTimeSyncHandler:(id)arg1;
- (void)setUseAccelerometer:(bool)arg1;
- (void)setWantsPowerConservativeDeviceMotion:(bool)arg1;
- (void)showDeviceMovementDisplay;
- (bool)showsDeviceMovementDisplay;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAmbientPressureUpdates;
- (void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startGyroUpdates;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startWatchdogCheckinsPrivate;
- (void)stopAccelerometerUpdates;
- (void)stopAccelerometerUpdatesPrivate;
- (void)stopAmbientPressureUpdates;
- (void)stopAmbientPressureUpdatesPrivate;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)stopGyroUpdates;
- (void)stopGyroUpdatesPrivate;
- (void)stopMagnetometerUpdates;
- (void)stopMagnetometerUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;
- (bool)useAccelerometer;
- (void)willResignActive:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;

@end
