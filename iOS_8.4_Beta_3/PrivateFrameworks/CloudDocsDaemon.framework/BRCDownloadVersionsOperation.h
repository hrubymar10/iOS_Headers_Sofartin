/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadVersionsOperation : BRCTransferOperation {
    id _perEntryCompletionBlock;
    NSMutableDictionary *_readers;
}

@property (copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (void)__doneWithEntry:(id)arg1 error:(id)arg2;
- (void)__main:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)addReaderID:(id)arg1 completionHandler:(id)arg2;
- (void)cancelReaderID:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 forNonLocalVersion:(bool)arg2;
- (id)perEntryCompletionBlock;
- (void)setPerEntryCompletionBlock:(id)arg1;

@end
