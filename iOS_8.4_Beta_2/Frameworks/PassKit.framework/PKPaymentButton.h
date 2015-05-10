/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentButton : UIButton {
    UILabel *_buyLabel;
    UIView *_container;
    UIView *_highlightView;
    PKPaymentButtonPDFView *_pdfView;
    long long _style;
    long long _type;
}

@property(assign,retain) UILabel * buyLabel;
@property(assign,retain) UIView * container;
@property(assign,retain) UIView * highlightView;
@property(assign,retain) PKPaymentButtonPDFView * pdfView;

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;

- (id)buyLabel;
- (id)container;
- (void)dealloc;
- (id)highlightView;
- (id)initWithType:(long long)arg1 style:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)pdfView;
- (void)setBuyLabel:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPdfView:(id)arg1;

@end
