/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTitleCell : PSTableCell <UIWebViewDelegate> {
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;
    bool _animatingGearView;
    UIProgressView *_progressBar;
    int _progressStyle;
    PSWebContainerView *_releaseNotesSummaryView;
    UILabel *_updateStatusLabel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIImage * gearBackgroundImage;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIProgressView * progressBar;
@property(assign,readwrite) int progressDisplayStyle;
@property(assign,retain) PSWebContainerView * releaseNotesSummaryView;
@property(assign,readonly) Class superclass;
@property(assign,retain) UILabel * updateStatusLabel;

+ (long long)cellStyle;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)gearBackgroundImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)preferredHeightWithTable:(id)arg1;
- (id)progressBar;
- (int)progressDisplayStyle;
- (id)releaseNotesSummaryView;
- (void)setAnimatingGearView:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setProgressDisplayStyle:(int)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setReleaseNotesSummaryView:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setUpdateStatusLabel:(id)arg1;
- (void)sizeToFitWithTable:(id)arg1;
- (id)updateStatusLabel;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
