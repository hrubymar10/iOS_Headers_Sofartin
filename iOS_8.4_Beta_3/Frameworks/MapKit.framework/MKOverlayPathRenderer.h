/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayPathRenderer : MKOverlayRenderer {
    UIColor *_fillColor;
    int _lineCap;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
    int _lineJoin;
    double _lineWidth;
    double _miterLimit;
    struct CGPath { } *_path;
    UIColor *_strokeColor;
}

@property(assign,retain) UIColor * fillColor;
@property(assign,readwrite) int lineCap;
@property(assign,copy) NSArray * lineDashPattern;
@property(assign,readwrite) double lineDashPhase;
@property(assign,readwrite) int lineJoin;
@property(assign,readwrite) double lineWidth;
@property(assign,readwrite) double miterLimit;
@property(assign,readwrite) struct CGPath { }* path;
@property(assign,retain) UIColor * strokeColor;

- (void).cxx_destruct;
- (void)applyFillPropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext { }*)arg1 atZoomScale:(double)arg2;
- (void)createPath;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)fillColor;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)invalidatePath;
- (int)lineCap;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (int)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (void)setFillColor:(id)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

@end
