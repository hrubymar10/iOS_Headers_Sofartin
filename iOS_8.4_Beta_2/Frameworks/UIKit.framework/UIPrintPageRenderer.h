/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPageRenderer : NSObject {
    double _footerHeight;
    double _headerHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _paperRect;
    struct CGContext { } *_printContext;
    NSMutableArray *_printFormatters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _printableRect;
}

@property(assign,readwrite) double footerHeight;
@property(assign,readwrite) double headerHeight;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperRect;
@property(assign,copy) NSArray * printFormatters;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } printableRect;

- (void)_drawPage:(long long)arg1;
- (void)_endPrintContext:(id)arg1 success:(bool)arg2;
- (long long)_maxFormatterPage;
- (void)_removePrintFormatter:(id)arg1;
- (bool)_startPrintContext:(id)arg1 printSettings:(id)arg2;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2;
- (void)dealloc;
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2;
- (double)footerHeight;
- (double)headerHeight;
- (long long)numberOfPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperRect;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)printFormatters;
- (id)printFormattersForPageAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;
- (void)setFooterHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setPaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrintFormatters:(id)arg1;
- (void)setPrintableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
