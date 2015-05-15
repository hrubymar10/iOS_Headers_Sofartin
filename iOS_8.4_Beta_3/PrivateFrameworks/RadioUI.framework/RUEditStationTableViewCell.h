/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUEditStationTableViewCell : RUTableViewCell <MPUStackViewDataSource> {
    UIImage *_image;
    MPUBorderConfiguration *_stackItemBorderConfiguration;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    MPUStackView *_stackView;
    UILabel *_titleLabel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) UIView * perspectiveTargetView;
@property(assign,retain) MPUBorderDrawingCache * stackItemBorderDrawingCache;
@property(assign,copy) NSString * stationName;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } vanishingPoint;

+ (id)_titleLabelFontWithEmphasis:(bool)arg1;
+ (double)artworkMidXForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })artworkSize;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_applyImageToStackItems:(id)arg1;
- (id)_newStackView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfItemsInStackView:(id)arg1;
- (id)perspectiveTargetView;
- (void)setImage:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setStackItemBorderDrawingCache:(id)arg1;
- (void)setStationName:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)stackItemBorderDrawingCache;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (id)stationName;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGPoint { double x1; double x2; })vanishingPoint;

@end