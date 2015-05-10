/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {
    int _maxCount;
    double _maxDuration;
    BWRingBuffer *_ringBuffer;
}

- (void)addMotionDataToRingBuffer:(struct { bool x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; }*)arg1 withSampleCount:(int)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (double)duration;
- (id)initWithMaxDuration:(double)arg1;
- (struct { bool x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; }*)lastSample;

@end
