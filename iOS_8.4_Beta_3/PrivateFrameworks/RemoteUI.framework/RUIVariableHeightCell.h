/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIVariableHeightCell : RemoteUITableViewCell {
    bool _supportsAccessory;
}

@property(assign,readwrite) bool supportsAccessory;

- (double)contentWidth;
- (struct CGSize { double x1; double x2; })detailLabelSizeForWidth:(double)arg1;
- (double)height;
- (void)layoutSubviews;
- (void)setSupportsAccessory:(bool)arg1;
- (bool)supportsAccessory;
- (struct CGSize { double x1; double x2; })textLabelSizeForWidth:(double)arg1;

@end