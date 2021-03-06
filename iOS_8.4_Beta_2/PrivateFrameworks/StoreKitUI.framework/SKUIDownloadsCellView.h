/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDownloadsCellView : UIView {
    NSAttributedString *_attributedTitle;
    UIButton *_button;
    long long _buttonType;
    UIImageView *_imageView;
    bool _isPad;
    UISlider *_progressSlider;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(assign,retain) NSAttributedString * attributedTitle;
@property(assign,readonly) UIButton * button;
@property(assign,readwrite) long long buttonType;
@property(assign,retain) UIImage * image;
@property(assign,readwrite) bool isPad;
@property(assign,readwrite) double progress;
@property(assign,retain) NSString * subtitle;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)button;
- (long long)buttonType;
- (id)image;
- (id)init;
- (bool)isPad;
- (void)layoutSubviews;
- (double)progress;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setIsPad:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
