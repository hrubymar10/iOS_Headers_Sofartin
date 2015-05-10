/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAXPCMessage : AXHAMessage {
    AXHAXPCClient *_client;
    NSObject<OS_xpc_object> *_xpcMessage;
    NSObject<OS_xpc_object> *_xpcPayload;
}

@property(assign,readwrite) AXHAXPCClient * client;
@property(assign,retain) NSObject<OS_xpc_object> * xpcMessage;
@property(assign,retain) NSObject<OS_xpc_object> * xpcPayload;

+ (id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3;

- (id)client;
- (void)dealloc;
- (id)replyMessageWithPayload:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (id)xpcMessage;
- (id)xpcPayload;

@end