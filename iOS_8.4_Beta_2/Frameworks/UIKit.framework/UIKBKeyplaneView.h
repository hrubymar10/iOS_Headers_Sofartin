/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
    NSTimer *_activatedTimer;
    NSMutableDictionary *_activeViewIndex;
    UIKBCacheToken *_cacheToken;
    UIKBKeyView *_candidateGapView;
    UIKBTree *_defaultKeyplane;
    NSMutableDictionary *_delayedDeactivationKeys;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyCaps;
    UIKBTree *_keyplane;
    bool _performingDeactivation;
    UIKBRenderConfig *_renderConfig;
    NSMutableDictionary *_renderedKeyViews;
    bool _shouldDrawRect;
    NSMutableDictionary *_subviewIndex;
}

@property(assign,readonly) bool cacheDeferable;
@property(assign,readonly) NSString * cacheKey;
@property(assign,retain) UIKBCacheToken * cacheToken;
@property(assign,readonly) double cachedWidth;
@property(assign,copy) NSString * debugDescription;
@property(assign,retain) UIKBTree * defaultKeyplane;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool keepNonPersistent;
@property(assign,retain) UIKBTree * keyplane;
@property(assign,retain) UIKBRenderConfig * renderConfig;
@property(assign,readonly) Class superclass;

- (bool)_shouldAllowKey:(id)arg1;
- (void)activateKeys;
- (id)activeKeyViews;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (bool)cacheDeferable;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (id)cacheToken;
- (double)cachedWidth;
- (void)cancelDelayedDeactivation;
- (Class)classForKey:(id)arg1;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (int)cornerMaskForKey:(id)arg1 recursive:(bool)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKeys;
- (void)dealloc;
- (id)defaultKeyplane;
- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (bool)isPasscodeStyle;
- (bool)keepNonPersistent;
- (id)keyplane;
- (void)layoutSubviews;
- (void)performDelayedDeactivation:(id)arg1;
- (void)purgeKeyViews;
- (void)purgeLayerContents;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)renderConfig;
- (void)scheduleDelayedDeactivation;
- (void)setCacheToken:(id)arg1;
- (void)setDefaultKeyplane:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)stateForKey:(id)arg1;
- (void)updateDecorationViewsIfNeeded;
- (bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;

@end