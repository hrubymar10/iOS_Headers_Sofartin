/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClientConnectionProxy : NSObject <HMMessageTransport> {
    HMMessageDispatcher *_recvDispatcher;
    id _refreshHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMMessageDispatcher *recvDispatcher;
@property (nonatomic, copy) id refreshHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (id)initWithMessageDispatcher:(id)arg1 refreshHandler:(id)arg2;
- (id)recvDispatcher;
- (id)refreshHandler;
- (void)setRecvDispatcher:(id)arg1;
- (void)setRefreshHandler:(id)arg1;

@end
