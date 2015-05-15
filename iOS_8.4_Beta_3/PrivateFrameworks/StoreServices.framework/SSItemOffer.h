/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemOffer : NSObject <NSCopying> {
    SSItem *_item;
    NSMutableDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

@property(getter=_offerItem,setter=_setOfferItem:,assign,readwrite) SSItem * _offerItem;
@property(assign,readonly) NSSet * accountIdentifiers;
@property(assign,readonly) NSString * actionDisplayName;
@property(assign,readonly) NSString * actionType;
@property(assign,readonly) NSString * buyParameters;
@property(assign,readonly) SSDialog * confirmationDialog;
@property(assign,readonly) long long estimatedDiskSpaceNeeded;
@property(assign,readonly) SSNetworkConstraints * networkConstraints;
@property(assign,readonly) NSString * offerIdentifier;
@property(assign,readonly) SSItemMedia * offerMedia;
@property(getter=isOneTapOffer,assign,readonly) bool oneTapOffer;
@property(getter=isPreorder,assign,readonly) bool preorder;
@property(assign,readonly) NSString * priceDisplay;
@property(assign,readonly) id requiredSoftwareCapabilities;
@property(assign,readonly) bool shouldShowPlusIcon;
@property(assign,readonly) SSDialog * successDialog;
@property(assign,readonly) NSArray * supportedDevices;

+ (id)_preferredOfferIdentifiers;

- (id)_offerItem;
- (void)_setOfferItem:(id)arg1;
- (id)accountIdentifiers;
- (id)actionDisplayName;
- (id)actionType;
- (id)allowedToneStyles;
- (id)buyParameters;
- (id)confirmationDialog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (id)documentUTI;
- (long long)estimatedDiskSpaceNeeded;
- (id)init;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (bool)isOneTapOffer;
- (bool)isPreorder;
- (id)networkConstraints;
- (id)offerIdentifier;
- (id)offerMedia;
- (id)playableMedia;
- (id)priceDisplay;
- (id)requiredSoftwareCapabilities;
- (void)setActionDisplayName:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setOneTapOffer:(bool)arg1;
- (void)setPriceDisplay:(id)arg1;
- (bool)shouldShowPlusIcon;
- (id)successDialog;
- (id)supportedDevices;
- (id)valueForProperty:(id)arg1;

@end