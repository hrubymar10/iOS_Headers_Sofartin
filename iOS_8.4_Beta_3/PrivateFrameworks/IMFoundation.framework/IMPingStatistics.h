/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPingStatistics : NSObject {
    double _averageRoundtripTime;
    double _maxRoundtripTime;
    double _medianRoundtripTime;
    double _minRoundtripTime;
    int _numPacketsSuccessfullySent;
    int _numPingsReceived;
    int _numPingsTransmitted;
    double _packetLossRate;
    double _standardDeviationRoundtripTime;
    double _sumRoundtripTimes;
}

@property (nonatomic, readonly) double averageRoundtripTime;
@property (nonatomic) double maxRoundtripTime;
@property (nonatomic) double medianRoundtripTime;
@property (nonatomic) double minRoundtripTime;
@property (nonatomic, readonly) int numPingsReceived;
@property (nonatomic, readonly) int numPingsTransmitted;
@property (nonatomic, readonly) double packetLossRate;
@property (nonatomic, readonly) int packetsSuccessfullySent;
@property (nonatomic) double standardDeviationRoundtripTime;

- (void)_addReceivedPacket:(double)arg1;
- (void)_addTransmittedPacket:(bool)arg1;
- (void)_setMaxRoundtripTime:(double)arg1;
- (void)_setMedianRoundtripTime:(double)arg1;
- (void)_setMinRoundtripTime:(double)arg1;
- (void)_setStandardDeviationRoundtripTime:(double)arg1;
- (double)averageRoundtripTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithMaxRTT:(double)arg1 medianRTT:(double)arg2 avgRTT:(double)arg3 minRTT:(double)arg4 transmitted:(int)arg5 successful:(int)arg6 received:(int)arg7;
- (double)maxRoundtripTime;
- (double)medianRoundtripTime;
- (double)minRoundtripTime;
- (int)numPingsReceived;
- (int)numPingsTransmitted;
- (double)packetLossRate;
- (int)packetsSuccessfullySent;
- (double)standardDeviationRoundtripTime;

@end
