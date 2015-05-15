/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPaymentFooterView : UIView {
    PKPassPaymentFooterContentView *_contentView;
    bool _isVisible;
    PKPassView *_passView;
    long long _paymentApplicationState;
    long long _state;
}

@property (nonatomic, retain) PKPassView *passView;
@property (nonatomic, readonly) long long state;

- (void)_configureForState:(long long)arg1 withPassView:(id)arg2;
- (void)_deleteButtonTapped;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)_lostModeButtonTapped;
- (void)configureForPaymentApplication;
- (void)configureForState:(long long)arg1 withPassView:(id)arg2;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (id)initWithPassView:(id)arg1;
- (void)layoutSubviews;
- (id)passView;
- (void)setContentView:(id)arg1;
- (void)setPassView:(id)arg1;
- (long long)state;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
