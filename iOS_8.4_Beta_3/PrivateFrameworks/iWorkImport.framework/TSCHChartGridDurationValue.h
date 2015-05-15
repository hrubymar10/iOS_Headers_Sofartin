/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue> {
    double mDuration;
}

@property(assign,readonly) int chartGridValueType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)durationValueWithDouble:(double)arg1;

- (int)chartGridValueType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithDouble:(double)arg1;
- (bool)isEqual:(id)arg1;

@end