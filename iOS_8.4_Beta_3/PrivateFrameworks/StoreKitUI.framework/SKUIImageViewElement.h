/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageViewElement : SKUIViewElement {
    NSString *_alt;
    BOOL _enabled;
    NSString *_entityResourceName;
    NSURL *_entityURL;
    bool _hasValidEntityValues;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    UIColor *_shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    } _shadowOffset;
    double _shadowRadius;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) id resourceCacheKey;
@property(assign,readonly) NSString * resourceName;
@property(assign,retain) UIColor * shadowColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } shadowOffset;
@property(assign,readwrite) double shadowRadius;
@property(assign,readonly) struct CGSize { double x1; double x2; } size;
@property(assign,readonly) id transientResourceCacheKey;

- (void).cxx_destruct;
- (id)URL;
- (void)_loadEntityValuesIfNeeded;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityValueProperties;
- (void)entityValueProviderDidChange;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)pageComponentType;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (id)resourceCacheKey;
- (id)resourceName;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowRadius:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })size;
- (id)transientResourceCacheKey;
- (id)uniquingMapKey;

@end
