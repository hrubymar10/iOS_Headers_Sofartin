/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface AWDAdaptor : NSObject {
    NSMutableArray *frameErasureRateArray;
    NSMutableArray *jitterBufferResidencyTimeArray;
    NSMutableArray *jitterBufferUnderflowRateArray;
    NSMutableArray *rtpPacketLossRateArray;
}

- (void)addSamples:(id)arg1;
- (double)compute95thPercentile:(id)arg1;
- (double)computeMean:(id)arg1;
- (double)computeMedian:(id)arg1;
- (void)dealloc;
- (bool)generateAndSendCallEndReport:(id)arg1;
- (unsigned int*)generateHistogramForValues:(id)arg1 withBinBoundaries:(id)arg2;
- (id)init;
- (void)sendMessageWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;

@end