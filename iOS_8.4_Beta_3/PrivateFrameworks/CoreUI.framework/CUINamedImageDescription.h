/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageDescription : NSObject {
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _alignmentEdgeInsets;
    int _blendMode;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    int _exifOrientation;
    long long _idiom;
    long long _imageType;
    long long _resizingMode;
    double _scale;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _subtype;
    long long _templateRenderingMode;
}

@property(assign,readwrite) struct { double x1; double x2; double x3; double x4; } alignmentEdgeInsets;
@property(assign,readwrite) int blendMode;
@property(assign,readwrite) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property(assign,readwrite) int exifOrientation;
@property(assign,readwrite) long long idiom;
@property(assign,readwrite) long long imageType;
@property(assign,readwrite) bool isTemplate;
@property(assign,readwrite) long long resizingMode;
@property(assign,readwrite) double scale;
@property(assign,readwrite) long long sizeClassHorizontal;
@property(assign,readwrite) long long sizeClassVertical;
@property(assign,readwrite) long long subtype;
@property(assign,readwrite) long long templateRenderingMode;

- (struct { double x1; double x2; double x3; double x4; })alignmentEdgeInsets;
- (int)blendMode;
- (id)description;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (int)exifOrientation;
- (long long)idiom;
- (long long)imageType;
- (bool)isTemplate;
- (long long)resizingMode;
- (double)scale;
- (void)setAlignmentEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setImageType:(long long)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setResizingMode:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSizeClassHorizontal:(long long)arg1;
- (void)setSizeClassVertical:(long long)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (long long)subtype;
- (long long)templateRenderingMode;

@end