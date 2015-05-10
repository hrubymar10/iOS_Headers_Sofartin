/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface _RUTrackActionsTableViewCell : RUTableViewCell {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _accessoryImageOffset;
    UIImageView *_accessoryImageView;
    bool _displaysAsDisabled;
    UILabel *_lastConfiguredTextLabel;
    UIView *_topSeparatorView;
}

@property(assign,retain) UIImage * accessoryImage;
@property(assign,readwrite) struct UIOffset { double x1; double x2; } accessoryImageOffset;
@property(assign,readwrite) bool displaysAsDisabled;
@property(assign,retain) UIImage * highlightedAccessoryImage;
@property(assign,readwrite) bool showsTopSeparator;

+ (id)_textLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryImage;
- (struct UIOffset { double x1; double x2; })accessoryImageOffset;
- (bool)displaysAsDisabled;
- (id)highlightedAccessoryImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAccessoryImage:(id)arg1;
- (void)setAccessoryImageOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setDisplaysAsDisabled:(bool)arg1;
- (void)setHighlightedAccessoryImage:(id)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (bool)showsTopSeparator;
- (id)textLabel;

@end