/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICompletion : NSObject <SKUICacheCoding> {
    NSString *_URLString;
    NSString *_alternateTitle;
    NSString *_title;
}

@property(assign,readonly) NSString * URLString;
@property(assign,readonly) NSString * alternateTitle;
@property(assign,readonly) NSMutableDictionary * cacheRepresentation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * title;

- (void).cxx_destruct;
- (id)URLString;
- (id)alternateTitle;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionDictionary:(id)arg1;
- (id)title;

@end
