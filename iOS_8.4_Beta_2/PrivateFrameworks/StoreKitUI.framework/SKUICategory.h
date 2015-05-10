/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategory : NSObject {
    SKUIArtworkList *_artworkList;
    long long _categoryIdentifier;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) SKUIArtworkList * artworkList;
@property(assign,readonly) long long categoryIdentifier;
@property(assign,readonly) NSArray * children;
@property(assign,readonly) NSString * name;
@property(assign,readonly) NSString * parentLabel;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkList;
- (long long)categoryIdentifier;
- (id)children;
- (bool)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;
- (id)name;
- (id)parentLabel;
- (id)subcategoryContainingURL:(id)arg1;

@end