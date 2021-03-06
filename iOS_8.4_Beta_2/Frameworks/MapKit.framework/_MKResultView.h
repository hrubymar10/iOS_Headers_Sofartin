/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKResultView : UIView <MKLocationManagerObserver> {
    bool _alwaysUsesBusinessLayout;
    <_MKResultViewDelegate> *_delegate;
    double _fallbackDistance;
    int _iconFormat;
    UIImageView *_imageView;
    int _layoutType;
    MKLocationManager *_locManager;
    NSArray *_mapItems;
    UILabel *_nameLabel;
    NSString *_primaryLabelText;
    UIColor *_primaryTextColor;
    NSTimer *_refLocationTimer;
    CLLocation *_referenceLocation;
    NSMutableArray *_resultConstraints;
    UILabel *_secondaryLabel;
    NSString *_secondaryLabelText;
    UIColor *_secondaryTextColor;
    bool _selected;
    bool _showsDistance;
    UILabel *_tertiaryLabel;
    bool _useSpotlightVibrancy;
    <_MKResultViewDelegate> *delegate;
}

@property(assign,readwrite) bool alwaysUsesBusinessLayout;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <_MKResultViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double fallbackDistance;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int iconFormat;
@property(assign,retain) UIImageView * imageView;
@property(assign,retain) MKMapItem * mapItem;
@property(assign,retain) NSArray * mapItems;
@property(assign,retain) UILabel * nameLabel;
@property(assign,readonly) double preferredHeight;
@property(assign,retain) NSString * primaryLabelText;
@property(assign,retain) UIColor * primaryTextColor;
@property(assign,retain) CLLocation * referenceLocation;
@property(assign,retain) UILabel * secondaryLabel;
@property(assign,retain) NSString * secondaryLabelText;
@property(assign,retain) UIColor * secondaryTextColor;
@property(assign,readwrite) bool selected;
@property(assign,readwrite) bool showsDistance;
@property(assign,readonly) Class superclass;
@property(assign,retain) UILabel * tertiaryLabel;
@property(assign,readwrite) bool useSpotlightVibrancy;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_cancelReferenceLocationTimer;
- (void)_contentSizeCategoryDidChange;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (double)_expectedHeightForLabels;
- (void)_fireReferenceLocationTimer;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)_labelWithFontSize:(double)arg1;
- (void)_locationApprovalDidChange;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (void)_updateColors;
- (void)_updateFontSizing;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)addLabelIfNecessary:(id)arg1;
- (bool)alwaysUsesBusinessLayout;
- (void)commonInit;
- (void)dealloc;
- (id)delegate;
- (double)fallbackDistance;
- (void)handleTap:(id)arg1;
- (int)iconFormat;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlightsOnTouch:(bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapItems;
- (id)nameLabel;
- (double)preferredHeight;
- (id)primaryLabelText;
- (id)primaryTextColor;
- (id)referenceLocation;
- (id)secondaryLabel;
- (id)secondaryLabelText;
- (id)secondaryTextColor;
- (bool)selected;
- (void)setAlwaysUsesBusinessLayout:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFallbackDistance:(double)arg1;
- (void)setIconFormat:(int)arg1;
- (void)setImageView:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItems:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setPrimaryLabelText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setReferenceLocation:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryLabelText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsDistance:(bool)arg1;
- (void)setTertiaryLabel:(id)arg1;
- (void)setUseSpotlightVibrancy:(bool)arg1;
- (bool)showsDistance;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tertiaryLabel;
- (void)updateConstraints;
- (void)updateImageView;
- (void)updateLayout;
- (void)updateSubviews;
- (bool)useSpotlightVibrancy;

@end
