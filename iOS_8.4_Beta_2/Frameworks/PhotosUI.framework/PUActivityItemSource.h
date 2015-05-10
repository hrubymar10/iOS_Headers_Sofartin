/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource> {
    NSURL *__assetURL;
    NSURL *__assetsLibraryURL;
    int __imageManagerRequestID;
    NSDictionary *__pasteboardRepresentation;
    long long __remakerWasCancelled;
    NSURL *__videoRemakerURL;
    PHAsset *_asset;
    id _completionHandler;
    _PUActivityItemSourceOperation *_currentOperation;
    bool _hasRecognizedVideoAdjustments;
    id _postCompletionHandler;
    id _progressHandler;
    PLVideoRemaker *_remaker;
    id _remakerCompletionHandler;
    id _strongSelf;
}

@property(setter=_setAssetURL:,assign,retain) NSURL * _assetURL;
@property(setter=_setAssetsLibraryURL:,assign,retain) NSURL * _assetsLibraryURL;
@property(setter=_setImageManagerRequestID:,assign,readwrite) int _imageManagerRequestID;
@property(setter=_setPasteboardRepresentation:,assign,retain) NSDictionary * _pasteboardRepresentation;
@property(setter=_setRemakerWasCancelled:,assign,readwrite) long long _remakerWasCancelled;
@property(setter=_setVideoRemakerURL:,assign,retain) NSURL * _videoRemakerURL;
@property(assign,readonly) PHAsset * asset;
@property(assign,copy) id completionHandler;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id postCompletionHandler;
@property(assign,copy) id progressHandler;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetURL;
- (id)_assetsLibraryURL;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)_cleanupRemaker;
- (int)_imageManagerRequestID;
- (bool)_needsAssetsLibraryURLForActivityType:(id)arg1;
- (bool)_needsVideoRemakerForActivityType:(id)arg1 adjustmentData:(id)arg2 needsAssetsLibraryURL:(bool)arg3;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_pasteboardRepresentation;
- (long long)_remakerWasCancelled;
- (void)_removeTempFile;
- (void)_setAssetURL:(id)arg1;
- (void)_setAssetsLibraryURL:(id)arg1;
- (void)_setImageManagerRequestID:(int)arg1;
- (void)_setPasteboardRepresentation:(id)arg1;
- (void)_setRemakerWasCancelled:(long long)arg1;
- (void)_setVideoRemakerURL:(id)arg1;
- (id)_videoRemakerURL;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)asset;
- (void)cancel;
- (void)cancelRemaking;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)postCompletionHandler;
- (id)progressHandler;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(bool)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (void)runWithActivityType:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setPostCompletionHandler:(id)arg1;
- (void)setProgressHandler:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

@end