/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter> {
    NSDictionary *_attributes;
    GKButton *_button;
    double _buttonBaselineOffset;
    <GKRemoteUIAuxiliaryViewDelegate> *_delegate;
    int _layoutStyle;
    bool _pinToBottom;
    NSArray *_replaceableConstraints;
}

@property(assign,retain) NSDictionary * attributes;
@property(assign,retain) GKButton * button;
@property(assign,readwrite) double buttonBaselineOffset;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <GKRemoteUIAuxiliaryViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int layoutStyle;
@property(assign,readwrite) bool pinToBottom;
@property(assign,retain) NSArray * replaceableConstraints;
@property(assign,readonly) Class superclass;

- (void)adjustSizeToFillSuperview:(id)arg1;
- (id)attributes;
- (id)button;
- (double)buttonBaselineOffset;
- (void)buttonTapped:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (int)layoutStyle;
- (void)layoutSubviews;
- (void)objectModelDidChange:(id)arg1;
- (bool)pinToBottom;
- (id)replaceableConstraints;
- (void)setAttributes:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonBaselineOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setPinToBottom:(bool)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tableViewDidUpdateContentInset:(id)arg1;

@end
