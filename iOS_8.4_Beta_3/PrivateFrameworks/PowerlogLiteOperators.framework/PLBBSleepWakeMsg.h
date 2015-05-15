/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBSleepWakeMsg : PLBBMsgRoot {
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
    NSString *_swAtCmd;
    NSString *_swCTData;
    NSString *_swChan;
    NSString *_swClientId;
    NSString *_swCmd;
    NSString *_swCmdFullName;
    NSString *_swCmdName;
    NSDictionary *_swIpData;
    NSString *_swMsgId;
    NSString *_swMsgType;
    NSString *_swRadioClass;
    NSString *_swRawData;
    NSString *_swReason;
    NSNumber *_swSvcId;
}

@property(assign,retain) NSMutableDictionary * commonInfo;
@property(assign,retain) NSMutableDictionary * kvPairs;
@property(assign,retain) NSString * swAtCmd;
@property(assign,retain) NSString * swCTData;
@property(assign,retain) NSString * swChan;
@property(assign,retain) NSString * swClientId;
@property(assign,retain) NSString * swCmd;
@property(assign,retain) NSString * swCmdFullName;
@property(assign,retain) NSString * swCmdName;
@property(assign,retain) NSDictionary * swIpData;
@property(assign,retain) NSString * swMsgId;
@property(assign,retain) NSString * swMsgType;
@property(assign,retain) NSString * swRadioClass;
@property(assign,retain) NSString * swRawData;
@property(assign,retain) NSString * swReason;
@property(assign,retain) NSNumber * swSvcId;

+ (id)entryEventPointDefinitionSleepWakeActivity;

- (void).cxx_destruct;
- (void)appendToErrStr:(id)arg1;
- (id)commonInfo;
- (id)kvPairs;
- (void)logEventPointSleepWake;
- (void)processIPPacketWithEntry:(id)arg1;
- (void)refreshSleepWakeActivity;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setCommonInfo:(id)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setSwAtCmd:(id)arg1;
- (void)setSwCTData:(id)arg1;
- (void)setSwChan:(id)arg1;
- (void)setSwClientId:(id)arg1;
- (void)setSwCmd:(id)arg1;
- (void)setSwCmdFullName:(id)arg1;
- (void)setSwCmdName:(id)arg1;
- (void)setSwIpData:(id)arg1;
- (void)setSwMsgId:(id)arg1;
- (void)setSwMsgType:(id)arg1;
- (void)setSwRadioClass:(id)arg1;
- (void)setSwRawData:(id)arg1;
- (void)setSwReason:(id)arg1;
- (void)setSwSvcId:(id)arg1;
- (id)swAtCmd;
- (id)swCTData;
- (id)swChan;
- (id)swClientId;
- (id)swCmd;
- (id)swCmdFullName;
- (id)swCmdName;
- (id)swIpData;
- (id)swMsgId;
- (id)swMsgType;
- (id)swRadioClass;
- (id)swRawData;
- (id)swReason;
- (id)swSvcId;

@end
