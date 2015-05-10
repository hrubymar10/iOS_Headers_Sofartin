/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStationsCollectionViewTemplate : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    } _artworkSize;
    double _horizontalEdgePadding;
    double _horizontalSpacingBetweenItems;
    struct CGSize { 
        double width; 
        double height; 
    } _itemSize;
    NSMutableArray *_orderedNamesOfTextElements;
    struct CGSize { 
        double width; 
        double height; 
    } _rootViewSize;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } baseSize; 
        bool forcesIntegralX; 
        bool forcesIntegralY; 
        struct UIOffset { 
            double horizontal; 
            double vertical; 
        } maximumRelativeOffsetStep; 
        struct CGSize { 
            double width; 
            double height; 
        } sizeInsetStep; 
        double vanishingPointY; 
    } _stackAttributes;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    NSMutableDictionary *_textElementsByName;
    UIColor *_tintColor;
    UITraitCollection *_traitCollection;
}

@property(assign,readonly) struct CGSize { double x1; double x2; } artworkSize;
@property(assign,readonly) double horizontalEdgePadding;
@property(assign,readonly) double horizontalSpacingBetweenItems;
@property(assign,readonly) struct CGSize { double x1; double x2; } itemSize;
@property(assign,readonly) RURadioStationsCollectionViewTemplateTextElement * lastTextElement;
@property(assign,readwrite) struct CGSize { double x1; double x2; } rootViewSize;
@property(assign,readonly) struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; bool x2; bool x3; struct UIOffset { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; } stackAttributes;
@property(assign,retain) MPUBorderDrawingCache * stackItemBorderDrawingCache;
@property(assign,copy) UIColor * tintColor;
@property(assign,copy) UITraitCollection * traitCollection;

+ (struct { unsigned long long x1; double x2; double x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGAffineTransform { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; double x_5_1_5; double x_5_1_6; } x5; double x6; double x7; double x8; })_attributesForStackItemAtIndex:(long long)arg1 displayScale:(double)arg2;
+ (double)_horizontalEdgePaddingForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (double)_horizontalSpacingBetweenItemsForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; bool x2; bool x3; struct UIOffset { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; })_stackAttributesForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewHeight:(double)arg3;
+ (double)_stackBaseWidthForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3 horizontalEdgePadding:(double)arg4 horizontalSpacingBetweenItems:(double)arg5;
+ (double)_targetStackBaseWidthForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (long long)numberOfStackItems;

- (void).cxx_destruct;
- (void)_updateForLayoutChange;
- (void)addTextElement:(id)arg1 withName:(id)arg2;
- (struct CGSize { double x1; double x2; })artworkSize;
- (struct { unsigned long long x1; double x2; double x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGAffineTransform { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; double x_5_1_5; double x_5_1_6; } x5; double x6; double x7; double x8; })attributesForStackItemAtIndex:(long long)arg1;
- (void)beginCoalescingTextDrawingCacheInvalidationNotifications;
- (void)endCoalescingTextDrawingCacheInvalidationNotifications;
- (void)enumerateTextElementsUsingBlock:(id)arg1;
- (double)horizontalEdgePadding;
- (double)horizontalSpacingBetweenItems;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)lastTextElement;
- (struct CGSize { double x1; double x2; })rootViewSize;
- (void)setRootViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStackItemBorderDrawingCache:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; bool x2; bool x3; struct UIOffset { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; })stackAttributes;
- (id)stackItemBorderDrawingCache;
- (id)textElementNamed:(id)arg1;
- (id)tintColor;
- (id)traitCollection;
- (void)updateForPreferredContentSizeChange;

@end