/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_certificateURL;
    bool _iTunesStoreRequest;
    NSURL *_keyServerURL;
    AVAssetResourceLoadingRequest *_resourceLoadingRequest;
    id _responseBlock;
}

@property(getter=isITunesStoreRequest,assign,readwrite) bool ITunesStoreRequest;
@property(assign,retain) NSURL * certificateURL;
@property(assign,retain) NSURL * keyServerURL;
@property(assign,retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;
@property(assign,copy) id responseBlock;

- (void).cxx_destruct;
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 error:(id*)arg3;
- (void)_sendResponseBlockWithError:(id)arg1;
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;
- (id)certificateURL;
- (id)init;
- (bool)isITunesStoreRequest;
- (id)keyServerURL;
- (void)main;
- (id)resourceLoadingRequest;
- (id)responseBlock;
- (void)setCertificateURL:(id)arg1;
- (void)setITunesStoreRequest:(bool)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setResourceLoadingRequest:(id)arg1;
- (void)setResponseBlock:(id)arg1;
- (void)start;

@end
