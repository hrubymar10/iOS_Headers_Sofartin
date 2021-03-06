/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBLayerHost : CALayerHost {
    double _rotation;
    double _scale;
    struct CGPoint { 
        double x; 
        double y; 
    } _translation;
    FBWindowContext *_windowContext;
}

@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic, readonly, retain) FBWindowContext *windowContext;

- (void)dealloc;
- (id)description;
- (id)initWithWindowContext:(id)arg1;
- (double)rotation;
- (double)scale;
- (void)setDebug:(bool)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;
- (id)windowContext;

@end
