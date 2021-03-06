/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {
    MKCalloutBackgroundView *_calloutBackgroundView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    bool _initialDetailViewPositioning;
    bool _initialLeftViewPositioning;
    bool _initialRightViewPositioning;
    NSMutableArray *_lastConstraints;
    UIView *_leftSpacerView;
    UIView<_MKCalloutAccessoryView> *_leftView;
    unsigned long long _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    double _maxWidth;
    struct CGSize { 
        double width; 
        double height; 
    } _preferredContentSize;
    UIView *_rightSpacerView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    bool _shouldPositionTitleForMapsTransitionMovingSideways;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_unmaskedContainerView;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _preferredContentSize;
@property (nonatomic, retain) MKCalloutBackgroundView *calloutBackgroundView;
@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) unsigned long long mapDisplayStyle;
@property (nonatomic) double maximumWidth;
@property (nonatomic, retain) UIView *rightView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (id)_subtitleLabel;
- (void)_updateAccessoryViewStyles;
- (void)_updatePreferredContentSize;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (unsigned long long)mapDisplayStyle;
- (double)maximumWidth;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end
