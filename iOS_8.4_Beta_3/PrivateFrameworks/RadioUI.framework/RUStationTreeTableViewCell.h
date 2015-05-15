/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationTreeTableViewCell : RUTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UIButton *_addButton;
    RUAudioPreviewView *_audioPreviewView;
    long long _cellDisplayStyle;
    UILabel *_nowPlayingTextLabel;
    bool _playing;
    UIView *_rightAccessoryView;
    bool _showsActivityIndicator;
    UILabel *_titleLabel;
}

@property(assign,readonly) UIButton * addButton;
@property(assign,readonly) RUAudioPreviewView * audioPreviewView;
@property(assign,readwrite) long long cellDisplayStyle;
@property(assign,copy) NSString * nowPlayingText;
@property(getter=isPlaying,assign,readwrite) bool playing;
@property(assign,readwrite) bool showsActivityIndicator;
@property(assign,copy) NSString * title;

+ (bool)_audioPreviewViewShowsFaceWhenNotPlaying;
+ (struct CGSize { double x1; double x2; })_audioPreviewViewSize;
+ (id)_nowPlayingTextLabelFont;
+ (id)_titleLabelFontWithEmphasis:(bool)arg1;
+ (double)defaultHeightForTraitCollection:(id)arg1 includingNowPlayingText:(bool)arg2;

- (void).cxx_destruct;
- (void)_applyAttributesForChangedCellStyleAnimated:(bool)arg1;
- (id)_audioPreviewAnimationForShowing:(bool)arg1;
- (double)_audioPreviewViewMinX;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_layoutSubviewsForcingTitleLabelCentered:(bool)arg1 alignLabelsHorizontallyForPlaying:(bool)arg2;
- (void)_showChangeToPlaying:(bool)arg1 animated:(bool)arg2;
- (double)_textLabelMinXWhenPlaying:(bool)arg1;
- (id)addButton;
- (id)audioPreviewView;
- (long long)cellDisplayStyle;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isPlaying;
- (void)layoutSubviews;
- (id)nowPlayingText;
- (void)setCellDisplayStyle:(long long)arg1;
- (void)setNowPlayingText:(id)arg1;
- (void)setNowPlayingText:(id)arg1 animated:(bool)arg2;
- (void)setPlaying:(bool)arg1;
- (void)setPlaying:(bool)arg1 animated:(bool)arg2;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsActivityIndicator;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end