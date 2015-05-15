/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKConnection : NSObject

@property(assign,readwrite) id eventDelegate;
@property(assign,readwrite) struct opaqueRTCReporting { }* reportingAgent;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (bool)isRelayEnabled;

- (void)cancelConnectParticipant:(id)arg1;
- (void)connect;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (bool)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (bool)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (id)eventDelegate;
- (unsigned int)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (id)getLocalConnectionDataForLocalGaming;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (id)initWithParticipantID:(id)arg1;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;
- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void*)arg1;
- (void)preRelease;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)setEventDelegate:(id)arg1;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(bool)arg4;

@end
