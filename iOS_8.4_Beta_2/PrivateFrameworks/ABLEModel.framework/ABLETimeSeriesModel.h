/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

@interface ABLETimeSeriesModel : NSObject {
    NSArray *_filter;
    double _period;
    ABLEVectorModel *_vectorModel;
}

@property(assign,readonly) NSArray * filter;
@property(assign,readonly) double period;
@property(assign,readonly) ABLEVectorModel * vectorModel;

+ (id)modelWithPeriod:(double)arg1 andFilter:(id)arg2;

- (void).cxx_destruct;
- (id)filter;
- (id)initWithPeriod:(double)arg1 andFilter:(id)arg2;
- (double)period;
- (id)predictAll:(id)arg1;
- (id)predictSingle:(id)arg1;
- (id)vectorModel;

@end