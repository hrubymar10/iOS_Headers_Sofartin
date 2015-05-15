/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTFileCopier : NSObject {
    void *_BOMCopier;
    <CUTFileCopierDelegate> *_delegate;
    bool _didErrorOccur;
    id _identifier;
    bool _inProgress;
    NSURL *_inputURL;
    unsigned int _operation;
    NSURL *_outputURL;
    bool _shouldCancel;
}

@property(assign,readwrite) void* _BOMCopier;
@property(assign,readwrite) <CUTFileCopierDelegate> * delegate;
@property(assign,readonly) bool didErrorOccur;
@property(assign,readonly) id identifier;
@property(assign,readwrite) bool inProgress;
@property(assign,readonly) NSURL * inputURL;
@property(assign,readwrite) unsigned int operation;
@property(assign,readonly) NSURL * outputURL;
@property(assign,readonly) bool wasCancelled;

- (void*)_BOMCopier;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (bool)didErrorOccur;
- (id)identifier;
- (bool)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned int)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setOperation:(unsigned int)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)start;
- (bool)wasCancelled;

@end