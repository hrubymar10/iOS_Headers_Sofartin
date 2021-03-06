/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement {
    long long _entryListElementType;
    bool _indexBarHiddenWhenEmpty;
    long long _minimumEntityCount;
    NSString *_targetIndexBarEntryID;
}

@property(assign,copy) NSArray * childIndexBarEntryElements;
@property(assign,readonly) long long entryListElementType;
@property(getter=isIndexBarHiddenWhenEmpty,assign,readonly) bool indexBarHiddenWhenEmpty;
@property(assign,readonly) long long minimumEntityCount;
@property(assign,copy) NSString * targetIndexBarEntryID;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childIndexBarEntryElements;
- (long long)entryListElementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isIndexBarHiddenWhenEmpty;
- (long long)minimumEntityCount;
- (id)targetIndexBarEntryID;

@end
