/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    <RUITableFooterDelegate> *_delegate;
    UIButton *_linkButton;
    NSURL *_linkURL;
    long long _textAlignment;
    UILabel *_textLabel;
    bool _usesCustomTextAlignment;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RUITableFooterDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) UIButton * linkButton;
@property(assign,retain) NSURL * linkURL;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_linkPressed;
- (id)delegate;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)linkButton;
- (id)linkURL;
- (void)setDelegate:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;

@end