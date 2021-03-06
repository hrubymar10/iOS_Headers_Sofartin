/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    } _list;
}

@property(assign,readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(assign,readonly) WKBackForwardListItem * backItem;
@property(assign,copy) NSArray * backList;
@property(assign,readonly) WKBackForwardListItem * currentItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) WKBackForwardListItem * forwardItem;
@property(assign,copy) NSArray * forwardList;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_clear;
- (void)_removeAllItems;
- (id)backItem;
- (id)backList;
- (id)currentItem;
- (void)dealloc;
- (id)forwardItem;
- (id)forwardList;
- (id)itemAtIndex:(long long)arg1;

@end
