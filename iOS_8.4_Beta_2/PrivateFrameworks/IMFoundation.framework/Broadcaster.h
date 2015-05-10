/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface Broadcaster : NSProxy {
    int _curXPCMessagePriority;
    IMMessageContext *_messageContext;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    NSArray *_targets;
}

@property(assign,readwrite) int curXPCMessagePriority;

- (int)curXPCMessagePriority;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendXPCObject:(id)arg1;
- (void)setCurXPCMessagePriority:(int)arg1;

@end
