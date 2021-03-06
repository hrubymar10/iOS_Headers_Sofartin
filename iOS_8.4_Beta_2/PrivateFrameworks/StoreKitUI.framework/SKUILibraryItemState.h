/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILibraryItemState : NSObject <NSCopying> {
    unsigned long long _avTypes;
    long long _availability;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    bool _highDefinition;
    bool _preview;
    bool _rental;
    NSNumber *_storeAccountIdentifier;
    NSString *_storeFlavorIdentifier;
    NSString *_storePlatformKind;
    NSNumber *_storeVersionIdentifier;
}

@property(assign,readwrite) unsigned long long AVTypes;
@property(assign,readwrite) long long availability;
@property(assign,copy) NSString * bundleIdentifier;
@property(assign,copy) NSString * bundleVersion;
@property(getter=isHighDefinition,assign,readwrite) bool highDefinition;
@property(assign,readonly) NSString * itemStateVariantIdentifier;
@property(getter=isPreview,assign,readwrite) bool preview;
@property(getter=isRental,assign,readwrite) bool rental;
@property(assign,copy) NSNumber * storeAccountIdentifier;
@property(assign,copy) NSString * storeFlavorIdentifier;
@property(assign,copy) NSString * storePlatformKind;
@property(assign,copy) NSNumber * storeVersionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)AVTypes;
- (long long)availability;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithApplication:(id)arg1;
- (bool)isHighDefinition;
- (bool)isPreview;
- (bool)isRental;
- (id)itemStateVariantIdentifier;
- (id)newJavaScriptRepresentation;
- (void)setAVTypes:(unsigned long long)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setHighDefinition:(bool)arg1;
- (void)setPreview:(bool)arg1;
- (void)setRental:(bool)arg1;
- (void)setStoreAccountIdentifier:(id)arg1;
- (void)setStoreFlavorIdentifier:(id)arg1;
- (void)setStorePlatformKind:(id)arg1;
- (void)setStoreVersionIdentifier:(id)arg1;
- (id)storeAccountIdentifier;
- (id)storeFlavorIdentifier;
- (id)storePlatformKind;
- (id)storeVersionIdentifier;

@end
