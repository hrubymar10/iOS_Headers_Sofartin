/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraController : NSObject {
    VKCamera *_camera;
    <MDRenderTarget> *_canvas;
    <VKCameraControllerDelegate> *_delegate;
    bool _gesturing;
    bool _inProgressRegionChangeIsAnimated;
    unsigned long long _regionChangeCount;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, retain) VKCamera *camera;
@property (nonatomic) <MDRenderTarget> *canvas;
@property (nonatomic) <VKCameraControllerDelegate> *delegate;
@property (getter=isGesturing, nonatomic) bool gesturing;

- (void)beginRegionChange:(bool)arg1;
- (id)camera;
- (id)canvas;
- (void)canvasDidLayout;
- (void)dealloc;
- (id)delegate;
- (id)detailedDescription;
- (void)endRegionChange;
- (bool)isAnimating;
- (bool)isGesturing;
- (void)setCamera:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGesturing:(bool)arg1;

@end
