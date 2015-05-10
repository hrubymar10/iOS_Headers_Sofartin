/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATextLayer : CALayer {
    struct CATextLayerPrivate { } *_state;
}

@property(assign,copy) NSString * alignmentMode;
@property(assign,readwrite) bool allowsFontSubpixelQuantization;
@property(assign,readwrite) void* font;
@property(assign,readwrite) double fontSize;
@property(assign,readwrite) struct CGColor { }* foregroundColor;
@property(assign,copy) id string;
@property(assign,copy) NSString * truncationMode;
@property(assign,copy) id truncationString;
@property(getter=isWrapped,assign,readwrite) bool wrapped;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (bool)needsDisplayForKey:(id)arg1;

- (void)_applyLinesToFunction:(int (*)arg1 info:(void*)arg2;
- (id)_createStringDict;
- (struct __CTLine { }*)_createTruncationToken;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (id)alignmentMode;
- (bool)allowsFontSubpixelQuantization;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void*)font;
- (double)fontSize;
- (struct CGColor { }*)foregroundColor;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isWrapped;
- (void)setAlignmentMode:(id)arg1;
- (void)setAllowsFontSubpixelQuantization:(bool)arg1;
- (void)setFont:(void*)arg1;
- (void)setFontSize:(double)arg1;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setString:(id)arg1;
- (void)setTruncationMode:(id)arg1;
- (void)setTruncationString:(id)arg1;
- (void)setWrapped:(bool)arg1;
- (id)string;
- (id)truncationMode;
- (id)truncationString;
- (bool)wrapped;

@end
