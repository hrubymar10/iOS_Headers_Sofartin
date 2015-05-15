/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSArray : NSArray <WKObject> {
    struct ObjectStorage<API::Array> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    } _array;
}

@property(assign,readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;

@end