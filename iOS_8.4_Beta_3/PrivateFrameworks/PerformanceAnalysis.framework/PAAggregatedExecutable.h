/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedExecutable : PAAggregatedTask {
    unsigned int _count;
    unsigned long long _firstTimestampIndex;
    unsigned long long _lastTimestampIndex;
    NSUUID *_mainBinaryUuid;
    NSString *_name;
    NSMutableSet *_rootFrames;
}

@property (readonly) PAExecutableAggregator *aggregator;
@property unsigned int count;
@property unsigned long long firstTimestampIndex;
@property unsigned long long lastTimestampIndex;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (retain) NSMutableSet *rootFrames;

- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)aggregator;
- (long long)compare:(id)arg1;
- (id)copyDescriptionForFrame:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned long long)firstTimestampIndex;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastTimestampIndex;
- (id)mainBinaryUuid;
- (id)name;
- (void)printBinaryImagesToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printStacksToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)rootFrames;
- (void)setCount:(unsigned int)arg1;
- (void)setFirstTimestampIndex:(unsigned long long)arg1;
- (void)setLastTimestampIndex:(unsigned long long)arg1;
- (void)setRootFrames:(id)arg1;

@end
