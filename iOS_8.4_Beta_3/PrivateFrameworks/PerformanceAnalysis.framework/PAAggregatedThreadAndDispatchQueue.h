/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack> {
    PAAggregatedProcessInstance *_aggregatedTask;
    NSMutableArray *_contiguousThreadArrays;
    unsigned long long _cpuTimeNsCached;
    unsigned long long _dispatchQueueId;
    int _maxPriority;
    int _minPriority;
    unsigned long long _threadId;
}

@property (readonly) PAAggregatedProcessInstance *aggregatedTask;
@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) NSMutableArray *contiguousThreadArrays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long dispatchQueueId;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) unsigned long long hash;
@property (readonly) bool isIdleWorkQueueThread;
@property (readonly) bool isMainThread;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) unsigned long long lastTimestampIndex;
@property int maxPriority;
@property int minPriority;
@property (readonly) Class superclass;
@property unsigned long long threadId;

- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)aggregatedTask;
- (id)aggregator;
- (long long)compare:(id)arg1;
- (id)contiguousThreadArrays;
- (id)copyDescriptionForSampleFrame:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1;
- (int)count;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)firstTimestampIndex;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIdleWorkQueueThread;
- (bool)isMainThread;
- (bool)isProcessorIdleThread;
- (bool)isSingleStack;
- (unsigned long long)lastTimestampIndex;
- (int)maxPriority;
- (int)minPriority;
- (unsigned long long)numMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printHeavyStacksToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 onlyPrintHeaviest:(bool)arg2;
- (void)printStackToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)sampleStore;
- (void)setDispatchQueueId:(unsigned long long)arg1;
- (void)setMaxPriority:(int)arg1;
- (void)setMinPriority:(int)arg1;
- (void)setThreadId:(unsigned long long)arg1;
- (unsigned long long)threadId;

@end
