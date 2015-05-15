/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadOperation : BRCTransferOperation {
    id _perEntryCompletionBlock;
}

@property (copy) id perEntryCompletionBlock;

- (void).cxx_destruct;
- (void)__doneWithEntry:(id)arg1 error:(id)arg2;
- (void)__main:(id)arg1;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1;
- (id)perEntryCompletionBlock;
- (void)setPerEntryCompletionBlock:(id)arg1;

@end
