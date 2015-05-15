/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationResponse : NSObject {
    bool _canShowMIMEType;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _frame;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    } _request;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    } _response;
}

@property(assign,readonly) WKFrameInfo * _frame;
@property(assign,readonly) NSURLRequest * _request;
@property(assign,readwrite) bool canShowMIMEType;
@property(getter=isForMainFrame,assign,readonly) bool forMainFrame;
@property(assign,copy) NSURLResponse * response;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_frame;
- (id)_request;
- (bool)canShowMIMEType;
- (id)description;
- (bool)isForMainFrame;
- (id)response;
- (void)setCanShowMIMEType:(bool)arg1;
- (void)setResponse:(id)arg1;

@end