/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying> {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
    NSData *_relayConnectionID;
    NSData *_relayTokenAllocRes;
    NSData *_relayTransactionIDAlloc;
    NSNumber *_relayType;
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSData *_selfRelayIP;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSNumber *_selfRelayPort;
}

@property(assign,copy) NSString * peerID;
@property(assign,copy) NSData * peerPushToken;
@property(assign,copy) NSData * peerRelayIP;
@property(assign,copy) NSNumber * peerRelayPort;
@property(assign,copy) NSData * relayConnectionID;
@property(assign,copy) NSData * relayTokenAllocRes;
@property(assign,copy) NSData * relayTransactionIDAlloc;
@property(assign,copy) NSNumber * relayType;
@property(assign,copy) NSData * selfPushToken;
@property(assign,copy) NSData * selfRelayBlob;
@property(assign,copy) NSData * selfRelayIP;
@property(assign,copy) NSData * selfRelayNATIP;
@property(assign,copy) NSNumber * selfRelayNATPort;
@property(assign,copy) NSNumber * selfRelayPort;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)peerID;
- (id)peerPushToken;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (id)relayConnectionID;
- (id)relayTokenAllocRes;
- (id)relayTransactionIDAlloc;
- (id)relayType;
- (id)requiredKeys;
- (id)selfPushToken;
- (id)selfRelayBlob;
- (id)selfRelayIP;
- (id)selfRelayNATIP;
- (id)selfRelayNATPort;
- (id)selfRelayPort;
- (void)setPeerID:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setRelayConnectionID:(id)arg1;
- (void)setRelayTokenAllocRes:(id)arg1;
- (void)setRelayTransactionIDAlloc:(id)arg1;
- (void)setRelayType:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (void)setSelfRelayBlob:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setSelfRelayNATIP:(id)arg1;
- (void)setSelfRelayNATPort:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;

@end