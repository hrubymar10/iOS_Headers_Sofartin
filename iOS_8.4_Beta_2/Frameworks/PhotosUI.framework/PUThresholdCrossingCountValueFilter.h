/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUThresholdCrossingCountValueFilter : PUValueFilter {
    long long _crossingCount;
    long long _maximumCrossingCount;
    double _thresholdValue;
}

@property(assign,readwrite) long long maximumCrossingCount;
@property(assign,readwrite) double thresholdValue;

- (long long)maximumCrossingCount;
- (void)setMaximumCrossingCount:(long long)arg1;
- (void)setThresholdValue:(double)arg1;
- (double)thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end