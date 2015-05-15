/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppContext : NSObject <ISURLOperationDelegate> {
    <IKApplication> *_app;
    bool _canAccessPendingQueue;
    <IKAppContextDelegate> *_delegate;
    bool _isValid;
    JSContext *_jsContext;
    IKJSFoundation *_jsFoundation;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    unsigned long long _mode;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_postEvaluationBlocks;
    id _reloadData;
    bool _remoteInspectionEnabled;
    NSError *_responseError;
    NSString *_responseScript;
}

@property(assign,readonly) <IKApplication> * app;
@property(assign,readwrite) bool canAccessPendingQueue;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) <IKAppContextDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isValid;
@property(assign,retain) JSContext * jsContext;
@property(assign,retain) IKJSFoundation * jsFoundation;
@property(assign,readonly) unsigned long long mode;
@property(assign,retain) NSMutableArray * pendingQueue;
@property(assign,retain) NSMutableArray * postEvaluationBlocks;
@property(assign,retain) id reloadData;
@property(assign,readwrite) bool remoteInspectionEnabled;
@property(assign,retain) NSError * responseError;
@property(assign,copy) NSString * responseScript;
@property(assign,readonly) Class superclass;

+ (id)currentAppContext;

- (void).cxx_destruct;
- (void)_addStopRecordToPendingQueueWithReload:(bool)arg1;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(id)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1;
- (void)_jsThreadMain;
- (id)_preferredLaunchURL;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_startWithScript:(id)arg1;
- (void)_startWithURL:(id)arg1 urlTrusted:(bool)arg2;
- (void)_stopAndReload:(bool)arg1;
- (void)addPostEvaluateBlock:(id)arg1;
- (id)app;
- (bool)canAccessPendingQueue;
- (id)delegate;
- (void)evaluate:(id)arg1 completionBlock:(id)arg2;
- (void)evaluateDelegateBlockSync:(id)arg1;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)arg1;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (bool)isValid;
- (id)jsContext;
- (id)jsFoundation;
- (void)launchAppWithOptions:(id)arg1;
- (unsigned long long)mode;
- (void)openURLWithOptions:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)pendingQueue;
- (id)postEvaluationBlocks;
- (void)reload;
- (id)reloadData;
- (bool)remoteInspectionEnabled;
- (id)responseError;
- (id)responseScript;
- (void)resumeWithOptions:(id)arg1;
- (void)setCanAccessPendingQueue:(bool)arg1;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)setIsValid:(bool)arg1;
- (void)setJsContext:(id)arg1;
- (void)setJsFoundation:(id)arg1;
- (void)setPendingQueue:(id)arg1;
- (void)setPostEvaluationBlocks:(id)arg1;
- (void)setReloadData:(id)arg1;
- (void)setRemoteInspectionEnabled:(bool)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseScript:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspendWithOptions:(id)arg1;
- (bool)validateDOMDocument:(id)arg1 error:(id*)arg2;

@end
