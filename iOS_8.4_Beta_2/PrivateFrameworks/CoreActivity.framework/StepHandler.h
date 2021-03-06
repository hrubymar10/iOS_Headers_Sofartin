/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreActivity.framework/CoreActivity
 */

@interface StepHandler : NSObject {
    <CoreActivityPedometerDelegate> *_delegate;
}

@property(assign,readwrite) <CoreActivityPedometerDelegate> * delegate;

+ (id)sharedStepActivityHandler;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleAccelData:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)handleStepCallBack:(int)arg1 strideLen:(double)arg2 stepType:(int)arg3;
- (void)resetState;
- (void)setDelegate:(id)arg1;
- (void)setupStepClient;

@end
