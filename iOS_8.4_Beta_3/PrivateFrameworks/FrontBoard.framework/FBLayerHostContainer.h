/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBLayerHostContainer : CALayer {
    double _rotation;
    double _scale;
    struct CGPoint { 
        double x; 
        double y; 
    } _translation;
}

@property(assign,readwrite) double rotation;
@property(assign,readwrite) double scale;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } translation;

- (id)description;
- (double)rotation;
- (double)scale;
- (void)setDebug:(bool)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;

@end