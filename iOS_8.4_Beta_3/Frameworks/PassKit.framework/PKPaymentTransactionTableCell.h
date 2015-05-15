/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentTransactionTableCell : UITableViewCell {
    UILabel *_amountLabel;
    NSString *_amountString;
    UILabel *_primaryLabel;
    NSString *_primaryString;
    UILabel *_secondaryLabel;
    NSString *_secondaryString;
}

@property (nonatomic, retain) NSString *amountString;
@property (nonatomic, retain) NSString *primaryString;
@property (nonatomic, retain) NSString *secondaryString;

+ (double)rowHeight;

- (id)amountString;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryString;
- (id)secondaryString;
- (void)setAmountColor:(id)arg1;
- (void)setAmountString:(id)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setSecondaryString:(id)arg1;

@end
