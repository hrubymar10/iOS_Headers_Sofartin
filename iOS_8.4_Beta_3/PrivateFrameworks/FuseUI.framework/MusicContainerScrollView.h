/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContainerScrollView : UIScrollView {
    UIScrollView *_contentScrollView;
    bool _contentScrollViewPreviousAutomaticContentOffsetAdjustmentEnabled;
    bool _contentScrollViewPreviousScrollEnabled;
    UIView *_contentView;
    struct { 
        unsigned int contentSizeDidChange : 1; 
    } _delegateRespondsToSelector;
    bool _isAdjustingContentScrollViewScrollEnabled;
    bool _isChangingContentScrollViewContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastContentScrollViewPositionAdditions;
}

@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <MusicContainerScrollViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_getCurrentContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 contentScrollViewContentOffset:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_registerForNotificationsForContentScrollView:(id)arg1;
- (void)_unregisterForNotificationsForContentScrollView:(id)arg1;
- (void)_updateContentSize;
- (id)contentScrollView;
- (id)contentView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setContentScrollView:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
