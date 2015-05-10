/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface CDXClientSession : NSObject {
    CDXClient *CDXClient_;
    unsigned short *ack_;
    <CDXClientSessionDelegate> *delegate_;
    id inboundHandler_;
    NSData *lastSent_;
    NSMutableIndexSet *participantsInFlight_;
    unsigned char pid_;
    long long retransmitAttempts_;
    NSObject<OS_dispatch_source> *retransmitTimer_;
    unsigned short seq_;
    NSData *sessionKeyPrepped_;
    NSData *sessionKey_;
    NSData *ticket_;
}

@property(assign,retain) CDXClient * CDXClient;
@property(assign,readwrite) <CDXClientSessionDelegate> * delegate;
@property(assign,copy) id inboundHandler;
@property(assign,copy) NSIndexSet * participantsInFlight;
@property(assign,copy) NSData * sessionKey;
@property(assign,copy) NSData * ticket;

- (id)CDXClient;
- (void)dealloc;
- (id)decrypt:(id)arg1 ticket:(id)arg2;
- (id)delegate;
- (id)encrypt:(id)arg1;
- (id)inboundHandler;
- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;
- (void)invalidate;
- (id)participantsInFlight;
- (void)recvRaw:(id)arg1 ticket:(id)arg2;
- (void)resetRetransmitTimer;
- (bool)retransmitEvent;
- (bool)sendData:(id)arg1;
- (bool)sendData:(id)arg1 toParticipants:(id)arg2;
- (bool)sendRaw:(id)arg1 toParticipants:(id)arg2;
- (id)sessionKey;
- (void)setDelegate:(id)arg1;
- (void)setInboundHandler:(id)arg1;
- (void)setTicket:(id)arg1;
- (void)stopRetransmitTimer;
- (id)ticket;

@end
