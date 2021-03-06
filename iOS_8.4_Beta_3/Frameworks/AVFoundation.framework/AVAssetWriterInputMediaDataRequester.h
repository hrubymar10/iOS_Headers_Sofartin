/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputMediaDataRequester : NSObject {
    <AVAssetWriterInputMediaDataRequesterDelegate> *_delegate;
    id _requestBlock;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property <AVAssetWriterInputMediaDataRequesterDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)init;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(id)arg2;
- (void)requestMediaDataIfNecessary;
- (id)requestQueue;
- (void)setDelegate:(id)arg1;

@end
