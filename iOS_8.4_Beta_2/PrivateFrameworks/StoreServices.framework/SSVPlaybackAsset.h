/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackAsset : NSObject {
    NSDictionary *_assetDictionary;
}

@property(assign,readonly) NSString * URLString;
@property(assign,copy) NSDictionary * assetDictionary;
@property(assign,readonly) NSString * downloadKey;
@property(assign,readonly) NSString * flavor;
@property(assign,readonly) NSArray * sinfs;

- (void).cxx_destruct;
- (id)URLString;
- (id)assetDictionary;
- (id)description;
- (id)downloadKey;
- (id)flavor;
- (unsigned long long)hash;
- (id)initWithAssetDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sinfs;

@end
