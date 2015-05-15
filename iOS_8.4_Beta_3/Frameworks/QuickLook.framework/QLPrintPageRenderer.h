/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPrintPageRenderer : UIPrintPageRenderer {
    long long _cachedNumberOfPages;
    <QLPrintPageRendererDataSource> *_dataSource;
    long long _numberOfPrintedPages;
    bool _printingDone;
    struct CGSize { 
        double width; 
        double height; 
    } _sizeWhenNumberOfPagesWasCached;
}

@property(assign,readwrite) <QLPrintPageRendererDataSource> * dataSource;

- (id)dataSource;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)init;
- (long long)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)prepareForPrinting;
- (void)setDataSource:(id)arg1;

@end
