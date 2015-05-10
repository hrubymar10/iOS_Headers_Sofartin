/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHARemoteMessage : AXHAMessage {
    NSString *_UUID;
    id _sendCompletion;
}

@property(assign,retain) NSString * UUID;
@property(assign,copy) id sendCompletion;

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(id)arg2;

- (id)UUID;
- (void)dealloc;
- (id)initWithPayload:(id)arg1;
- (id)sendCompletion;
- (void)setSendCompletion:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)transportPayload;

@end