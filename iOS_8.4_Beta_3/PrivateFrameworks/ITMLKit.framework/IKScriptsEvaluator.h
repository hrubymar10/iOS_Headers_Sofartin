/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKScriptsEvaluator : NSObject <ISURLOperationDelegate> {
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    bool _isJingleRequest;
    NSMutableArray *_records;
    NSArray *_scripts;
    bool _success;
}

@property (nonatomic) IKAppContext *appContext;
@property (nonatomic, retain) JSManagedValue *callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isJingleRequest;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic, retain) NSArray *scripts;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(bool)arg3;
- (id)appContext;
- (id)callback;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(bool)arg4;
- (bool)isJingleRequest;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (id)records;
- (id)scripts;
- (void)setAppContext:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)setIsJingleRequest:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)setScripts:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
