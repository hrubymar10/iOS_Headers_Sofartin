/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLiveDataCollectorBuffer : NSObject {
    NSMutableArray *_buffer;
    double _bufferAggregationInterval;
    <HDSensorDatum> *_lastProcessedDatum;
    id _objectCreationBlock;
    id _sensorDatumComparisonBlock;
}

@property(assign,readwrite) double bufferAggregationInterval;
@property(assign,copy) id objectCreationBlock;
@property(assign,copy) id sensorDatumComparisonBlock;

- (void).cxx_destruct;
- (bool)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3;
- (long long)_bufferStateForSensorDatum:(id)arg1;
- (id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2;
- (id)_processBufferIfSensorDatumInvalid:(id)arg1;
- (void)_resetBuffer;
- (id)addSensorDatum:(id)arg1;
- (double)bufferAggregationInterval;
- (id)init;
- (id)objectCreationBlock;
- (id)sensorDatumComparisonBlock;
- (void)setBufferAggregationInterval:(double)arg1;
- (void)setObjectCreationBlock:(id)arg1;
- (void)setSensorDatumComparisonBlock:(id)arg1;

@end
