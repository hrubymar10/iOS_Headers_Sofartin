/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
    NSURL *_editorBundleURL;
    long long _fullSizeRenderHeight;
    long long _fullSizeRenderWidth;
    bool _isSubstandardRender;
    long long _mediaType;
    NSData *_penultimateRenderedJPEGData;
    NSURL *_renderedContentURL;
}

@property(assign,retain) PHAdjustmentData * adjustmentData;
@property(assign,readwrite) long long baseVersion;
@property(assign,retain) NSURL * editorBundleURL;
@property(assign,readwrite) long long fullSizeRenderHeight;
@property(assign,readwrite) long long fullSizeRenderWidth;
@property(assign,readwrite) bool isSubstandardRender;
@property(assign,readonly) long long mediaType;
@property(assign,retain) NSData * penultimateRenderedJPEGData;
@property(assign,copy) NSURL * renderedContentURL;

+ (unsigned long long)maximumAdjustmentDataLength;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)adjustmentData;
- (long long)baseVersion;
- (id)description;
- (id)editorBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (long long)fullSizeRenderHeight;
- (long long)fullSizeRenderWidth;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (bool)isSubstandardRender;
- (long long)mediaType;
- (id)penultimateRenderedJPEGData;
- (id)renderedContentURL;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(long long)arg1;
- (void)setEditorBundleURL:(id)arg1;
- (void)setFullSizeRenderHeight:(long long)arg1;
- (void)setFullSizeRenderWidth:(long long)arg1;
- (void)setIsSubstandardRender:(bool)arg1;
- (void)setPenultimateRenderedJPEGData:(id)arg1;
- (void)setRenderedContentURL:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;

@end
