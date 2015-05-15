/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface CollectionCellAnalogClockView : AnalogClockView

+ (bool)doesFaceHaveShadow;
+ (double)faceRadius;
+ (struct CGPoint { double x1; double x2; })handRotationalCenterForHand:(int)arg1;
+ (id)makeClockFaceForDaytime:(bool)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(bool)arg2;
+ (id)makeOverSecondHandDotImage;
+ (double)numeralInset;
+ (id)overHourHandDotImageForDaytime:(bool)arg1;
+ (id)resourcePath;
+ (bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(bool)arg2;
+ (int)style;

- (double)coarseUpdateInterval;
- (double)updateInterval;

@end
