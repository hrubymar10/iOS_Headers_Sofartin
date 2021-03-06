/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAudioRep : TSDMediaRep {
    <TSDAudioHUDController> *mAudioHUDController;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    bool mIsChangingDynamicVolume;
    CALayer *mPlayPauseButtonLayer;
    TSKAVPlayerController *mPlayerController;
    CALayer *mSpinnerLayer;
}

@property (nonatomic, readonly) TSDMovieInfo *movieInfo;

- (bool)canResetMediaSize;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (Class)layerClass;
- (id)movieInfo;
- (bool)shouldAllowReplacementFromDrop;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldShowMediaReplaceUI;

@end
