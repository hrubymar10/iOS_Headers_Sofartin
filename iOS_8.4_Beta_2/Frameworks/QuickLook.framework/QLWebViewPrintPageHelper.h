/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewPrintPageHelper : NSObject <QLRemotePrintPageHelper> {
    UIWebBrowserView *_browserView;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize { 
        double width; 
        double height; 
    } _printableSize;
    NSURLRequest *_request;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) QLPreviewConverter * previewConverter;
@property(assign,readwrite) struct CGSize { double x1; double x2; } printableSize;
@property(assign,readonly) Class superclass;

+ (bool)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void)_waitForPreview;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(bool*)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)previewConverter;
- (struct CGSize { double x1; double x2; })printableSize;
- (void)setPreviewConverter:(id)arg1;
- (void)setPrintableSize:(struct CGSize { double x1; double x2; })arg1;

@end