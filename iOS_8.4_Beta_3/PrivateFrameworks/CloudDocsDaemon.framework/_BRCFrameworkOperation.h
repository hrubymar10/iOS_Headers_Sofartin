/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {
    NSObject<BROperationClient> *_remoteClientProxy;
    bool _startedFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<BROperationClient> *remoteClientProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_description;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (oneway void)invalidate;
- (id)remoteClientProxy;
- (void)setRemoteClientProxy:(id)arg1;
- (void)start;

@end
