/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

@property(assign,copy) NSString * merchantCode;
@property(assign,copy) NSString * paymentNetwork;
@property(assign,copy) NSString * rawMerchantCode;
@property(assign,retain) NSDate * transactionDate;
@property(assign,retain) CLLocation * transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)merchantCode;
- (id)paymentNetwork;
- (id)rawMerchantCode;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRawMerchantCode:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (id)transactionDate;
- (id)transactionLocation;

@end