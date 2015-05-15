/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder {
    long long _anchor;
    double _bucketEndTime;
    double _bucketLength;
    double _bucketStartTime;
    HDCumulativeCollectionCalculator *_collectionCalculator;
    HDLastIntervalInfo *_lastIntervalInfo;
    HKStatistics *_lastStatistics;
    double _sum;
}

@property (nonatomic, retain) HDLastIntervalInfo *lastIntervalInfo;
@property (nonatomic, retain) HKStatistics *lastStatistics;

- (void).cxx_destruct;
- (id)_addToLastBucket:(id)arg1 error:(id*)arg2;
- (void)_addValue:(double)arg1 startDate:(double)arg2 endDate:(double)arg3 valuePerSecond:(double)arg4 seconds:(double)arg5 sourceId:(long long)arg6;
- (id)_initialStatisticsForCollection:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sampleCount:(long long)arg4 shouldStopProcessing:(id)arg5 error:(id*)arg6;
- (id)_initialStatisticsForStartDate:(id)arg1 endDate:(id)arg2 shouldStopProcessing:(id)arg3 error:(id*)arg4;
- (bool)_isTimeIntervalTooLong:(long long)arg1 sampleStartTime:(double)arg2 sampleEndTime:(double)arg3 seconds:(double)arg4;
- (id)_mergedSumsForStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 orderedSourceIds:(id)arg4 unit:(id)arg5 bySource:(id)arg6 dataCount:(unsigned long long*)arg7 shouldStopProcessing:(id)arg8 database:(id)arg9;
- (id)_newStatisticsWithTimePeriod:(id)arg1 samples:(id)arg2 error:(id*)arg3;
- (id)_orderedSourceIDsFromSources:(id)arg1 sourceManager:(id)arg2;
- (void)_setupStatistics:(id)arg1 withSum:(double)arg2 unit:(id)arg3 collectionCalculator:(id)arg4 sourceManager:(id)arg5;
- (id)_statisticsArrayWithStartDate:(id)arg1 endDate:(id)arg2 timePeriods:(id)arg3 shouldStopProcessing:(id)arg4 error:(id*)arg5;
- (id)_statisticsForStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 shouldStopProcessing:(id)arg4 error:(id*)arg5;
- (id)_statisticsWithTimePeriod:(id)arg1 samples:(id)arg2 lastPeriod:(bool)arg3 error:(id*)arg4;
- (id)_sumQuantityBySourceFromIdsAndValues:(id)arg1 unit:(id)arg2 sourceManager:(id)arg3;
- (id)lastIntervalInfo;
- (id)lastStatistics;
- (void)setLastIntervalInfo:(id)arg1;
- (void)setLastStatistics:(id)arg1;
- (id)updateStatistics:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;
- (id)updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 anchor:(id)arg3 error:(id*)arg4;

@end
