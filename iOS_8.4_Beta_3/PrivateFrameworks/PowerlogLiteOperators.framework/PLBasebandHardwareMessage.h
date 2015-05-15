/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandHardwareMessage : PLBasebandMessage {
    struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; } *_adm;
    struct _PLBasebandHWStatsADSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; } *_adsp;
    struct _PLBasebandHWStatsARMPerf { unsigned int x1; unsigned int x2; unsigned int x3[8]; } *_armPerf;
    unsigned int _duration;
    struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; } *_gps;
    struct _PLBasebandHWStatsHeader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_header;
    struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; } *_mdm;
    struct _PLBasebandHWStatsMDSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; } *_mdsp;
    struct _PLBasebandHWStatsRXRSSI { unsigned int x1[4]; unsigned int x2[13]; unsigned int x3[13]; } *_rx;
    struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; } *_spi;
    struct _PLBasebandHWStatsSystem { unsigned int x1; unsigned int x2; unsigned int x3[3]; } *_system;
    struct _PLBasebandHWStatsTXPower { unsigned int x1[12]; } *_tx;
    struct _PLBasebandHWStatsUART { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; } *_uart;
    struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; } *_usb;
}

@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*adm;
@property (nonatomic) struct _PLBasebandHWStatsADSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*adsp;
@property (nonatomic) struct _PLBasebandHWStatsARMPerf { unsigned int x1; unsigned int x2; unsigned int x3[8]; }*armPerf;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*gps;
@property (nonatomic) struct _PLBasebandHWStatsHeader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*header;
@property (nonatomic, readonly) unsigned int level;
@property unsigned int logDuration;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*mdm;
@property (nonatomic) struct _PLBasebandHWStatsMDSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*mdsp;
@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic) struct _PLBasebandHWStatsRXRSSI { unsigned int x1[4]; unsigned int x2[13]; unsigned int x3[13]; }*rx;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*spi;
@property (nonatomic) struct _PLBasebandHWStatsSystem { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*system;
@property (nonatomic) struct _PLBasebandHWStatsTXPower { unsigned int x1[12]; }*tx;
@property (nonatomic) struct _PLBasebandHWStatsUART { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; }*uart;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*usb;

- (struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)adm;
- (struct _PLBasebandHWStatsADSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*)adsp;
- (struct _PLBasebandHWStatsARMPerf { unsigned int x1; unsigned int x2; unsigned int x3[8]; }*)armPerf;
- (id)convertToObjectArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2;
- (id)convertToObjectArrayPercentage:(unsigned int*)arg1 ofSize:(unsigned int)arg2;
- (id)convertUint16ArrayToNSArray:(unsigned short*)arg1 ofSize:(unsigned int)arg2;
- (id)convertUint32ArrayToNSArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2;
- (id)convertUint32ArrayToNSArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2 andFill:(unsigned int)arg3;
- (id)convertUint8ArrayToNSArray:(char *)arg1 ofSize:(unsigned int)arg2;
- (void)formatArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2 inString:(id)arg3;
- (void)formatArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2 inString:(id)arg3 inReverse:(bool)arg4;
- (void)formatArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2 withMultiplier:(float)arg3 inString:(id)arg4;
- (void)formatArray:(unsigned int*)arg1 ofSize:(unsigned int)arg2 withMultiplier:(float)arg3 inString:(id)arg4 inReverse:(bool)arg5;
- (void)formatOnOffStates:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1 inString:(id)arg2;
- (struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)gps;
- (struct _PLBasebandHWStatsHeader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)header;
- (id)initWithData:(id)arg1;
- (unsigned int)level;
- (unsigned int)logDuration;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logProcessorWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (void)logRawWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)mdm;
- (struct _PLBasebandHWStatsMDSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*)mdsp;
- (void)parseData:(id)arg1;
- (unsigned int)revision;
- (struct _PLBasebandHWStatsRXRSSI { unsigned int x1[4]; unsigned int x2[13]; unsigned int x3[13]; }*)rx;
- (void)setAdm:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1;
- (void)setAdsp:(struct _PLBasebandHWStatsADSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*)arg1;
- (void)setArmPerf:(struct _PLBasebandHWStatsARMPerf { unsigned int x1; unsigned int x2; unsigned int x3[8]; }*)arg1;
- (void)setGps:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1;
- (void)setHeader:(struct _PLBasebandHWStatsHeader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)setLogDuration:(unsigned int)arg1;
- (void)setMdm:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1;
- (void)setMdsp:(struct _PLBasebandHWStatsMDSP { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; unsigned int x3; unsigned int x4; unsigned int x5[5]; }*)arg1;
- (void)setRx:(struct _PLBasebandHWStatsRXRSSI { unsigned int x1[4]; unsigned int x2[13]; unsigned int x3[13]; }*)arg1;
- (void)setSpi:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1;
- (void)setSystem:(struct _PLBasebandHWStatsSystem { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*)arg1;
- (void)setTx:(struct _PLBasebandHWStatsTXPower { unsigned int x1[12]; }*)arg1;
- (void)setUart:(struct _PLBasebandHWStatsUART { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; }*)arg1;
- (void)setUsb:(struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)arg1;
- (struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)spi;
- (unsigned int)sumHardwareStat:(unsigned int*)arg1 ofSize:(unsigned int)arg2;
- (struct _PLBasebandHWStatsSystem { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*)system;
- (struct _PLBasebandHWStatsTXPower { unsigned int x1[12]; }*)tx;
- (struct _PLBasebandHWStatsUART { struct _PLBasebandHWOnOffComponentStats { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3[2]; } x1; struct _PLBasebandHWOnOffComponentStats { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3[2]; } x2; }*)uart;
- (struct _PLBasebandHWOnOffComponentStats { unsigned int x1; unsigned int x2; unsigned int x3[2]; }*)usb;

@end
