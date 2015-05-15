/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {
    FMFLocation *_lastKnownLocation;
}

@property(assign,retain) FMFLocation * lastKnownLocation;
@property(assign,readonly) NSString * locationText;
@property(assign,readonly) long long offerState;
@property(assign,readonly) IMHandle * sender;
@property(assign,readonly) NSString * titleText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)arg1;

- (id)_desaturatedImageForImage:(id)arg1;
- (void)_generateMapPreview;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 withCoordinate:(struct { double x1; double x2; })arg3 forState:(long long)arg4;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (id)_previewCacheKey:(unsigned long long)arg1;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (void)dealloc;
- (bool)failed;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isFromMe;
- (id)lastKnownLocation;
- (id)locationText;
- (long long)offerState;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2;
- (id)savedPreviewFromURL:(id)arg1;
- (id)sender;
- (void)setLastKnownLocation:(id)arg1;
- (id)time;
- (id)titleText;

@end
