/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareSaveOperation : BROperation {
    CKShare *_share;
    id _shareSaveCompletionBlock;
}

@property(assign,retain) CKShare * share;
@property(assign,copy) id shareSaveCompletionBlock;

- (void)dealloc;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setShareSaveCompletionBlock:(id)arg1;
- (id)share;
- (id)shareSaveCompletionBlock;

@end
