/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding> {
    NSString *_orientation;
    NSMutableDictionary *_sizes;
    long long _uniqueIdentifier;
    NSMutableDictionary *_urls;
}

@property(assign,readonly) NSMutableDictionary * cacheRepresentation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long numberOfVariants;
@property(assign,readonly) NSString * orientationString;
@property(assign,readonly) Class superclass;
@property(assign,readonly) long long uniqueIdentifier;

- (void).cxx_destruct;
- (id)URLForVariant:(id)arg1;
- (void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2;
- (id)_firstVariant;
- (id)_initSKUIScreenshot;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithScreenshotDictionary:(id)arg1;
- (long long)numberOfVariants;
- (id)orientationString;
- (void)setArtwork:(id)arg1 forVariant:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForVariant:(id)arg1;
- (long long)uniqueIdentifier;

@end
