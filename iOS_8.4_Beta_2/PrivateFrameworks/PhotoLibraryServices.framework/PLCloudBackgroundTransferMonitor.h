/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBackgroundTransferMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_pendingBGTransfers;
}

+ (id)identifierForResource:(id)arg1;
+ (id)sharedInstance;

- (void)abandonAllBackgroundTransfers;
- (void)abandonTransfersForItemIdentifier:(id)arg1;
- (void)completeBackgroundTransferForResource:(id)arg1 withError:(id)arg2;
- (void)completeBackgroundTransferWithIdentifier:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)onCompletedResource:(id)arg1 invokeBlock:(id)arg2;

@end
