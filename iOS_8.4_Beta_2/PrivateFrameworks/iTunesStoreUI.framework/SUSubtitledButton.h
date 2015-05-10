/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSubtitledButton : UIButton {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property(assign,retain) NSString * currentSubtitle;
@property(assign,retain) UIColor * currentSubtitleColor;
@property(assign,retain) UIColor * currentSubtitleShadowColor;
@property(assign,retain) UILabel * subtitleLabel;

- (void)_setupSubtitleView;
- (id)_subtitleFont;
- (long long)_subtitleLineBreakMode;
- (id)_subtitledContentForState:(unsigned long long)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (id)currentSubtitle;
- (id)currentSubtitleColor;
- (id)currentSubtitleShadowColor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleColorForState:(unsigned long long)arg1;
- (id)subtitleForState:(unsigned long long)arg1;
- (id)subtitleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)subtitleShadowColorForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
