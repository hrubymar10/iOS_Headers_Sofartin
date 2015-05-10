/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property(assign,readwrite) struct { double x1; double x2; } coordinate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * subtitle;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;
+ (id)placeholderPreviewCache;
+ (id)placeholderPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
+ (id)titleBarMaskImageForWidth:(double)arg1;
+ (id)vcardDataFromCLLocation:(id)arg1;

- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (struct { double x1; double x2; })coordinate;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)initWithTransfer:(id)arg1;
- (bool)isDroppedPin;
- (id)mapItem;
- (int)mediaType;
- (id)pin;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)vCardURLProperties;

@end
