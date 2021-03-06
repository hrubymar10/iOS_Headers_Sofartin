/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSession : NSObject {
    CKDClientContext *_context;
    bool _isSetup;
    NSError *_lastSetupError;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    } _mescalHWInfo;
    struct FPSAPContextOpaque_ { } *_mescalSession;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSOperationQueue *_renewQueue;
    NSObject<OS_dispatch_group> *_renewalGroup;
    bool _renewing;
}

@property(assign,readonly) CKDClientContext * context;
@property(assign,readwrite) bool isSetup;
@property(assign,retain) NSError * lastSetupError;
@property(assign,readwrite) struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; } mescalHWInfo;
@property(assign,readwrite) struct FPSAPContextOpaque_ { }* mescalSession;
@property(assign,retain) NSObject<OS_dispatch_queue> * opQueue;
@property(assign,retain) NSOperationQueue * renewQueue;
@property(assign,retain) NSObject<OS_dispatch_group> * renewalGroup;
@property(assign,readwrite) bool renewing;

- (void).cxx_destruct;
- (void)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; }*)arg1 withCompletionHandler:(id)arg2;
- (void)_reallyExchangeData:(id)arg1 serverVersion:(int)arg2 withCompletionHandler:(id)arg3;
- (void)_reallyProcessSignedData:(id)arg1 signature:(id)arg2 withCompletionHandler:(id)arg3;
- (void)_reallySignData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_setUpWithCompletionHandler:(id)arg1;
- (void)_teardown;
- (void)_teardownLocked;
- (id)context;
- (void)dealloc;
- (void)exchangeData:(id)arg1 serverVersion:(int)arg2 withCompletionHandler:(id)arg3;
- (id)initWithContext:(id)arg1;
- (bool)isSetup;
- (id)lastSetupError;
- (struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })mescalHWInfo;
- (struct FPSAPContextOpaque_ { }*)mescalSession;
- (id)opQueue;
- (void)processSignedData:(id)arg1 signature:(id)arg2 forRequest:(id)arg3 withCompletionHandler:(id)arg4;
- (void)renewMescalSessionForRequest:(id)arg1 withCallback:(id)arg2;
- (id)renewQueue;
- (id)renewalGroup;
- (bool)renewing;
- (void)resetMescalSession;
- (void)setIsSetup:(bool)arg1;
- (void)setLastSetupError:(id)arg1;
- (void)setMescalHWInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })arg1;
- (void)setMescalSession:(struct FPSAPContextOpaque_ { }*)arg1;
- (void)setOpQueue:(id)arg1;
- (void)setRenewQueue:(id)arg1;
- (void)setRenewalGroup:(id)arg1;
- (void)setRenewing:(bool)arg1;
- (void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(id)arg3;

@end
