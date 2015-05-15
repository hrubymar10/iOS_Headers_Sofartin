/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAContiguousThreadArray : NSObject {
    unsigned long long _firstTimestampIndex;
    unsigned long long _previousCpuTimeNs;
    NSMutableArray *_threads;
}

@property(assign,readonly) unsigned long long dispatchQueueId;
@property(assign,readonly) unsigned long long threadId;

- (void)addSampleThread:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)firstTimestampIndex;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2;
- (bool)isProcessorIdleThread;
- (bool)isSingleStackWithLeafFrame:(id)arg1;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (bool)threadExistedPreviously;
- (unsigned long long)threadId;

@end