/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPPage : CPChunk <CPDisposable> {
    void *_layout;
    CPChunk *background;
    NSMutableArray *columnsOnPage;
    float complexity;
    bool contextOwner;
    NSMutableArray *graphicsOnPage;
    bool hasTextLines;
    bool hasZones;
    id hitTest;
    NSMutableArray *imagesOnPage;
    bool isDirty;
    bool isStartOfSection;
    long long maxLayoutZOrder;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } mutex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } pageCropBox;
    int pageNumber;
    struct CPPDFContext { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; unsigned int x6; struct PrimitiveBuffer { void *x_7_1_1; void *x_7_1_2; void *x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; int x_7_1_8; } x7; struct PrimitiveBuffer { void *x_8_1_1; void *x_8_1_2; void *x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned int x_8_1_7; int x_8_1_8; } x8; struct PrimitiveBuffer { void *x_9_1_1; void *x_9_1_2; void *x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned int x_9_1_7; int x_9_1_8; } x9; struct CPPDFClipBuffer { unsigned int x_10_1_1; unsigned int x_10_1_2; unsigned int *x_10_1_3; unsigned int x_10_1_4; } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct __CFDictionary {} *x13; struct CPPDFStyle {} *x14; int *x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; struct CPMultiUnicodes {} *x20; long long x21; long long x22; unsigned int *x23; struct CGPath {} **x24; bool x25; } *pdfContext;
    struct CGPDFPage { } *pdfPage;
    bool reconstructed;
    int rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *textLinesOnPage;
}

+ (void)sortByReadingOrder:(id)arg1;

- (struct CPPDFContext { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; unsigned int x6; struct PrimitiveBuffer { void *x_7_1_1; void *x_7_1_2; void *x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; int x_7_1_8; } x7; struct PrimitiveBuffer { void *x_8_1_1; void *x_8_1_2; void *x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned int x_8_1_7; int x_8_1_8; } x8; struct PrimitiveBuffer { void *x_9_1_1; void *x_9_1_2; void *x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned int x_9_1_7; int x_9_1_8; } x9; struct CPPDFClipBuffer { unsigned int x_10_1_1; unsigned int x_10_1_2; unsigned int *x_10_1_3; unsigned int x_10_1_4; } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct __CFDictionary {} *x13; struct CPPDFStyle {} *x14; int *x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; struct CPMultiUnicodes {} *x20; long long x21; long long x22; unsigned int *x23; struct CGPath {} **x24; bool x25; }*)PDFContext;
- (void)accept:(id)arg1;
- (void)addColumns:(id)arg1;
- (void)addImage:(id)arg1;
- (void)addShape:(id)arg1;
- (id)background;
- (id)bodyZone;
- (id)children;
- (struct CPPDFClipBuffer { unsigned int x1; unsigned int x2; unsigned int *x3; unsigned int x4; }*)clipBuffer;
- (id)columnsOnPage;
- (float)complexity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)graphicsOnPage;
- (bool)hasTextLines;
- (bool)hasZones;
- (id)hitTest;
- (id)imagesOnPage;
- (id)init;
- (id)initWithPDFPage:(struct CGPDFPage { }*)arg1;
- (bool)isStartOfSection;
- (void)layDownObjectsOnPage;
- (void)layDownObjectsOnPageOld;
- (struct CGPDFLayout { }*)layout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageCropBox;
- (int)pageNumber;
- (id)parent;
- (struct CGPDFPage { }*)pdfPage;
- (bool)populatePDFLayout:(struct CGPDFLayout { }*)arg1;
- (void)reconstruct;
- (void)restoreBackGroundObjectToPage;
- (int)rotation;
- (void)setBackground:(id)arg1;
- (unsigned int)setCellPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (void)setComplexity:(float)arg1;
- (unsigned int)setGraphicPositions:(id)arg1 from:(unsigned int)arg2;
- (void)setHasTextLines:(bool)arg1;
- (void)setHasZones:(bool)arg1;
- (void)setIsStartOfSection:(bool)arg1;
- (void)setPDFContext:(struct CPPDFContext { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; unsigned int x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; unsigned int x6; struct PrimitiveBuffer { void *x_7_1_1; void *x_7_1_2; void *x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; int x_7_1_8; } x7; struct PrimitiveBuffer { void *x_8_1_1; void *x_8_1_2; void *x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned int x_8_1_7; int x_8_1_8; } x8; struct PrimitiveBuffer { void *x_9_1_1; void *x_9_1_2; void *x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned int x_9_1_7; int x_9_1_8; } x9; struct CPPDFClipBuffer { unsigned int x_10_1_1; unsigned int x_10_1_2; unsigned int *x_10_1_3; unsigned int x_10_1_4; } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct __CFDictionary {} *x13; struct CPPDFStyle {} *x14; int *x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; struct CPMultiUnicodes {} *x20; long long x21; long long x22; unsigned int *x23; struct CGPath {} **x24; bool x25; }*)arg1;
- (void)setPageCropBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPageNumber:(int)arg1;
- (unsigned int)setPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setReadingOrder:(id)arg1 from:(unsigned int)arg2;
- (void)setRotation:(int)arg1;
- (id)shapesOnPage;
- (void)sortByReadingOrder;
- (id)textLinesOnPage;
- (unsigned int)traverse:(id)arg1 ordinal:(unsigned int)arg2;

@end
