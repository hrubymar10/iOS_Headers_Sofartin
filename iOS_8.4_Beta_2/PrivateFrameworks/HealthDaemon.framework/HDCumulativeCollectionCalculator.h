/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCumulativeCollectionCalculator : NSObject {
    unsigned long long _bucketIndex;
    NSArray *_bucketPeriods;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _bySource;
    unsigned long long _currPeriod;
    long long _currentAligned;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _currentInterval;
    <HDHealthDaemon> *_daemon;
    unsigned long long _dataCount;
    bool _detailBySource;
    NSMutableArray *_futureBuckets;
    NSMutableArray *_futureCounts;
    NSMutableArray *_futureIntervals;
    bool _lastBucket;
    HDLastIntervalInfo *_lastIntervalInfo;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _lastIntervalSources;
    unsigned long long _mergeStrategy;
    NSArray *_orderedSourceIds;
}

@property(assign,readwrite) unsigned long long bucketIndex;
@property(assign,retain) NSArray * bucketPeriods;
@property(assign,readwrite) unsigned long long currPeriod;
@property(assign,readwrite) long long currentAligned;
@property(assign,retain) <HDHealthDaemon> * daemon;
@property(assign,readwrite) unsigned long long dataCount;
@property(assign,readwrite) bool detailBySource;
@property(assign,retain) NSMutableArray * futureBuckets;
@property(assign,retain) NSMutableArray * futureCounts;
@property(assign,retain) NSMutableArray * futureIntervals;
@property(assign,readwrite) bool lastBucket;
@property(assign,readonly) HDLastIntervalInfo * lastIntervalInfo;
@property(assign,readwrite) unsigned long long mergeStrategy;
@property(assign,retain) NSArray * orderedSourceIds;
@property(assign,readonly) NSDictionary * sumsBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_putInFutureBucketsValue:(double)arg1 timeAfterEnd:(double)arg2 valuePerSecond:(double)arg3 sampleEndTime:(double)arg4 sourceId:(unsigned long long)arg5;
- (double)addCurrentBucket;
- (void)addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (void)addSumsBySource:(id)arg1 lastInterval:(id)arg2 currentAligned:(long long)arg3 unit:(id)arg4;
- (void)advanceBucket;
- (double)advanceUntilInterval:(long long)arg1;
- (unsigned long long)bucketIndex;
- (id)bucketPeriods;
- (unsigned long long)currPeriod;
- (long long)currentAligned;
- (id)daemon;
- (unsigned long long)dataCount;
- (id)description;
- (bool)detailBySource;
- (id)futureBuckets;
- (id)futureCounts;
- (id)futureIntervals;
- (bool)hasData;
- (bool)hasFutureBuckets;
- (id)initWithDaemon:(id)arg1 orderedSourceIds:(id)arg2 bucketPeriods:(id)arg3 mergeStrategy:(unsigned long long)arg4;
- (bool)lastBucket;
- (id)lastIntervalInfo;
- (unsigned long long)mergeStrategy;
- (id)orderedSourceIds;
- (void)setBucketIndex:(unsigned long long)arg1;
- (void)setBucketPeriods:(id)arg1;
- (void)setCurrPeriod:(unsigned long long)arg1;
- (void)setCurrentAligned:(long long)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDataCount:(unsigned long long)arg1;
- (void)setDetailBySource:(bool)arg1;
- (void)setFutureBuckets:(id)arg1;
- (void)setFutureCounts:(id)arg1;
- (void)setFutureIntervals:(id)arg1;
- (void)setLastBucket:(bool)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setOrderedSourceIds:(id)arg1;
- (void)splitValue:(double)arg1 perSecond:(double)arg2 sourceId:(long long)arg3 sampleInfo:(struct { double x1; double x2; long long x3; long long x4; double x5; })arg4 sampleEndTime:(double)arg5;
- (id)sumsBySource;

@end
