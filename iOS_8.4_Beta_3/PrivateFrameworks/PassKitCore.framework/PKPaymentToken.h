/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentToken : NSObject <NSSecureCoding> {
    NSData *_paymentData;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
}

@property(assign,copy) NSData * paymentData;
@property(assign,copy) NSString * paymentInstrumentName;
@property(assign,copy) NSString * paymentNetwork;
@property(assign,copy) NSString * transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)paymentData;
- (id)paymentInstrumentName;
- (id)paymentNetwork;
- (void)setPaymentData:(id)arg1;
- (void)setPaymentInstrumentName:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;

@end
