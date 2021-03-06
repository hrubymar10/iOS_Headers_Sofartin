/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransaction : NSObject {
    id _internal;
}

@property(assign,readonly) NSString * _transactionIdentifier;
@property(assign,readonly) NSArray * downloads;
@property(assign,readonly) NSError * error;
@property(assign,readonly) NSString * matchingIdentifier;
@property(assign,readonly) SKPaymentTransaction * originalTransaction;
@property(assign,readonly) SKPayment * payment;
@property(assign,readonly) NSDate * transactionDate;
@property(assign,readonly) NSString * transactionIdentifier;
@property(assign,readonly) NSData * transactionReceipt;
@property(assign,readonly) long long transactionState;

- (void)_setDownloads:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionState:(long long)arg1;
- (id)_transactionIdentifier;
- (bool)canMergeWithTransaction:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloads;
- (id)error;
- (id)init;
- (id)initWithPayment:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)matchingIdentifier;
- (bool)mergeWithTransaction:(id)arg1;
- (id)originalTransaction;
- (id)payment;
- (id)transactionDate;
- (id)transactionIdentifier;
- (id)transactionReceipt;
- (long long)transactionState;

@end
