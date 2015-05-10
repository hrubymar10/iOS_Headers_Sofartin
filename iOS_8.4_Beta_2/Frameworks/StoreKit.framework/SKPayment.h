/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property(assign,copy) NSString * applicationUsername;
@property(assign,copy) NSString * partnerIdentifier;
@property(assign,copy) NSString * partnerTransactionIdentifier;
@property(assign,copy) NSString * productIdentifier;
@property(assign,readonly) long long quantity;
@property(assign,copy) NSData * requestData;
@property(assign,copy) NSDictionary * requestParameters;
@property(assign,readonly) bool simulatesAskToBuyInSandbox;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)applicationUsername;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)partnerIdentifier;
- (id)partnerTransactionIdentifier;
- (id)productIdentifier;
- (long long)quantity;
- (id)requestData;
- (id)requestParameters;
- (bool)simulatesAskToBuyInSandbox;

@end