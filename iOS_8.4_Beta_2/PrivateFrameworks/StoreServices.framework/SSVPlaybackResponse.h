/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackResponse : NSObject {
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_urlResponse;
}

@property(assign,readonly) NSHTTPURLResponse * URLResponse;
@property(assign,readonly) NSArray * items;
@property(assign,copy) NSDictionary * responseDictionary;

- (void).cxx_destruct;
- (id)URLResponse;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (id)initWithDictionary:(id)arg1 URLResponse:(id)arg2;
- (id)itemForItemIdentifier:(id)arg1;
- (id)items;
- (id)responseDictionary;

@end
