/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingCache : NSObject {
    id _attributedTextProvider;
    NSCache *_cache;
    double _displayScale;
    unsigned long long _invalidationNotificationCoalescingRequestsCount;
    NSHashTable *_invalidationObservers;
    unsigned long long _maximumNumberOfLines;
    bool _opaque;
    NSOperationQueue *_preHeatingOperationQueue;
    NSStringDrawingContext *_reusableStringDrawingContext;
    MPUTextDrawingCacheKey *_reusableTextDrawingCacheKey;
    NSDictionary *_textAttributes;
    bool _usesImageCachingInsteadOfStringDrawingContextCaching;
    bool _wasInvalidatedWithoutNotifyingObservers;
}

@property(assign,copy) id attributedTextProvider;
@property(assign,readwrite) double displayScale;
@property(assign,readwrite) unsigned long long maximumNumberOfLines;
@property(getter=_isOpaque,setter=_setOpaque:,assign,readwrite) bool opaque;
@property(assign,copy) NSDictionary * textAttributes;
@property(getter=_usesImageCachingInsteadOfStringDrawingContextCaching,setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:,assign,readwrite) bool usesImageCachingInsteadOfStringDrawingContextCaching;

+ (id)_drawingContextForText:(id)arg1 allowedSize:(struct CGSize { double x1; double x2; })arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned long long)arg7 opaque:(bool)arg8 displayScale:(double)arg9 attributedTextProvider:(id)arg10;
+ (void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned long long)arg2;
+ (struct CGSize { double x1; double x2; })_validateAllowedSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)_isOpaque;
- (void)_notifyInvalidationObservers;
- (void)_setOpaque:(bool)arg1;
- (void)_setUsesImageCachingInsteadOfStringDrawingContextCaching:(bool)arg1;
- (bool)_usesImageCachingInsteadOfStringDrawingContextCaching;
- (void)addInvalidationObserver:(id)arg1;
- (id)attributedTextProvider;
- (void)beginCoalescingInvalidationNotifications;
- (void)dealloc;
- (double)displayScale;
- (id)drawingContextForText:(id)arg1 allowedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)endCoalescingInvalidationNotifications;
- (id)init;
- (unsigned long long)maximumNumberOfLines;
- (void)preHeatForStrings:(id)arg1 allowedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)removeInvalidationObserver:(id)arg1;
- (void)setAttributedTextProvider:(id)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;

@end
