/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSDaemon : NSObject {
    int _UIBusyCount;
    int _busyCount;
    NSTimer *_hysteresisTimer;
    NSObject<OS_dispatch_queue> *_idleCountQueue;
    bool _stabilizedIsBusy;
}

@property (nonatomic) int UIBusyCount;
@property (nonatomic) int busyCount;
@property (nonatomic, retain) NSTimer *hysteresisTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *idleCountQueue;
@property (nonatomic) bool stabilizedIsBusy;

- (void).cxx_destruct;
- (int)UIBusyCount;
- (void)_didChangeIdleBusyState:(bool)arg1;
- (void)_hysteresisTimerDidFire:(id)arg1;
- (int)busyCount;
- (void)dealloc;
- (void)didIdle;
- (void)didUnidle;
- (id)hysteresisTimer;
- (id)idleCountQueue;
- (id)init;
- (bool)isBusy;
- (void)releaseBusy;
- (void)releasePowerAssertion;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)retainPowerAssertion;
- (void)retainUIBusy;
- (void)setBusyCount:(int)arg1;
- (void)setHysteresisTimer:(id)arg1;
- (void)setIdleCountQueue:(id)arg1;
- (void)setStabilizedIsBusy:(bool)arg1;
- (void)setUIBusyCount:(int)arg1;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;
- (bool)stabilizedIsBusy;

@end
