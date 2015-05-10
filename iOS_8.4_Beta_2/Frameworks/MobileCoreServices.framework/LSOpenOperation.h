/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSOpenOperation : NSOperation {
    NSString *_applicationIdentifier;
    id _delegate;
    NSString *_documentIdentifier;
    bool _executing;
    bool _finished;
    NSDictionary *_options;
    NSURL *_resourceURL;
    int _result;
    bool _sourceIsManaged;
    id _userInfoPlist;
}

- (void)completeOperation;
- (void)dealloc;
- (bool)didSucceed;
- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end
