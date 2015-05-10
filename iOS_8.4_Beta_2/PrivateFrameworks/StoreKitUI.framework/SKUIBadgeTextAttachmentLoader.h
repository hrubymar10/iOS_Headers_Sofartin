/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)connectStringView:(id)arg1;
- (void)disconnectStringView:(id)arg1;
- (id)initWithResourceLoader:(id)arg1;
- (bool)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3;

@end
