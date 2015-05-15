/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVChatParticipantProxy : NSObject {
    IMAVChatProxy *_chat;
    NSDictionary *_info;
}

@property (nonatomic, readonly) bool _inviteDelivered;
@property (nonatomic, readonly, retain) IMAVChat *avChat;
@property (nonatomic, readonly, retain) NSString *name;

- (bool)_inviteDelivered;
- (id)avChat;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;
- (bool)isLocalParticipant;
- (id)name;

@end
