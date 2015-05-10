/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    bool _centerFilled;
    NSObject *_geometryCacheKey;
    bool _hasCandidateKeys;
    UITextInputTraits *_inputTraits;
    bool _isSplit;
    UIKBTree *_keyplane;
    UIKBRenderConfig *_renderConfig;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _splitLeftCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _splitLeftRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _splitRightCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _splitRightRect;
    int _topCorners;
    int _visualStyle;
}

@property(assign,readonly) bool cacheDeferable;
@property(assign,readonly) NSString * cacheKey;
@property(assign,readonly) double cachedWidth;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSObject * geometryCacheKey;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool keepNonPersistent;
@property(assign,retain) UIKBRenderConfig * renderConfig;
@property(assign,readonly) Class superclass;

- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)geometryCacheKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)keepNonPersistent;
- (void)layoutSubviews;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (id)renderConfig;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;

@end
