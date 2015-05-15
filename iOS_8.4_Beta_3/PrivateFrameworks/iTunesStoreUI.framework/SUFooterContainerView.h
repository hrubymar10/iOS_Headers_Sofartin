/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUFooterContainerView : UIView {
    UIView *_contentView;
    UIView *_footerView;
    bool _footerVisible;
}

@property(assign,retain) UIView * contentView;
@property(assign,retain) UIView * footerView;
@property(getter=isFooterVisible,assign,readwrite) bool footerVisible;

- (id)contentView;
- (void)dealloc;
- (id)footerView;
- (bool)isFooterVisible;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterVisible:(bool)arg1;

@end