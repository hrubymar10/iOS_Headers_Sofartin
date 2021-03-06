/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>

- (id)allRepsContainedInGroup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (bool)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)layerClass;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;

@end
