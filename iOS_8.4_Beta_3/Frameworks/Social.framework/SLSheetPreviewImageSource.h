/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetPreviewImageSource : NSObject {
    AVAssetImageGenerator *_assetImageGenerator;
    ALAssetsLibrary *_assetsLibrary;
}

@property (readonly) ALAssetsLibrary *assetsLibrary;

- (void).cxx_destruct;
- (void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(id)arg2;
- (void)_generatePreviewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(id)arg3;
- (void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(id)arg2;
- (id)assetsLibrary;
- (void)cancelVideoPreviewGeneration;
- (void)previewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(id)arg3;

@end
