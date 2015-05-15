/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaRep : TSDStyledRep {
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    bool mIsZooming;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mLastPictureFrameLayerRect;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mTapToReplaceLayer;
}

@property (nonatomic, readonly) TSDMediaInfo *mediaInfo;
@property (nonatomic, readonly) TSDMediaLayout *mediaLayout;

- (void)dealloc;
- (bool)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;
- (bool)isPlaceholder;
- (id)mediaInfo;
- (id)mediaLayout;

@end
