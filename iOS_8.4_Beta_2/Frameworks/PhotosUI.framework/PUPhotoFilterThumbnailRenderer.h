/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoFilterThumbnailRenderer : NSObject {
    CIContext *__ciContext;
    EAGLContext *__eaglContext;
    NSObject<OS_dispatch_queue> *__renderQueue;
    UIImage *__thumbnailImage;
    UIImage *_inputImage;
}

@property(setter=_setCiContext:,assign,retain) CIContext * _ciContext;
@property(setter=_setEaglContext:,assign,retain) EAGLContext * _eaglContext;
@property(setter=_setRenderQueue:,assign,retain) NSObject<OS_dispatch_queue> * _renderQueue;
@property(setter=_setThumbnailImage:,assign,retain) UIImage * _thumbnailImage;
@property(assign,readonly) UIImage * inputImage;

- (void).cxx_destruct;
- (id)_ciContext;
- (id)_eaglContext;
- (void)_renderBaseThumbnailIfNeededOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_renderQueue;
- (id)_renderThumbnailWithFilter:(id)arg1;
- (void)_requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 singleCompletion:(id)arg3 fullCompletion:(id)arg4;
- (void)_setCiContext:(id)arg1;
- (void)_setEaglContext:(id)arg1;
- (void)_setRenderQueue:(id)arg1;
- (void)_setThumbnailImage:(id)arg1;
- (id)_thumbnailImage;
- (id)init;
- (id)initWithInputImage:(id)arg1;
- (id)inputImage;
- (void)requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 fullCompletion:(id)arg3;
- (void)requestThumbnailsWithFilters:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 singleCompletion:(id)arg3;

@end