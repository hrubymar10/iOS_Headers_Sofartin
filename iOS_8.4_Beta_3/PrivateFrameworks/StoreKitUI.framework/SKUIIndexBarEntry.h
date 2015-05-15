/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntry : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    } _contentSize;
    long long _entryType;
    bool _hasValidContentSize;
    UIColor *_tintColor;
    long long _visibilityPriority;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) long long entryType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic) long long visibilityPriority;

+ (id)entryWithAttributedString:(id)arg1;
+ (id)entryWithImage:(id)arg1;
+ (id)placeholderEntryWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)systemCombinedEntry;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_tintColorDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (long long)entryType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEntryType:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisibilityPriority:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tintColor;
- (long long)visibilityPriority;

@end
