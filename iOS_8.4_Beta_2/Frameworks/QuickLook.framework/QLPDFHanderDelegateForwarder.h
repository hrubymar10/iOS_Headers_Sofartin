/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPDFHanderDelegateForwarder : NSObject <UIWebPDFViewHandlerDelegate> {
    <NSObject><UIWebPDFViewHandlerDelegate> *_delegate;
    UIWebView *_webView;
}

@property(assign,readwrite) <NSObject><UIWebPDFViewHandlerDelegate> * delegate;
@property(assign,readwrite) UIWebView * webView;

- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)webView;

@end
