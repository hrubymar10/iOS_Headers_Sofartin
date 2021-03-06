/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    NSDictionary *_requestDictionary;
    AVWeakReference *_weakReference;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_performCancellationByClient;
- (id)_requestDictionary;
- (bool)_shouldInformDelegateOfFigCancellation;
- (id)_weakReference;
- (void)dealloc;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
