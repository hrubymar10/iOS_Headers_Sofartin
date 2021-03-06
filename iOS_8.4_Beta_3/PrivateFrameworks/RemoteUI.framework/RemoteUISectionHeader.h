/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionHeader : UIView <RemoteUITableHeader> {
    UILabel *_detailHeaderLabel;
    UILabel *_headerLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    bool _isFirstSection;
    UILabel *_subHeaderLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconFrame;
- (id)detailHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)headerLabel;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setHeaderColor:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;

@end
