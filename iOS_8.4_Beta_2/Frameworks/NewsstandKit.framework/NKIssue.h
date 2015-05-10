/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
 */

@interface NKIssue : NSObject {
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSDate *_date;
    NSString *_directory;
    bool _foundContent;
    bool _isDecodingValid;
    NKLibrary *_library;
    NSString *_name;
    NSMutableSet *_resolvedAssets;
}

@property(assign,copy) NSURL * contentURL;
@property(assign,copy) NSDate * date;
@property(assign,copy) NSString * directory;
@property(assign,copy) NSArray * downloadingAssets;
@property(assign,copy) NSString * name;
@property(assign,readonly) long long status;

- (void)_assetChanged:(id)arg1;
- (id)_assetsForRequest:(id)arg1;
- (void)_cleanupAsset:(id)arg1;
- (id)_commonInit;
- (id)_directory;
- (id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3;
- (bool)_isDecodingValid;
- (id)_library;
- (void)_markAssetAsResolved:(id)arg1;
- (void)_setLibrary:(id)arg1;
- (id)addAssetWithRequest:(id)arg1;
- (id)contentURL;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)directory;
- (id)downloadingAssets;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setDate:(id)arg1;
- (void)setDirectory:(id)arg1;
- (void)setName:(id)arg1;
- (long long)status;

@end
