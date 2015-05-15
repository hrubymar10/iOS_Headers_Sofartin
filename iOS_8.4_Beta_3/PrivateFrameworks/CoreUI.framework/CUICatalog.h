/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICatalog : NSObject {
    unsigned long long _storageRef;
}

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
+ (id)defaultUICatalog;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (id)systemUICatalog;

- (id)_baseKeyForName:(id)arg1;
- (bool)_doStyledQuartzDrawingInContext:(struct CGContext { }*)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(id)arg5;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 memoryClass:(unsigned long long)arg7 graphicsClass:(unsigned long long)arg8;
- (unsigned long long)_themeRef;
- (id)_themeStore;
- (id)allImageNames;
- (long long)artVariantIDOrZero;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (bool)canGetShapeEffectRenditionWithKey:(id)arg1;
- (void)clearCachedImageResources;
- (id)dataWithName:(id)arg1;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5;
- (id)debugDescription;
- (bool)drawGlyphs:(const unsigned short*)arg1 atPositions:(const struct CGPoint { double x1; double x2; }*)arg2 inContext:(struct CGContext { }*)arg3 withFont:(struct __CTFont { }*)arg4 count:(unsigned long long)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor { }*)arg8;
- (struct CGColor { }*)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (bool)fillStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (bool)fillStyledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (bool)hasStylePresetWithName:(id)arg1;
- (bool)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (id)imageByStylingImage:(struct CGImage { }*)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor { }*)arg4 scale:(double)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)imagesWithName:(id)arg1;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (struct CGPDFDocument { }*)pdfDocumentWithName:(id)arg1;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5;
- (bool)requiredDrawOfUnstyledGlyphs:(const unsigned short*)arg1 atPositions:(const struct CGPoint { double x1; double x2; }*)arg2 inContext:(struct CGContext { }*)arg3 withFont:(struct __CTFont { }*)arg4 count:(unsigned long long)arg5;
- (bool)strokeStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (struct { double x1; double x2; double x3; double x4; })styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3 scale:(double)arg4;

@end
