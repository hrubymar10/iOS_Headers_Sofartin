/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceHelperOutstandingRequest : NSObject {
    id _completionHandler;
    id _errorHandler;
    NSString *_messageIdentifier;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(assign,copy) id completionHandler;
@property(assign,copy) id errorHandler;
@property(assign,copy) NSString * messageIdentifier;
@property(assign,retain) NSObject<OS_dispatch_source> * timeoutTimer;

- (void).cxx_destruct;
- (id)completionHandler;
- (id)errorHandler;
- (id)messageIdentifier;
- (void)setCompletionHandler:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
