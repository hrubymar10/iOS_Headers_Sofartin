/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIArtwork : NSObject <SKUICacheCoding> {
    long long _height;
    NSURL *_url;
    NSString *_urlString;
    long long _width;
}

@property (nonatomic, readonly) NSURL *URL;
@property (getter=_lookupDictionary, nonatomic, readonly) NSDictionary *_lookupDictionary;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long width;

- (void).cxx_destruct;
- (id)URL;
- (id)_lookupDictionary;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)height;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)width;

@end
