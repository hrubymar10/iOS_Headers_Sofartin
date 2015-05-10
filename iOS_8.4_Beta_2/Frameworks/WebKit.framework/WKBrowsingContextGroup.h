/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroup> { 
        struct type { 
            unsigned char __lx[104]; 
        } data; 
    } _pageGroup;
}

@property(assign,readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(assign,readonly) struct OpaqueWKPageGroup { }* _pageGroupRef;
@property(assign,readwrite) bool allowsJavaScript;
@property(assign,readwrite) bool allowsPlugIns;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool privateBrowsingEnabled;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct OpaqueWKPageGroup { }*)_pageGroupRef;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(bool)arg6;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(bool)arg5;
- (bool)allowsJavaScript;
- (bool)allowsJavaScriptMarkup;
- (bool)allowsPlugIns;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (bool)privateBrowsingEnabled;
- (void)removeAllUserScripts;
- (void)removeAllUserStyleSheets;
- (void)setAllowsJavaScript:(bool)arg1;
- (void)setAllowsJavaScriptMarkup:(bool)arg1;
- (void)setAllowsPlugIns:(bool)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;

@end