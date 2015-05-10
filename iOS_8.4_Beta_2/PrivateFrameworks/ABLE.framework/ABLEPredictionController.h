/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEPredictionController : NSObject {
    bool _approximateMissingData;
    NSArray *_coefficients;
    ABLECoreDuetController *_coreDuetController;
    NSDictionary *_currentData;
    NSArray *_dayOffsets;
    double _rejectionThresholdForMissingData;
}

@property(assign,readwrite) bool approximateMissingData;
@property(assign,retain) NSArray * coefficients;
@property(assign,readonly) ABLECoreDuetController * coreDuetController;
@property(assign,retain) NSDictionary * currentData;
@property(assign,readonly) NSArray * dayOffsets;
@property(assign,readwrite) double rejectionThresholdForMissingData;

- (void).cxx_destruct;
- (bool)approximateMissingData;
- (id)coefficients;
- (id)coreDuetController;
- (id)currentData;
- (id)dayOffsets;
- (id)initWithCoreDuetController:(id)arg1;
- (id)predictForDay:(id)arg1;
- (id)predictForDay:(id)arg1 usingDayOffsets:(id)arg2 andCoefficients:(id)arg3;
- (double)rejectionThresholdForMissingData;
- (void)setApproximateMissingData:(bool)arg1;
- (void)setCoefficients:(id)arg1;
- (void)setCurrentData:(id)arg1;
- (void)setRejectionThresholdForMissingData:(double)arg1;

@end