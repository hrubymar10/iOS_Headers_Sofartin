/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface LTERTCPReceiverReport : LTERTCPPacket {
    unsigned int _cumulativePacketsLost;
    unsigned int _delaySinceLastSR;
    unsigned int _extendedHighestSequenceNumber;
    unsigned char _fractionLost;
    unsigned int _interarrivalJitter;
    unsigned int _lastSRTimestamp;
    unsigned int _reportedSourceSSRC;
}

@property(assign,readwrite) unsigned int cumulativePacketsLost;
@property(assign,readwrite) unsigned int delaySinceLastSR;
@property(assign,readwrite) unsigned int extendedHighestSequenceNumber;
@property(assign,readwrite) unsigned char fractionLost;
@property(assign,readwrite) unsigned int interarrivalJitter;
@property(assign,readwrite) unsigned int lastSRTimestamp;
@property(assign,readwrite) unsigned int reportedSourceSSRC;

- (unsigned int)cumulativePacketsLost;
- (unsigned int)delaySinceLastSR;
- (id)description;
- (unsigned int)extendedHighestSequenceNumber;
- (unsigned char)fractionLost;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCPRR { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCPRR { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagAPP_RTCP { unsigned int x_5_2_1; BOOL x_5_2_2[4]; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct tagFIR_RTCP { unsigned int x_6_2_1; unsigned short x_6_2_2[10]; } x_2_1_6; struct tagNACK_RTCP { unsigned int x_7_2_1; unsigned short x_7_2_2; unsigned short x_7_2_3; } x_2_1_7; struct tagPLI_RTCP { struct tagRTCP_FBCOMMON { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_8_2_1; } x_2_1_8; struct tagSLI_RTCP { struct tagRTCP_FBCOMMON { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_9_2_1; unsigned int x_9_2_2; } x_2_1_9; struct tagGenNACK_RTCP { struct tagRTCP_FBCOMMON { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_10_2_1; unsigned short x_10_2_2; unsigned short x_10_2_3; } x_2_1_10; } x2; }*)arg1;
- (unsigned int)interarrivalJitter;
- (unsigned int)lastSRTimestamp;
- (unsigned int)reportedSourceSSRC;
- (void)setCumulativePacketsLost:(unsigned int)arg1;
- (void)setDelaySinceLastSR:(unsigned int)arg1;
- (void)setExtendedHighestSequenceNumber:(unsigned int)arg1;
- (void)setFractionLost:(unsigned char)arg1;
- (void)setInterarrivalJitter:(unsigned int)arg1;
- (void)setLastSRTimestamp:(unsigned int)arg1;
- (void)setReportedSourceSSRC:(unsigned int)arg1;

@end
