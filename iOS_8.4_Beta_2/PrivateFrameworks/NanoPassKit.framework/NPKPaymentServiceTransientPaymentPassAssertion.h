/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentServiceTransientPaymentPassAssertion : NSObject {
    NPKPaymentServiceCard *_paymentCard;
    NPKPaymentService *_paymentService;
}

@property(assign,retain) NPKPaymentServiceCard * paymentCard;
@property(assign,readwrite) NPKPaymentService * paymentService;
@property(assign,readonly) NSString * uniqueID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPassDescription:(id)arg1 paymentService:(id)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentService:(id)arg2;
- (id)paymentCard;
- (id)paymentService;
- (void)setPaymentCard:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (id)uniqueID;

@end
