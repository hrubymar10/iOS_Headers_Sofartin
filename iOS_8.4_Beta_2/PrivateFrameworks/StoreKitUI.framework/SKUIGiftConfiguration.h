/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftConfiguration : NSObject {
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSString *_currencySymbol;
    long long _currencySymbolPosition;
    NSArray *_fixedGiftAmountLabels;
    NSArray *_fixedGiftAmountValues;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _giftAmountRange;
    NSURL *_giftPurchaseURL;
    NSURL *_giftValidationURL;
    long long _maximumMessageLength;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
    NSString *_senderEmailAddress;
    NSString *_senderName;
    NSString *_storeFrontName;
    NSArray *_themes;
}

@property(assign,readonly) SKUIClientContext * clientContext;
@property(assign,readonly) NSString * currencySymbol;
@property(assign,readonly) long long currencySymbolPosition;
@property(assign,readonly) NSArray * fixedGiftAmountLabels;
@property(assign,readonly) NSArray * fixedGiftAmountValues;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } giftAmountRange;
@property(assign,readonly) NSURL * giftPurchaseURL;
@property(assign,readonly) NSURL * giftValidationURL;
@property(assign,readonly) long long maximumMessageLength;
@property(assign,readonly) NSString * senderEmailAddress;
@property(assign,readonly) NSString * senderName;
@property(assign,readonly) NSString * storeFrontName;
@property(assign,readonly) NSArray * themes;

- (void).cxx_destruct;
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)_loadThemeImages;
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)charityForIdentifier:(id)arg1;
- (id)clientContext;
- (id)currencySymbol;
- (long long)currencySymbolPosition;
- (id)fixedGiftAmountLabels;
- (id)fixedGiftAmountValues;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })giftAmountRange;
- (id)giftPurchaseURL;
- (id)giftValidationURL;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (bool)loadCachedConfiguration;
- (void)loadConfigurationWithCompletionBlock:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (id)logoImageForCharity:(id)arg1;
- (long long)maximumMessageLength;
- (void)removeObserver:(id)arg1;
- (id)senderEmailAddress;
- (id)senderName;
- (id)storeFrontName;
- (id)themes;

@end