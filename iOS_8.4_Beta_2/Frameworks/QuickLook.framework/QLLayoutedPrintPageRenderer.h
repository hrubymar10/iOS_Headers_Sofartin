/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper {
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (id)_currentNodes;
- (id)_htmlPageXPath;
- (void)dealloc;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(bool*)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
