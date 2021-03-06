/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudProgressWeights : NSObject {
    float applyWeight;
    float finishWeight;
    float prepareWeight;
}

@property(assign,readwrite) float applyWeight;
@property(assign,readwrite) float finishWeight;
@property(assign,readwrite) float prepareWeight;

- (float)applyWeight;
- (double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2;
- (id)description;
- (float)finishWeight;
- (id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3;
- (float)prepareWeight;
- (void)setApplyWeight:(float)arg1;
- (void)setFinishWeight:(float)arg1;
- (void)setPrepareWeight:(float)arg1;

@end
