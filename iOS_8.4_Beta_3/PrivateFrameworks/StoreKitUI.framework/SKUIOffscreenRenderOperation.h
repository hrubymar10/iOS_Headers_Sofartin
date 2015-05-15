/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOffscreenRenderOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id _createLayerBlock;
    UIImage *_outputImage;
}

@property(assign,copy) id createLayerBlock;
@property(assign,readonly) UIImage * outputImage;

+ (void)preheatOffscreenRenderOperations;

- (void).cxx_destruct;
- (id)createLayerBlock;
- (id)init;
- (void)main;
- (id)outputImage;
- (void)setCreateLayerBlock:(id)arg1;

@end
