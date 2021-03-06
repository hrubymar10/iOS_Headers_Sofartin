/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationActionTableViewCell : RUTableViewCell {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _imageOffset;
}

@property(assign,readwrite) struct UIOffset { double x1; double x2; } imageOffset;

+ (id)_textLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (struct UIOffset { double x1; double x2; })imageOffset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setImageOffset:(struct UIOffset { double x1; double x2; })arg1;

@end
