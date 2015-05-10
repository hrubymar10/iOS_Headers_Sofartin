/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccelerometer : NSObject {
    struct { 
        unsigned int delegateDidAccelerate : 1; 
        unsigned int reserved : 31; 
    } _accelerometerFlags;
    <UIAccelerometerDelegate> *_delegate;
    CMMotionManager *_motionManager;
    double _updateInterval;
}

@property(assign,readwrite) <UIAccelerometerDelegate> * delegate;
@property(assign,readwrite) double updateInterval;

+ (id)sharedAccelerometer;

- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (void)_didSuspend:(id)arg1;
- (id)_motionManager;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;
- (void)_willResume:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;

@end
