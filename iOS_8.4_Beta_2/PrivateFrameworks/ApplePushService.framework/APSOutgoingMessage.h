/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSOutgoingMessage : APSMessage

@property(getter=isCritical,assign,readwrite) bool critical;
@property(assign,readwrite) unsigned long long payloadFormat;
@property(assign,readwrite) unsigned long long payloadLength;
@property(assign,readwrite) unsigned long long timeout;

- (unsigned long long)_effectiveSendTimeout;
- (id)eagernessTimeoutTime;
- (bool)hasTimedOut;
- (bool)isCritical;
- (bool)isEager;
- (unsigned long long)messageID;
- (unsigned long long)payloadFormat;
- (unsigned long long)payloadLength;
- (long long)priority;
- (long long)sendInterface;
- (id)sendTimeoutTime;
- (id)senderTokenName;
- (void)setCancelled:(bool)arg1;
- (void)setCritical:(bool)arg1;
- (void)setMessageID:(unsigned long long)arg1;
- (void)setPayloadFormat:(unsigned long long)arg1;
- (void)setPayloadLength:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSendInterface:(long long)arg1;
- (void)setSenderTokenName:(id)arg1;
- (void)setSent:(bool)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (unsigned long long)timeout;
- (id)timestamp;
- (bool)wasCancelled;
- (bool)wasSent;

@end
