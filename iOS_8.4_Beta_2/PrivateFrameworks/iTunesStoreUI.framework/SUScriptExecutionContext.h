/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) struct OpaqueJSContext { }* globalExecutionContext;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) id windowScriptObject;

- (void)_cancelLoadOperation;
- (id)_newLoadOperation;
- (id)_webView;
- (void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)dealloc;
- (bool)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)evaluateScriptAtURL:(id)arg1;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (struct OpaqueJSContext { }*)globalExecutionContext;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)parentViewControllerForWebView:(id)arg1;
- (id)windowScriptObject;

@end
