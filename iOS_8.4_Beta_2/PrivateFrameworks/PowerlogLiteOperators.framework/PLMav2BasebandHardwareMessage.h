/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav2BasebandHardwareMessage : PLBasebandHardwareMessage {
    struct _PLMav2BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; } *_mav2_rx;
    struct _PLMav2BasebandHWStatsTX { unsigned int x1[5][12]; } *_mav2_tx;
}

@property(assign,readwrite) struct _PLMav2BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }* rx;
@property(assign,readwrite) struct _PLMav2BasebandHWStatsTX { unsigned int x1[5][12]; }* tx;

- (id)indexToRAT:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (struct _PLMav2BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }*)rx;
- (void)setRx:(struct _PLMav2BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }*)arg1;
- (void)setTx:(struct _PLMav2BasebandHWStatsTX { unsigned int x1[5][12]; }*)arg1;
- (struct _PLMav2BasebandHWStatsTX { unsigned int x1[5][12]; }*)tx;

@end
