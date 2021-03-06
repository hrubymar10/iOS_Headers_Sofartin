/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackTitlesView : UIControl {
    UIView *_contentView;
    NSArray *_labels;
    unsigned long long _marqueeScrollableIndex;
    bool _marqueeScrollingActive;
    bool _showingLoadingUI;
    NSArray *_titles;
}

@property(assign,readonly) UIView * contentView;
@property(assign,readwrite) unsigned long long marqueeScrollableIndex;
@property(assign,readwrite) bool marqueeScrollingActive;
@property(assign,readwrite) bool showingLoadingUI;
@property(assign,retain) NSArray * titles;

- (void).cxx_destruct;
- (id)_addLabel:(unsigned long long)arg1;
- (id)_addLoadingLabel;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_layoutLabels;
- (void)_layoutLoadingUI;
- (void)_tearDownLabels;
- (void)_updateLabelMarqueeScrolling;
- (id)contentView;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)marqueeScrollableIndex;
- (bool)marqueeScrollingActive;
- (void)setMarqueeScrollableIndex:(unsigned long long)arg1;
- (void)setMarqueeScrollingActive:(bool)arg1;
- (void)setShowingLoadingUI:(bool)arg1;
- (void)setTitles:(id)arg1;
- (bool)showingLoadingUI;
- (id)titles;

@end
