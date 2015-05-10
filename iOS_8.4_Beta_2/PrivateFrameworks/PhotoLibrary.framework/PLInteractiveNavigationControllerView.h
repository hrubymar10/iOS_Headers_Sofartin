/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {
    UIView *_bottom;
    struct { 
        unsigned int transitioning : 1; 
        unsigned int headerViewIsVisible : 1; 
        unsigned int footerViewIsVisible : 1; 
    } _controllerViewFlags;
    UIView *_footer;
    UIView *_header;
    UIView *_interactive;
    UINavigationBar *_navBar;
    long long _orientation;
    UIView *_overlay;
    UIView *_top;
}

@property(assign,retain) UIView * bottomView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIView * footerView;
@property(getter=footerViewIsHidden,assign,readwrite) bool footerViewHidden;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIView * headerView;
@property(getter=headerViewIsHidden,assign,readwrite) bool headerViewHidden;
@property(assign,readonly) UINavigationBar * navigationBar;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIView * topView;

- (void)_adjustViewFrame:(id)arg1;
- (id)bottomView;
- (void)dealloc;
- (id)footerView;
- (bool)footerViewIsHidden;
- (id)headerView;
- (bool)headerViewIsHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactiveView;
- (void)layoutSubviews;
- (id)navigationBar;
- (void)setBottomView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterViewHidden:(bool)arg1;
- (void)setFooterViewHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderViewHidden:(bool)arg1;
- (void)setHeaderViewHidden:(bool)arg1 animated:(bool)arg2;
- (void)setInteractiveView:(id)arg1;
- (void)setInteractiveView:(id)arg1 removePrevious:(bool)arg2;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setTopViewAlpha:(double)arg1;
- (id)topView;
- (void)transitionDidEnd;
- (void)transitionWillBegin;

@end