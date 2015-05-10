/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPHighlighter : NSObject {
    CPZone *boundingZone;
    struct CGColor { } *color;
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; } *highlightedStyle;
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; } *style;
    CPTextLine *textLine;
}

@property(assign,readonly) struct CGColor { }* color;
@property(assign,readwrite) struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }* highlightedStyle;
@property(assign,readwrite) struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }* style;

+ (bool)reconstructHighlightFor:(id)arg1;

- (struct CGColor { }*)color;
- (void)highlight;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)highlightedStyle;
- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor { }*)arg3;
- (void)setHighlightedStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)arg1;
- (void)setStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)arg1;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; long doublex_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; long doublex_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)style;

@end
