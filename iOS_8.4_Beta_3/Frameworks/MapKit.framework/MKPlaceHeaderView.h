/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderView : UIView <MKPlaceHeaderBackgroundViewDelegate, MKPlaceHeaderViewCinematics, MKStackingViewControllerSizableView> {
    MKPlaceHeaderBackgroundView *_background;
    long long _backgroundTypeOverride;
    <MKPlaceHeaderViewDelegate> *_delegate;
    MKDistanceDetailProvider *_distanceMonitor;
    struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; unsigned long long x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; unsigned int x_12_1_12 : 1; unsigned int x_12_1_13 : 1; unsigned int x_12_1_14 : 1; unsigned int x_12_1_15 : 1; unsigned int x_12_1_16 : 1; unsigned int x_12_1_17 : 6; unsigned int x_12_1_18 : 1; unsigned int x_12_1_19 : 1; unsigned int x_12_1_20 : 1; unsigned int x_12_1_21 : 1; unsigned int x_12_1_22 : 1; unsigned int x_12_1_23 : 1; unsigned int x_12_1_24 : 1; unsigned int x_12_1_25 : 1; unsigned int x_12_1_26 : 1; unsigned int x_12_1_27 : 1; unsigned int x_12_1_28 : 1; unsigned int x_12_1_29 : 1; unsigned int x_12_1_30 : 1; unsigned int x_12_1_31 : 1; unsigned int x_12_1_32 : 1; unsigned int x_12_1_33 : 1; unsigned int x_12_1_34 : 1; unsigned int x_12_1_35 : 1; unsigned int x_12_1_36 : 1; unsigned int x_12_1_37 : 1; unsigned int x_12_1_38 : 1; unsigned int x_12_1_39 : 1; unsigned int x_12_1_40 : 1; unsigned int x_12_1_41 : 1; unsigned int x_12_1_42 : 1; unsigned int x_12_1_43 : 1; unsigned int x_12_1_44 : 1; unsigned int x_12_1_45 : 1; unsigned int x_12_1_46 : 1; unsigned int x_12_1_47 : 1; unsigned int x_12_1_48 : 1; unsigned int x_12_1_49 : 1; unsigned int x_12_1_50 : 1; unsigned int x_12_1_51 : 1; unsigned int x_12_1_52 : 1; unsigned int x_12_1_53 : 1; unsigned int x_12_1_54 : 1; unsigned int x_12_1_55 : 1; unsigned int x_12_1_56 : 1; unsigned int x_12_1_57 : 1; unsigned int x_12_1_58 : 1; unsigned int x_12_1_59 : 1; unsigned int x_12_1_60 : 1; unsigned int x_12_1_61 : 1; unsigned int x_12_1_62 : 1; unsigned int x_12_1_63 : 1; unsigned int x_12_1_64 : 1; unsigned int x_12_1_65 : 5; unsigned int x_12_1_66 : 1; unsigned int x_12_1_67 : 1; unsigned int x_12_1_68 : 1; unsigned int x_12_1_69 : 2; unsigned int x_12_1_70 : 2; unsigned int x_12_1_71 : 1; unsigned int x_12_1_72 : 1; unsigned int x_12_1_73 : 3; unsigned int x_12_1_74 : 1; unsigned int x_12_1_75 : 1; unsigned int x_12_1_76 : 1; unsigned int x_12_1_77 : 1; unsigned int x_12_1_78 : 1; unsigned int x_12_1_79 : 1; unsigned int x_12_1_80 : 1; unsigned int x_12_1_81 : 1; unsigned int x_12_1_82 : 1; unsigned int x_12_1_83 : 1; unsigned int x_12_1_84 : 1; } x12; } *_distanceToPlaceLabel;
    struct { 
        unsigned int isPresenting; 
    } _headerViewFlags;
    NSArray *_labelWidthConstraints;
    MKMapItem *_mapItem;
    bool _needsToUpdateTitleLabel;
    MKStarRatingView *_ratingView;
    UIView *_screen;
    bool _showBusinessDetails;
    struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; unsigned long long x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; unsigned int x_12_1_12 : 1; unsigned int x_12_1_13 : 1; unsigned int x_12_1_14 : 1; unsigned int x_12_1_15 : 1; unsigned int x_12_1_16 : 1; unsigned int x_12_1_17 : 6; unsigned int x_12_1_18 : 1; unsigned int x_12_1_19 : 1; unsigned int x_12_1_20 : 1; unsigned int x_12_1_21 : 1; unsigned int x_12_1_22 : 1; unsigned int x_12_1_23 : 1; unsigned int x_12_1_24 : 1; unsigned int x_12_1_25 : 1; unsigned int x_12_1_26 : 1; unsigned int x_12_1_27 : 1; unsigned int x_12_1_28 : 1; unsigned int x_12_1_29 : 1; unsigned int x_12_1_30 : 1; unsigned int x_12_1_31 : 1; unsigned int x_12_1_32 : 1; unsigned int x_12_1_33 : 1; unsigned int x_12_1_34 : 1; unsigned int x_12_1_35 : 1; unsigned int x_12_1_36 : 1; unsigned int x_12_1_37 : 1; unsigned int x_12_1_38 : 1; unsigned int x_12_1_39 : 1; unsigned int x_12_1_40 : 1; unsigned int x_12_1_41 : 1; unsigned int x_12_1_42 : 1; unsigned int x_12_1_43 : 1; unsigned int x_12_1_44 : 1; unsigned int x_12_1_45 : 1; unsigned int x_12_1_46 : 1; unsigned int x_12_1_47 : 1; unsigned int x_12_1_48 : 1; unsigned int x_12_1_49 : 1; unsigned int x_12_1_50 : 1; unsigned int x_12_1_51 : 1; unsigned int x_12_1_52 : 1; unsigned int x_12_1_53 : 1; unsigned int x_12_1_54 : 1; unsigned int x_12_1_55 : 1; unsigned int x_12_1_56 : 1; unsigned int x_12_1_57 : 1; unsigned int x_12_1_58 : 1; unsigned int x_12_1_59 : 1; unsigned int x_12_1_60 : 1; unsigned int x_12_1_61 : 1; unsigned int x_12_1_62 : 1; unsigned int x_12_1_63 : 1; unsigned int x_12_1_64 : 1; unsigned int x_12_1_65 : 5; unsigned int x_12_1_66 : 1; unsigned int x_12_1_67 : 1; unsigned int x_12_1_68 : 1; unsigned int x_12_1_69 : 2; unsigned int x_12_1_70 : 2; unsigned int x_12_1_71 : 1; unsigned int x_12_1_72 : 1; unsigned int x_12_1_73 : 3; unsigned int x_12_1_74 : 1; unsigned int x_12_1_75 : 1; unsigned int x_12_1_76 : 1; unsigned int x_12_1_77 : 1; unsigned int x_12_1_78 : 1; unsigned int x_12_1_79 : 1; unsigned int x_12_1_80 : 1; unsigned int x_12_1_81 : 1; unsigned int x_12_1_82 : 1; unsigned int x_12_1_83 : 1; unsigned int x_12_1_84 : 1; } x12; } *_titleLabel;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSMutableArray *_viewDidAppearBlocks;
    UIImageView *_vignette;
}

