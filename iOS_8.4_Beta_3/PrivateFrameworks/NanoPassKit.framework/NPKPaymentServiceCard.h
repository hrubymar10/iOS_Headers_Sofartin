/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentServiceCard : NSObject <NSSecureCoding> {
    NSString *_applicationIdentifier;
    NSString *_passUniqueIdentifier;
    long long _paymentApplicationState;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (getter=isReadyForPayment, nonatomic, readonly) bool availableForPayment;
@property (nonatomic, copy) NSString *passUniqueIdentifier;
@property (nonatomic) long long paymentApplicationState;

+ (id)paymentServiceCardForPassUniqueID:(id)arg1 paymentApplication:(id)arg2;
+ (id)paymentServiceCardForPaymentPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassUniqueIdentifier:(id)arg1 applicationIdentifier:(id)arg2 paymentApplicationState:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReadyForPayment;
- (id)passUniqueIdentifier;
- (long long)paymentApplicationState;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplicationState:(long long)arg1;

@end
