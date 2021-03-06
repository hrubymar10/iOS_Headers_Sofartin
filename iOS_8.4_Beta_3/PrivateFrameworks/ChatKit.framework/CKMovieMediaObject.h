/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMovieMediaObject : CKAVMediaObject {
    AVURLAsset *_asset;
    bool _checkedVideoInfo;
    bool _hasVideoTrack;
    struct CGSize { 
        double width; 
        double height; 
    } _pxSize;
    UIImage *_thumbnail;
}

@property (nonatomic, retain) AVURLAsset *asset;
@property (nonatomic) bool checkedVideoInfo;
@property (nonatomic) bool hasVideoTrack;
@property (nonatomic) struct CGSize { double x1; double x2; } pxSize;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;

- (id)asset;
- (struct CGSize { double x1; double x2; })bbSize;
- (bool)canExport;
- (bool)checkedVideoInfo;
- (void)dealloc;
- (void)export:(id)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)hasNoVideoTrack;
- (bool)hasVideoTrack;
- (int)mediaType;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (struct CGSize { double x1; double x2; })pxSize;
- (void)setAsset:(id)arg1;
- (void)setCheckedVideoInfo:(bool)arg1;
- (void)setHasVideoTrack:(bool)arg1;
- (void)setPxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)updateVideoInfo;

@end
