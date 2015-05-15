/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndex : UIControl {
    double _bottomPadding;
    struct CGSize { 
        double width; 
        double height; 
    } _cachedSize;
    struct CGSize { 
        double width; 
        double height; 
    } _cachedSizeToFit;
    NSArray *_entries;
    UIFont *_font;
    long long _idiom;
    UIColor *_indexBackgroundColor;
    UIColor *_indexColor;
    UIColor *_indexTrackingBackgroundColor;
    bool _pastBottom;
    bool _pastTop;
    long long _selectedSection;
    NSArray *_titles;
    double _topPadding;
    double _verticalTextHeightEstimate;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *indexBackgroundColor;
@property (nonatomic, retain) UIColor *indexColor;
@property (nonatomic, retain) UIColor *indexTrackingBackgroundColor;
@property (nonatomic, readonly) bool pastBottom;
@property (nonatomic, readonly) bool pastTop;
@property (nonatomic, readonly) long long selectedSection;
@property (nonatomic, readonly) NSString *selectedSectionTitle;
@property (nonatomic, retain) NSArray *titles;

- (void)_cacheAndMeasureTitles;
- (id)_displayTitles;
- (id)_dotImage;
- (id)_externalDotImage;
- (id)_fontForIdiom:(long long)arg1;
- (long long)_idiom;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)_setIdiom:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(double*)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (id)indexBackgroundColor;
- (id)indexColor;
- (id)indexTrackingBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
- (bool)pastBottom;
- (bool)pastTop;
- (long long)selectedSection;
- (id)selectedSectionTitle;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setIndexTrackingBackgroundColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titles;

@end