@property (nonatomic) long long backgroundTypeOverride;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *labelWidthConstraints;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool needsToUpdateTitleLabel;
@property (nonatomic) double rating;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (nonatomic, retain) NSMutableArray *viewDidAppearBlocks;

- (void).cxx_destruct;
- (void)_configureLabelForHeader:(id)arg1;
- (void)addConstraints;
- (void)addContent;
- (long long)backgroundTypeOverride;
- (void)dealloc;
- (id)delegate;
- (void)fadeOutScreen;
- (void)headerViewBackground:(id)arg1 willShowBackground:(id)arg2;
- (void)headerViewBackgroundDidFinishLoading:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelWidthConstraints;
- (void)layoutSubviews;
- (id)mapItem;
- (bool)needsToUpdateTitleLabel;
- (struct UILabel { Class x1; id x2; id x3; id x4; id x5; float x6; long long x7; id x8; id x9; unsigned long long x10; unsigned long long x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; unsigned int x_12_1_12 : 1; unsigned int x_12_1_13 : 1; unsigned int x_12_1_14 : 1; unsigned int x_12_1_15 : 1; unsigned int x_12_1_16 : 1; unsigned int x_12_1_17 : 6; unsigned int x_12_1_18 : 1; unsigned int x_12_1_19 : 1; unsigned int x_12_1_20 : 1; unsigned int x_12_1_21 : 1; unsigned int x_12_1_22 : 1; unsigned int x_12_1_23 : 1; unsigned int x_12_1_24 : 1; unsigned int x_12_1_25 : 1; unsigned int x_12_1_26 : 1; unsigned int x_12_1_27 : 1; unsigned int x_12_1_28 : 1; unsigned int x_12_1_29 : 1; unsigned int x_12_1_30 : 1; unsigned int x_12_1_31 : 1; unsigned int x_12_1_32 : 1; unsigned int x_12_1_33 : 1; unsigned int x_12_1_34 : 1; unsigned int x_12_1_35 : 1; unsigned int x_12_1_36 : 1; unsigned int x_12_1_37 : 1; unsigned int x_12_1_38 : 1; unsigned int x_12_1_39 : 1; unsigned int x_12_1_40 : 1; unsigned int x_12_1_41 : 1; unsigned int x_12_1_42 : 1; unsigned int x_12_1_43 : 1; unsigned int x_12_1_44 : 1; unsigned int x_12_1_45 : 1; unsigned int x_12_1_46 : 1; unsigned int x_12_1_47 : 1; unsigned int x_12_1_48 : 1; unsigned int x_12_1_49 : 1; unsigned int x_12_1_50 : 1; unsigned int x_12_1_51 : 1; unsigned int x_12_1_52 : 1; unsigned int x_12_1_53 : 1; unsigned int x_12_1_54 : 1; unsigned int x_12_1_55 : 1; unsigned int x_12_1_56 : 1; unsigned int x_12_1_57 : 1; unsigned int x_12_1_58 : 1; unsigned int x_12_1_59 : 1; unsigned int x_12_1_60 : 1; unsigned int x_12_1_61 : 1; unsigned int x_12_1_62 : 1; unsigned int x_12_1_63 : 1; unsigned int x_12_1_64 : 1; unsigned int x_12_1_65 : 5; unsigned int x_12_1_66 : 1; unsigned int x_12_1_67 : 1; unsigned int x_12_1_68 : 1; unsigned int x_12_1_69 : 2; unsigned int x_12_1_70 : 2; unsigned int x_12_1_71 : 1; unsigned int x_12_1_72 : 1; unsigned int x_12_1_73 : 3; unsigned int x_12_1_74 : 1; unsigned int x_12_1_75 : 1; unsigned int x_12_1_76 : 1; unsigned int x_12_1_77 : 1; unsigned int x_12_1_78 : 1; unsigned int x_12_1_79 : 1; unsigned int x_12_1_80 : 1; unsigned int x_12_1_81 : 1; unsigned int x_12_1_82 : 1; unsigned int x_12_1_83 : 1; unsigned int x_12_1_84 : 1; } x12; }*)newInfoLabel;
- (void)pause;
- (void)pauseAnimations;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (void)prepareForPresentation;
- (void)present;
- (void)presentBackgroundIfNeeded;
- (double)rating;
- (void)refreshContent;
- (void)reset;
- (void)resetAnimations;
- (void)resetVignette;
- (void)restartAnimations;
- (void)resume;
- (void)resumeAnimations;
- (void)setBackgroundTypeOverride:(long long)arg1;
- (void)setBackgroundViewTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelWidthConstraints:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setNeedsToUpdateTitleLabel:(bool)arg1;
- (void)setRating:(double)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabelBaselineConstraint:(id)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subTitle;
- (id)subtitleFont;
- (id)title;
- (id)titleLabelBaselineConstraint;
- (void)updateTitleLabel;
- (void)viewDidAppear:(bool)arg1;
- (id)viewDidAppearBlocks;
- (id)viewsForPresentation;

@end
