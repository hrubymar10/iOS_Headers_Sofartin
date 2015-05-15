/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLShadow : NSObject

+ (id)renderQueue;
+ (id)sharedContext;

- (void)createOffscreenRenderBuffer:(struct CGSize { double x1; double x2; })arg1 framebuffer:(id)arg2 requiresDepth:(bool)arg3 colorRenderBuffer:(unsigned int*)arg4 depthRenderBuffer:(unsigned int*)arg5;
- (struct CGImage { }*)newCGImageFromGLBuffer:(char **)arg1;
- (void)setupGLTextureParameters;

@end
