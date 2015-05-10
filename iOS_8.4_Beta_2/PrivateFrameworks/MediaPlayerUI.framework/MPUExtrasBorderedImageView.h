/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasBorderedImageView : UIImageView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _deferredTransform;
    bool _shouldDeferSettingTransform;
    bool _shouldSkipImageWhenReplicatingState;
    bool _shouldUseTransformWhenReplicatingState;
}

@property(assign,copy) UIColor * borderColor;
@property(assign,readwrite) double borderWidth;
@property(assign,readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } deferredTransform;
@property(assign,readwrite) bool shouldDeferSettingTransform;
@property(assign,readwrite) bool shouldSkipImageWhenReplicatingState;
@property(assign,readwrite) bool shouldUseTransformWhenReplicatingState;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)borderColor;
- (double)borderWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDeferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setShouldDeferSettingTransform:(bool)arg1;
- (void)setShouldSkipImageWhenReplicatingState:(bool)arg1;
- (void)setShouldUseTransformWhenReplicatingState:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)shouldDeferSettingTransform;
- (bool)shouldSkipImageWhenReplicatingState;
- (bool)shouldUseTransformWhenReplicatingState;

@end
