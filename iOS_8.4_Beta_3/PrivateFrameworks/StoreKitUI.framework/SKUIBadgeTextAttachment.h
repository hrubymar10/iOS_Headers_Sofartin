/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying> {
    NSObject<OS_dispatch_semaphore> *_imageLoadingSemaphore;
    NSURL *_imageURL;
}

@property(assign,readonly) struct CGSize { double x1; double x2; } badgeSize;
@property(assign,retain) NSObject<OS_dispatch_semaphore> * imageLoadingSemaphore;
@property(assign,readonly) NSURL * imageURL;

- (void).cxx_destruct;
- (void)_ensureImageIsLoaded;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;
- (struct CGSize { double x1; double x2; })badgeSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)imageLoadingSemaphore;
- (id)imageURL;
- (id)initWithViewElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImageLoadingSemaphore:(id)arg1;

@end