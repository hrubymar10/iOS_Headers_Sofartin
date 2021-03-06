/* Generated by RuntimeBrowser.
 */

@protocol PLCameraEffectsRendererDelegate <NSObject>

@required

- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didStartTransitionToShowGrid:(bool)arg2 animated:(bool)arg3;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 willTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CAMEffectsRenderer *)arg1;

@end
