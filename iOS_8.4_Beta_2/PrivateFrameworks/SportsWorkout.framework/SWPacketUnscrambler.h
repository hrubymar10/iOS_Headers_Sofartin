/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWPacketUnscrambler : NSObject {
    struct IapSimpleRemoteButtonState { 
        unsigned int buttonStatus; 
    } m_ButtonState;
}

- (id).cxx_construct;
- (void)_descramblePayload:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned int)_getBlanDstAddr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstAddrLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstFlags:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned int)_getBlanDstType:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanDstTypeLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanPayloadLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (char *)_getBlanPayloadPtr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned int)_getBlanSrcAddr:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcAddrLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcFlags:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned int)_getBlanSrcType:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanSrcTypeLen:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (unsigned char)_getBlanTimingByte:(struct BlanSportsDataFrame { unsigned char x1[28]; }*)arg1;
- (id)_handleButtonsPressedForCommandId:(int)arg1 newButtonStatus:(unsigned int)arg2;
- (id)buttonStatesForDataFrame:(id)arg1;
- (id)dataFrameForBlanPayload:(id)arg1 radioId:(unsigned int*)arg2;
- (id)payloadForDataFrame:(id)arg1;
- (id)sourceTypeForBlanPayload:(id)arg1;
- (id)unscrambleRunSensorDataFrame:(id)arg1;

@end
