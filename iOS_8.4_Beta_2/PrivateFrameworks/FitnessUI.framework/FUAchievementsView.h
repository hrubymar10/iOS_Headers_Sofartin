/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUAchievementsView : UIView <UIScrollViewDelegate> {
    UILabel *_achievementDetailLabel;
    UILabel *_achievementTitleLabel;
    NSMutableArray *_achievementViews;
    NSArray *_achievements;
    <FUAchievementsViewDelegate> *_delegate;
    bool _needsSubviewRebuild;
    UIPageControl *_pageControl;
    bool _pagingEnabled;
    UIScrollView *_scrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _scrollViewContentInset;
    bool _showsAchievementTitles;
    long long _sizeClass;
}

@property(assign,copy) NSArray * achievements;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <FUAchievementsViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool pagingEnabled;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollViewContentInset;
@property(assign,readwrite) bool showsAchievementTitles;
@property(assign,readwrite) long long sizeClass;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_achievementAtScrollViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_detailLabelColor;
- (id)_detailLabelFont;
- (void)_getPageWidth:(double*)arg1 nearestPageIndex:(unsigned long long*)arg2 forScrollViewContentOffsetX:(double)arg3;
- (void)_hideAchievementTitleLabel;
- (void)_hidePageControl;
- (void)_rebuildAchievementViews;
- (void)_rebuildSubviewsIfNeeded;
- (void)_scrollViewTapped:(id)arg1;
- (void)_setNeedsSubviewRebuild;
- (void)_showAchievementTitleLabel;
- (void)_showPageControl;
- (id)_titleLabelFont;
- (void)_updateCurrentPageDetails;
- (id)achievementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)achievements;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pagingEnabled;
- (void)scrollToAchievement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollViewContentInset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAchievements:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPagingEnabled:(bool)arg1;
- (void)setScrollViewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsAchievementTitles:(bool)arg1;
- (void)setSizeClass:(long long)arg1;
- (bool)showsAchievementTitles;
- (long long)sizeClass;
- (id)viewForAchievement:(id)arg1;

@end
