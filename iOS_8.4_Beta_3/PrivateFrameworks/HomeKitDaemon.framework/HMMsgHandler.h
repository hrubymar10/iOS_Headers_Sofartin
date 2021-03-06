/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMMsgHandler : NSObject {
    id _messageHandler;
    NSObject<OS_dispatch_queue> *_receiverQueue;
    NSNumber *_token;
}

@property (nonatomic, copy) id messageHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *receiverQueue;
@property (nonatomic, retain) NSNumber *token;

+ (id)msgHandler:(id)arg1 token:(id)arg2 receiverQueue:(id)arg3;

- (void).cxx_destruct;
- (id)initWithMessageHandler:(id)arg1 token:(id)arg2 receiverQueue:(id)arg3;
- (id)messageHandler;
- (id)receiverQueue;
- (void)setMessageHandler:(id)arg1;
- (void)setReceiverQueue:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
