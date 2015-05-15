/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWakeGestureManager : NSObject {
    long long _crown;
    <CMWakeGestureDelegate> *_delegate;
    long long _wrist;
    long long fCurrentState;
    bool fEnableAudioAlert;
    double fLastNotificationTime;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fScreenDimmingNotificationToken;
    struct Dispatcher { int (**x1)(); id x2; } *fWakeDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > { 
        struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > { 
            struct CMWakeGestureVisitor {} *__first_; 
        } __ptr_; 
    } fWakeGestureVisitor;
}

@property(assign,readwrite) long long crown;
@property(assign,readwrite) <CMWakeGestureDelegate> * delegate;
@property(assign,readwrite) long long wrist;

+ (void)initialize;
+ (bool)isWakeGestureAvailable;
+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)crown;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)onWakeUpdated:(const struct CLGestureReport { union { unsigned char x_1_1_1; struct Ping { unsigned char x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct GestureState { unsigned char x_3_2_1; int x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_1_1_3; struct Simulate { unsigned char x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; } x_1_1_4; struct ControlMode { unsigned char x_5_2_1; unsigned char x_5_2_2; unsigned char x_5_2_3[2]; } x_1_1_5; } x1; }*)arg1;
- (void)playAlert;
- (void)setCrown:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWrist:(long long)arg1;
- (bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;
- (void)updateWristAndCrown;
- (long long)wrist;

@end