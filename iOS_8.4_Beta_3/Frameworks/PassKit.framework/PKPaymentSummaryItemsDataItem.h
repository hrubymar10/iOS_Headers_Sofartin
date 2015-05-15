/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *paymentSummaryItems;

+ (long long)dataType;

- (id)currencyCode;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentSummaryItems;

@end
