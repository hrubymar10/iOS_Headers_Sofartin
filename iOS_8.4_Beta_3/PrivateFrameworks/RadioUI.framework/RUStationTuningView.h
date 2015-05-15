/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationTuningView : UIView {
    RadioStation *_station;
    UITapGestureRecognizer *_tapGestureRecognizer;
    RUStationTuningSlider *_tuningSlider;
    double _tuningSliderMaskDrawnWidth;
    UIImageView *_tuningSliderMaskView;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
}

@property(assign,retain) RadioStation * station;

+ (id)_tuningTypeLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_maskImageForSliderTrack;
- (void)_tapRecognizedAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStation:(id)arg1;
- (id)station;

@end
