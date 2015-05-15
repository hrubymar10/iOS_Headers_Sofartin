/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNSTimerOperatorComposition : NSObject {
    NSDate *_fireDate;
    double _interval;
    PLOperator *_operator;
    id _operatorBlock;
    bool _repeats;
    NSTimer *_timer;
    double _tolerance;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,retain) NSDate * fireDate;
@property(assign,readwrite) double interval;
@property(assign,readwrite) PLOperator * operator;
@property(assign,copy) id operatorBlock;
@property(assign,readwrite) bool repeats;
@property(assign,retain) NSTimer * timer;
@property(assign,readwrite) bool timerActive;
@property(assign,readwrite) double tolerance;
@property(assign,retain) id userInfo;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fireDate;
- (void)fireTimerEarly;
- (void)handleTimerFire;
- (id)initWithOperator:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(bool)arg5 withUserInfo:(id)arg6 withBlock:(id)arg7;
- (id)initWithWorkQueue:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(bool)arg5 withUserInfo:(id)arg6 withBlock:(id)arg7;
- (double)interval;
- (id)operator;
- (id)operatorBlock;
- (bool)repeats;
- (void)setFireDate:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerActive:(bool)arg1;
- (void)setTolerance:(double)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)timer;
- (bool)timerActive;
- (double)tolerance;
- (id)userInfo;
- (id)workQueue;

@end