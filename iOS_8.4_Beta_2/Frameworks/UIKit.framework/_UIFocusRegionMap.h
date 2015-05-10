/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusRegionMap : NSObject <NSSecureCoding> {
    bool _builtRegionMap;
    UIView *_containingView;
    NSMutableArray *_mapEntries;
    struct CGSize { 
        double width; 
        double height; 
    } _windowSize;
}

@property(assign,retain) UIView * containingView;
@property(assign,retain) NSMutableArray * mapEntries;
@property(assign,readwrite) struct CGSize { double x1; double x2; } windowSize;

+ (bool)supportsSecureCoding;

- (void)_buildRegionMap;
- (void)_punchHoleInMapAtFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addFocusableView:(id)arg1 withFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addUnfocusableView:(id)arg1 withFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)closestFocusableViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDirection:(struct CGSize { double x1; double x2; })arg2;
- (id)closestFocusableViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDirection:(struct CGSize { double x1; double x2; })arg2 includeCurrentlyFocused:(bool)arg3;
- (id)containingView;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debuggingImage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainingView:(id)arg1;
- (id)linearlyOrderedFocusRegionMaps;
- (id)linearlyOrderedFocusViews;
- (id)mapEntries;
- (void)setContainingView:(id)arg1;
- (void)setMapEntries:(id)arg1;
- (void)setWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end
