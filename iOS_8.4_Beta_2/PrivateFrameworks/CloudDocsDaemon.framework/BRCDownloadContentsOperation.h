/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadContentsOperation : BRCTransferOperation {
    id _perEntryCompletionBlock;
}

@property(assign,copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (void)__doneWithEntry:(id)arg1 error:(id)arg2;
- (void)__main:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)initWithSyncContext:(id)arg1;
- (id)perEntryCompletionBlock;
- (void)setPerEntryCompletionBlock:(id)arg1;

@end