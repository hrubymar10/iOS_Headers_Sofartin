/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    id __afterDidReportProgressOnQueue;
    unsigned long long __transientWriteProgress;
    bool _canWrite;
    bool _didIssueNeedFinish;
    __NSCFLocalDownloadFile *_downloadFile;
    id _fileCompletion;
    long long _initialResumeSize;
    unsigned long long _ioSuspend;
    bool _needFinish;
    NSDictionary *_originalResumeInfo;
    id _resumeCallback;
    int _seqNo;
    bool _suppressProgress;
    unsigned long long _totalWrote;
    NSObject<OS_dispatch_data> *_writeBuffer;
}

@property(assign,copy) id _afterDidReportProgressOnQueue;
@property(assign,readwrite) unsigned long long _transientWriteProgress;
@property(assign,readwrite) bool canWrite;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didIssueNeedFinish;
@property(assign,retain) __NSCFLocalDownloadFile * downloadFile;
@property(assign,copy) id fileCompletion;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long initialResumeSize;
@property(assign,readwrite) unsigned long long ioSuspend;
@property(assign,readwrite) bool needFinish;
@property(assign,retain) NSDictionary * originalResumeInfo;
@property(assign,copy) id resumeCallback;
@property(assign,readwrite) int seqNo;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool suppressProgress;
@property(assign,readwrite) unsigned long long totalWrote;
@property(assign,readwrite) NSObject<OS_dispatch_data> * writeBuffer;

- (id)_afterDidReportProgressOnQueue;
- (void)_onqueue_cancelByProducingResumeData:(id)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_private_errorCompletion;
- (void)_private_fileCompletion;
- (void)_private_posixError:(int)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (unsigned long long)_transientWriteProgress;
- (bool)canWrite;
- (void)cancelByProducingResumeData:(id)arg1;
- (void)checkWrite;
- (id)createResumeInformation:(id)arg1;
- (void)dealloc;
- (bool)didIssueNeedFinish;
- (id)downloadFile;
- (id)fileCompletion;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithTask:(id)arg1;
- (long long)initialResumeSize;
- (unsigned long long)ioSuspend;
- (bool)isKindOfClass:(Class)arg1;
- (bool)needFinish;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (id)originalResumeInfo;
- (void)reportProgress:(unsigned long long)arg1;
- (id)resumeCallback;
- (int)seqNo;
- (void)setCanWrite:(bool)arg1;
- (void)setDidIssueNeedFinish:(bool)arg1;
- (void)setDownloadFile:(id)arg1;
- (void)setFileCompletion:(id)arg1;
- (void)setInitialResumeSize:(long long)arg1;
- (void)setIoSuspend:(unsigned long long)arg1;
- (void)setNeedFinish:(bool)arg1;
- (void)setOriginalResumeInfo:(id)arg1;
- (void)setResumeCallback:(id)arg1;
- (void)setSeqNo:(int)arg1;
- (void)setSuppressProgress:(bool)arg1;
- (void)setTotalWrote:(unsigned long long)arg1;
- (void)setWriteBuffer:(id)arg1;
- (void)set_afterDidReportProgressOnQueue:(id)arg1;
- (void)set_transientWriteProgress:(unsigned long long)arg1;
- (bool)setupForNewDownload:(id)arg1;
- (bool)suppressProgress;
- (unsigned long long)totalWrote;
- (void)writeAndResume;
- (id)writeBuffer;

@end
