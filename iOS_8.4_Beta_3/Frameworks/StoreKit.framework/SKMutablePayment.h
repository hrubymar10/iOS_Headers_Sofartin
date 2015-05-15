/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKMutablePayment : SKPayment

@property(assign,copy) NSString * applicationUsername;
@property(assign,copy) NSString * partnerIdentifier;
@property(assign,copy) NSString * partnerTransactionIdentifier;
@property(assign,copy) NSString * productIdentifier;
@property(assign,readwrite) long long quantity;
@property(assign,copy) NSData * requestData;
@property(assign,copy) NSDictionary * requestParameters;
@property(assign,readwrite) bool simulatesAskToBuyInSandbox;

- (void)setApplicationUsername:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setPartnerTransactionIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setQuantity:(long long)arg1;
- (void)setRequestData:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setSimulatesAskToBuyInSandbox:(bool)arg1;

@end
