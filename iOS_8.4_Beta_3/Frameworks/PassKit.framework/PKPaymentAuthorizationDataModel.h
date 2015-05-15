/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {
    NSArray *_acceptedPasses;
    CNContact *_billingAddress;
    CNContact *_cachedRecentAddress;
    PKPaymentOptionsDefaults *_defaults;
    unsigned long long _holdPendingUpdatesCount;
    NSString *_hostAppLocalizedName;
    NSMutableArray *_items;
    PKPassLibrary *_library;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKPaymentRequest *_paymentRequest;
    PKPaymentTransaction *_pendingTransaction;
    PKPaymentOptionsRecents *_recents;
    CNContact *_shippingAddress;
    bool _shippingEditable;
    NSString *_shippingEditableMessage;
    CNContact *_shippingEmail;
    PKShippingMethod *_shippingMethod;
    CNContact *_shippingName;
    CNContact *_shippingPhone;
    NSString *_shippingType;
    NSMutableDictionary *_statusForPasses;
    NSDecimalNumber *_transactionAmount;
    NSMutableDictionary *_typeToItemMap;
    id _updateHandler;
}

@property (nonatomic, readonly) NSArray *acceptedPasses;
@property (nonatomic, retain) CNContact *billingAddress;
@property (nonatomic, retain) CNContact *cachedRecentAddress;
@property (nonatomic, readonly) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) PKPaymentOptionsDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostAppLocalizedName;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) PKPassLibrary *library;
@property (nonatomic, readonly) NSString *merchantName;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (nonatomic, retain) NSArray *paymentSummaryItems;
@property (nonatomic, retain) PKPaymentTransaction *pendingTransaction;
@property (nonatomic, readonly) bool pinRequired;
@property (nonatomic, retain) PKPaymentOptionsRecents *recents;
@property (nonatomic, retain) CNContact *shippingAddress;
@property (getter=isShippingEditable, nonatomic) bool shippingEditable;
@property (nonatomic, retain) NSString *shippingEditableMessage;
@property (nonatomic, retain) CNContact *shippingEmail;
@property (nonatomic, retain) PKShippingMethod *shippingMethod;
@property (nonatomic, retain) CNContact *shippingName;
@property (nonatomic, retain) CNContact *shippingPhone;
@property (nonatomic, retain) NSString *shippingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) id updateHandler;

- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (void)_ensurePlaceholderItems;
- (id)_inAppPaymentPassesForNetworks:(id)arg1;
- (id)_initialBillingContactForPropertyID:(int)arg1;
- (id)_initialShippingContactForPropertyID:(int)arg1;
- (void)_notifyModelChanged;
- (void)_setDataItem:(id)arg1;
- (void)_setStatus:(long long)arg1 forPaymentPass:(id)arg2;
- (id)acceptedPasses;
- (void)beginUpdates;
- (id)billingAddress;
- (id)cachedRecentAddress;
- (id)currencyCode;
- (void)dealloc;
- (id)defaults;
- (void)endUpdates;
- (id)hostAppLocalizedName;
- (id)init;
- (bool)isShippingEditable;
- (bool)isValidWithError:(id*)arg1;
- (id)itemForType:(long long)arg1;
- (id)items;
- (id)library;
- (id)merchantName;
- (id)pass;
- (id)paymentApplication;
- (id)paymentRequest;
- (id)paymentSummaryItems;
- (id)pendingTransaction;
- (bool)pinRequired;
- (id)recents;
- (void)setBillingAddress:(id)arg1;
- (void)setCachedRecentAddress:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setHostAppLocalizedName:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setPendingTransaction:(id)arg1;
- (void)setRecents:(id)arg1;
- (void)setShippingAddress:(id)arg1;
- (void)setShippingEditable:(bool)arg1;
- (void)setShippingEditableMessage:(id)arg1;
- (void)setShippingEmail:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)setShippingName:(id)arg1;
- (void)setShippingPhone:(id)arg1;
- (void)setShippingType:(id)arg1;
- (void)setStatus:(long long)arg1 forItemWithType:(long long)arg2;
- (void)setTransactionAmount:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (id)shippingAddress;
- (id)shippingEditableMessage;
- (id)shippingEmail;
- (id)shippingMethod;
- (id)shippingName;
- (id)shippingPhone;
- (id)shippingType;
- (long long)statusForPass:(id)arg1;
- (id)transactionAmount;
- (id)updateHandler;

@end
