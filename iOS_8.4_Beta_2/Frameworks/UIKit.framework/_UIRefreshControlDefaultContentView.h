/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView {
    bool _animationsAreValid;
    bool _areAnimationsValid;
    UIImageView *_arrow;
    UIImageView *_imageView;
    NSMutableDictionary *_snappingArrowFromValues;
    NSMutableDictionary *_snappingImageFromValues;
    NSMutableDictionary *_snappingTextFromValues;
    UIActivityIndicatorView *_spinner;
    UILabel *_textLabel;
}

@property(assign,readwrite) bool areAnimationsValid;
@property(assign,readonly) UIImageView * arrow;
@property(assign,readonly) UIImageView * imageView;
@property(assign,readonly) UIActivityIndicatorView * spinner;
@property(assign,readonly) UILabel * textLabel;

- (double)_currentTimeOffset;
- (void)_fadeInMagic;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_refreshingMagic;
- (id)_regenerateArrow;
- (id)_regenerateCircle;
- (id)_revealingArrowAnimations;
- (id)_revealingImageAnimations;
- (void)_revealingMagic;
- (id)_revealingTextAnimations;
- (void)_snappingMagic;
- (double)_snappingTimeOffset;
- (void)_spinOutMagic;
- (void)_updateTimeOffsetOfRelevantLayers;
- (bool)areAnimationsValid;
- (id)arrow;
- (id)attributedTitle;
- (void)dealloc;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumSnappingHeight;
- (double)minimumSnappingHeight;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)setAreAnimationsValid:(bool)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spinner;
- (long long)style;
- (id)textLabel;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;

@end
