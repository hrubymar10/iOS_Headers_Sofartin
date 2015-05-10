/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartPointNumeric : NSObject <FUChartPoint> {
    NSDate *_xValue;
    NSNumber *_yValue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSDate * xValue;
@property(assign,retain) NSNumber * yValue;

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)xValue;
- (id)yValue;
- (float)yValueFloatRepresentation;
- (id)yValueForKey:(id)arg1;

@end
