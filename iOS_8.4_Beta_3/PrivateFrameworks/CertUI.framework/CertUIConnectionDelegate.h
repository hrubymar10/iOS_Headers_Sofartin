/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUIConnectionDelegate : NSObject {
    NSString *_connectionDisplayName;
    struct { 
        unsigned int canAuthenticateAgainstProtectionSpace : 1; 
        unsigned int didReceiveAuthenticationChallenge : 1; 
    } _delegateRespondsTo;
    id _forwardingDelegate;
    CertUITrustManager *_trustManager;
}

@property (nonatomic, copy) NSString *connectionDisplayName;
@property (nonatomic) id forwardingDelegate;

+ (id)defaultServiceForProtocol:(id)arg1;

- (void).cxx_destruct;
- (void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connectionDisplayName;
- (id)forwardingDelegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setConnectionDisplayName:(id)arg1;
- (void)setForwardingDelegate:(id)arg1;

@end
