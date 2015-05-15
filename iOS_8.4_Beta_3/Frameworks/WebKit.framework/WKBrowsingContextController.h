/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextController : NSObject {
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > { 
        id m_weakReference; 
    } _historyDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > { 
        id m_weakReference; 
    } _loadDelegate;
    unsigned long long _observedRenderingProgressEvents;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    } _page;
    struct unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> > { 
        struct __compressed_pair<PageLoadStateObserver *, std::__1::default_delete<PageLoadStateObserver> > { 
            struct PageLoadStateObserver {} *__first_; 
        } __ptr_; 
    } _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > { 
        id m_weakReference; 
    } _policyDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    } _remoteObjectRegistry;
}

@property(assign,readonly) struct OpaqueWKPage { }* _pageRef;
@property(assign,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry;
@property(assign,readonly) NSURL * activeURL;
@property(assign,copy) NSString * applicationNameForUserAgent;
@property(assign,readonly) WKBackForwardList * backForwardList;
@property(assign,readonly) bool canGoBack;
@property(assign,readonly) bool canGoForward;
@property(assign,readonly) NSArray * certificateChain;
@property(assign,readonly) NSURL * committedURL;
@property(assign,copy) NSString * customUserAgent;
@property(assign,readonly) double estimatedProgress;
@property(assign,readwrite) double gapBetweenPages;
@property(assign,readonly) WKBrowsingContextHandle * handle;
@property(assign,readonly) bool hasOnlySecureContent;
@property(assign,readwrite) <WKBrowsingContextHistoryDelegate> * historyDelegate;
@property(assign,readwrite) <WKBrowsingContextLoadDelegate> * loadDelegate;
@property(getter=isLoading,assign,readonly) bool loading;
@property(assign,readwrite) unsigned long long observedRenderingProgressEvents;
@property(assign,readonly) unsigned long long pageCount;
@property(assign,readwrite) double pageLength;
@property(assign,readwrite) double pageZoom;
@property(assign,readwrite) bool paginationBehavesLikeColumns;
@property(assign,readwrite) unsigned long long paginationMode;
@property(assign,readwrite) <WKBrowsingContextPolicyDelegate> * policyDelegate;
@property(assign,readonly) int processIdentifier;
@property(assign,readonly) NSURL * provisionalURL;
@property(assign,readwrite) double textZoom;
@property(assign,readonly) NSString * title;
@property(assign,readonly) NSURL * unreachableURL;

+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage { }*)arg1;
+ (id)customSchemes;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithPageRef:(struct OpaqueWKPage { }*)arg1;
- (struct OpaqueWKPage { }*)_pageRef;
- (id)_remoteObjectRegistry;
- (id)activeURL;
- (id)applicationNameForUserAgent;
- (id)backForwardList;
- (bool)canGoBack;
- (bool)canGoForward;
- (id)certificateChain;
- (id)committedURL;
- (id)customUserAgent;
- (void)dealloc;
- (double)estimatedProgress;
- (double)gapBetweenPages;
- (void)goBack;
- (void)goForward;
- (void)goToBackForwardListItem:(id)arg1;
- (id)handle;
- (bool)hasOnlySecureContent;
- (id)historyDelegate;
- (bool)isLoading;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (id)loadDelegate;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (unsigned long long)observedRenderingProgressEvents;
- (unsigned long long)pageCount;
- (double)pageLength;
- (double)pageZoom;
- (bool)paginationBehavesLikeColumns;
- (unsigned long long)paginationMode;
- (id)policyDelegate;
- (int)processIdentifier;
- (id)provisionalURL;
- (void)reload;
- (void)reloadFromOrigin;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setGapBetweenPages:(double)arg1;
- (void)setHistoryDelegate:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setObservedRenderingProgressEvents:(unsigned long long)arg1;
- (void)setPageLength:(double)arg1;
- (void)setPageZoom:(double)arg1;
- (void)setPaginationBehavesLikeColumns:(bool)arg1;
- (void)setPaginationMode:(unsigned long long)arg1;
- (void)setPolicyDelegate:(id)arg1;
- (void)setTextZoom:(double)arg1;
- (void)stopLoading;
- (double)textZoom;
- (id)title;
- (id)unreachableURL;

@end