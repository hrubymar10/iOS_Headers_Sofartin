/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessCPUStatistics : NSObject {
    BSMachSendRight *_taskNamePort;
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    } _times;
}

@property(assign,readonly) double totalElapsedIdleTime;
@property(assign,readonly) double totalElapsedSystemTime;
@property(assign,readonly) double totalElapsedTime;
@property(assign,readonly) double totalElapsedUserTime;

- (double)_elapsedCPUTime;
- (void)_getApplicationCPUTimesForUser:(double*)arg1 system:(double*)arg2 idle:(double*)arg3;
- (void)_hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3;
- (void)dealloc;
- (id)descriptionForCrashReport;
- (id)initWithTaskNamePort:(id)arg1;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedTime;
- (double)totalElapsedUserTime;
- (void)update;

@end
