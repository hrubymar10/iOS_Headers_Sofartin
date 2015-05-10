/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemState : NSObject <NSCopying> {
    unsigned long long _downloadContentFlags;
    NSString *_downloadPhase;
    float _downloadProgress;
    NSNumber *_itemIdentifier;
    unsigned long long _libraryContentFlags;
    long long _mediaCategory;
    unsigned long long _state;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_variantIdentifier;
}

@property(assign,readonly) bool activeStateIsPreview;
@property(assign,readonly) unsigned long long allContentFlags;
@property(assign,readwrite) unsigned long long downloadContentFlags;
@property(assign,copy) NSString * downloadPhase;
@property(assign,readwrite) float downloadProgress;
@property(assign,copy) NSNumber * itemIdentifier;
@property(assign,readwrite) unsigned long long libraryContentFlags;
@property(assign,readwrite) long long mediaCategory;
@property(assign,readwrite) unsigned long long state;
@property(assign,copy) SKUIStoreIdentifier * storeIdentifier;
@property(assign,copy) NSString * variantIdentifier;

- (void).cxx_destruct;
- (bool)activeStateIsPreview;
- (unsigned long long)allContentFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadContentFlags;
- (id)downloadPhase;
- (float)downloadProgress;
- (id)itemIdentifier;
- (unsigned long long)libraryContentFlags;
- (long long)mediaCategory;
- (void)setDownloadContentFlags:(unsigned long long)arg1;
- (void)setDownloadPhase:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLibraryContentFlags:(unsigned long long)arg1;
- (void)setMediaCategory:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (unsigned long long)state;
- (id)storeIdentifier;
- (id)variantIdentifier;

@end
