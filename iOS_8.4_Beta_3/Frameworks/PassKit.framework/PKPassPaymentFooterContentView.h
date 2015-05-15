/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPaymentFooterContentView : UIView {
    UIView *_bottomRule;
    UIButton *_infoButton;
    bool _isVisibleAsFooter;
    PKPaymentPass *_pass;
}

@property(assign,readonly) UIView * bottomRule;
@property(assign,readonly) UIButton * infoButton;
@property(assign,readonly) bool isVisibleAsFooter;
@property(assign,readonly) PKPaymentPass * pass;

- (void)_infoButtonPressed:(id)arg1;
- (id)bottomRule;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (id)infoButton;
- (id)initWithPass:(id)arg1;
- (bool)isVisibleAsFooter;
- (void)layoutSubviews;
- (id)pass;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end