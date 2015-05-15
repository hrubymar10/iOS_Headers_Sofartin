/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEPredictabilityController : NSObject {
    bool _approximateMissingData;
    ABLECoreDuetController *_coreDuetController;
    NSDictionary *_currentData;
    NSArray *_dayOffsets;
    double _rejectionThresholdForMissingData;
}

@property(assign,readwrite) bool approximateMissingData;
@property(assign,readonly) ABLECoreDuetController * coreDuetController;
@property(assign,retain) NSDictionary * currentData;
@property(assign,retain) NSArray * dayOffsets;
@property(assign,readwrite) double rejectionThresholdForMissingData;

- (void).cxx_destruct;
- (bool)approximateMissingData;
- (id)calculateCorrelationForDay:(id)arg1 andDayOffsets:(id)arg2;
- (id)calculateCorrelationForDefaultDayOffsets;
- (double)calculateCorrelationForOneDay;
- (id)calculateCorrelationForYesterdayAndDayOffsets:(id)arg1;
- (id)coreDuetController;
- (id)currentData;
- (id)dayOffsets;
- (id)initWithCoreDuetController:(id)arg1;
- (double)rejectionThresholdForMissingData;
- (void)setApproximateMissingData:(bool)arg1;
- (void)setCurrentData:(id)arg1;
- (void)setDayOffsets:(id)arg1;
- (void)setRejectionThresholdForMissingData:(double)arg1;

@end
