/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKFidgetResolver : NSObject {
    double _fidgetThreshold;
    unsigned long long _head;
    double *_times;
    id *_values;
}

@property(assign,readwrite) double fidgetThreshold;
@property(assign,readonly) id nonFidgetValue;

- (void)dealloc;
- (double)fidgetThreshold;
- (id)init;
- (id)nonFidgetValue;
- (void)p_advanceHead;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;
- (void)pushValue:(id)arg1;
- (void)pushValue:(id)arg1 withTime:(double)arg2;
- (void)setFidgetThreshold:(double)arg1;

@end