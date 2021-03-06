/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <ATAssetLinkDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    <ATMessageLink> *_messageLink;
    bool _open;
    NSMutableArray *_outstandingAssets;
    int _pendingWriteAmount;
    NSObject<OS_dispatch_semaphore> *_pendingWriteSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_readers;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <ATAssetLinkDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isOpen,assign,readonly) bool open;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_requestAsset:(id)arg1;
- (id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)initWithMessageLink:(id)arg1;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
