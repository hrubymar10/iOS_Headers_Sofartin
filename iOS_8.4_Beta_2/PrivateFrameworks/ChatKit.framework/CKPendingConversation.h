/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPendingConversation : CKConversation {
    IMService *_composeSendingService;
    bool _noAvailableServices;
    IMService *_previousSendingService;
}

@property(assign,readwrite) IMService * composeSendingService;
@property(assign,readwrite) bool noAvailableServices;
@property(assign,readwrite) IMService * previousSendingService;

- (id)composeSendingService;
- (bool)noAvailableServices;
- (id)previousSendingService;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(id)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(id)arg2;
- (id)sendingService;
- (void)setComposeSendingService:(id)arg1;
- (void)setNoAvailableServices:(bool)arg1;
- (void)setPreviousSendingService:(id)arg1;

@end
