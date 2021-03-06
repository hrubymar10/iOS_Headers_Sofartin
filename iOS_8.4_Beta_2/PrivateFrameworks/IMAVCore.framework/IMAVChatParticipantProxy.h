/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVChatParticipantProxy : NSObject {
    IMAVChatProxy *_chat;
    NSDictionary *_info;
}

@property(assign,readonly) bool _inviteDelivered;
@property(assign,retain) IMAVChat * avChat;
@property(assign,retain) NSString * name;

- (bool)_inviteDelivered;
- (id)avChat;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;
- (bool)isLocalParticipant;
- (id)name;

@end
