/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMModeDial : UIControl {
    UIView *__centeringDebugView;
    NSString *__contentSizeCategory;
    UIView *__dialContainerView;
    CAGradientLayer *__dialGradientLayer;
    UIImageView *__dotImageView;
    UIView *__dotTopMarginLayoutSpacer;
    NSMutableArray *__items;
    UIView *__itemsContainerView;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } *__tapZones;
    <CAMModeDialDataSource> *_dataSource;
    long long _orientation;
    unsigned long long _selectedIndex;
}

@property(assign,readonly) UIView * _centeringDebugView;
@property(assign,copy) NSString * _contentSizeCategory;
@property(assign,readonly) UIView * _dialContainerView;
@property(assign,readonly) CAGradientLayer * _dialGradientLayer;
@property(assign,readonly) UIImageView * _dotImageView;
@property(assign,readonly) UIView * _dotTopMarginLayoutSpacer;
@property(assign,readonly) NSMutableArray * _items;
@property(assign,readonly) UIView * _itemsContainerView;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }* _tapZones;
@property(assign,readwrite) <CAMModeDialDataSource> * dataSource;
@property(assign,readonly) long long orientation;
@property(assign,readwrite) unsigned long long selectedIndex;

- (void).cxx_destruct;
- (double)_approximateWidthOfLabelAtIndex:(long long)arg1;
- (id)_centeringDebugView;
- (void)_commonCAMModeDialInitialization;
- (struct CGPoint { double x1; double x2; })_containerPositionFromSelectedIndex;
- (id)_contentSizeCategory;
- (id)_dialContainerView;
- (id)_dialGradientLayer;
- (id)_dotImage;
- (id)_dotImageView;
- (id)_dotTopMarginLayoutSpacer;
- (id)_fontForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForOrientation:(long long)arg1;
- (id)_horizontalDialMeshTransform;
- (id)_items;
- (id)_itemsContainerView;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (void)_layoutHorizontalTapZones;
- (void)_layoutVerticalTapZones;
- (void)_setupHorizontalDotConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_tapZones;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (id)_verticalDialMeshTransform;
- (id)dataSource;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(long long)arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (void)reloadData;
- (unsigned long long)selectedIndex;
- (void)setDataSource:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateToContentSize:(id)arg1;

@end
