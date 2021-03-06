/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage {
    NSArray *_DCEqStatCnt;
    NSArray *_DCQsetEqStatCnt;
    NSArray *_DurInCarrierMode;
    NSArray *_RABModeCnt;
    NSArray *_RABTypeCnt;
    NSArray *_SCEqStatCnt;
    NSArray *_SCQsetEqStatCnt;
    NSArray *_TxPwrBucket;
    NSMutableDictionary *_commonInfo;
    NSString *_error;
    NSMutableArray *_groupArrEntries;
    NSString *_groupEntryKey;
    NSString *_groupID;
    unsigned char _inited;
    NSMutableDictionary *_kvPairs;
    NSNumber *_logDuration;
}

@property(assign,retain) NSArray * DCEqStatCnt;
@property(assign,retain) NSArray * DCQsetEqStatCnt;
@property(assign,retain) NSArray * DurInCarrierMode;
@property(assign,retain) NSArray * RABModeCnt;
@property(assign,retain) NSArray * RABTypeCnt;
@property(assign,retain) NSArray * SCEqStatCnt;
@property(assign,retain) NSArray * SCQsetEqStatCnt;
@property(assign,retain) NSArray * TxPwrBucket;
@property(assign,retain) NSMutableDictionary * commonInfo;
@property(assign,retain) NSString * error;
@property(assign,retain) NSMutableArray * groupArrEntries;
@property(assign,retain) NSString * groupEntryKey;
@property(assign,retain) NSString * groupID;
@property(assign,readwrite) unsigned char inited;
@property(assign,retain) NSMutableDictionary * kvPairs;
@property(assign,retain) NSNumber * logDuration;

+ (id)entryEventBackwardDefinitionBBMavHwRfWCDMA;

- (void).cxx_destruct;
- (id)DCEqStatCnt;
- (id)DCQsetEqStatCnt;
- (id)DurInCarrierMode;
- (id)RABModeCnt;
- (id)RABTypeCnt;
- (id)SCEqStatCnt;
- (id)SCQsetEqStatCnt;
- (id)TxPwrBucket;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (id)commonInfo;
- (id)error;
- (id)groupArrEntries;
- (id)groupEntryKey;
- (id)groupID;
- (id)init;
- (unsigned char)inited;
- (id)kvPairs;
- (id)logDuration;
- (id)logEventBackwardBBMavHwRfWCDMA;
- (void)populateEntry:(id)arg1;
- (void)refreshRequest;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setCommonInfo:(id)arg1;
- (void)setDCEqStatCnt:(id)arg1;
- (void)setDCQsetEqStatCnt:(id)arg1;
- (void)setDurInCarrierMode:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroupArrEntries:(id)arg1;
- (void)setGroupEntryKey:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setInited:(unsigned char)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setLogDuration:(id)arg1;
- (void)setRABModeCnt:(id)arg1;
- (void)setRABTypeCnt:(id)arg1;
- (void)setSCEqStatCnt:(id)arg1;
- (void)setSCQsetEqStatCnt:(id)arg1;
- (void)setTxPwrBucket:(id)arg1;

@end
