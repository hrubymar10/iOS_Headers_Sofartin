/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> *_message;
}

+ (id)messageWithReply:(id)arg1;

- (void)dealloc;
- (id)initWithReply:(id)arg1;
- (id)message;
- (long long)messageKind;
- (void)sendReply:(id)arg1;

@end