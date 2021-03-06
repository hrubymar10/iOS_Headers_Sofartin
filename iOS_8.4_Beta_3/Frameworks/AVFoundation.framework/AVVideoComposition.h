/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal *_videoComposition;
}

@property (nonatomic, readonly, retain) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, readonly) Class customVideoCompositorClass;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, readonly, copy) NSArray *instructions;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;

+ (void)initialize;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;

- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (void)_bumpChangeSeed;
- (unsigned long long)_changeSeed;
- (bool)_copyFigVideoCompositor:(const void**)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(bool)arg4 error:(id*)arg5;
- (bool)_hasLayerAsAuxiliaryTrack;
- (bool)_hasPostProcessingLayers;
- (bool)_isValidReturningExceptionReason:(id*)arg1;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayer;
- (id)_postProcessingVideoLayers;
- (id)_serializableInstructions;
- (id)animationTool;
- (id)builtInCompositorName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)customVideoCompositorClass;
- (void)dealloc;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)init;
- (id)instructionForFigInstruction:(void*)arg1;
- (id)instructions;
- (bool)isValidForAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 validationDelegate:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)renderScale;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setAnimationTool:(id)arg1;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;

@end
