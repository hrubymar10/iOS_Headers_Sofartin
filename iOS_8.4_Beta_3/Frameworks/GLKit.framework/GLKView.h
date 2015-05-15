/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKView : UIView <NSCoding> {
    EAGLContext *_context;
    <GLKViewDelegate> *_delegate;
    unsigned int _depthRenderbuffer;
    unsigned int _depthStencilRenderbuffer;
    int (*_drawRectIMP;
    int _drawableColorFormat;
    int _drawableDepthFormat;
    long long _drawableHeight;
    int _drawableMultisample;
    NSMutableDictionary *_drawableProperties;
    int _drawableStencilFormat;
    long long _drawableWidth;
    bool _enableSetNeedsDisplay;
    bool _inDraw;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _resolveFramebuffer;
    bool _shouldDeleteFramebuffer;
    unsigned int _stencilRenderbuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _viewBounds;
    double _viewContentScaleFactor;
}

@property (nonatomic, retain) EAGLContext *context;
@property (nonatomic) <GLKViewDelegate> *delegate;
@property (nonatomic) unsigned int depthRenderbuffer;
@property (nonatomic) unsigned int depthStencilRenderbuffer;
@property (nonatomic) int (*drawRectIMP;
@property (nonatomic) int drawableColorFormat;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic, readonly) long long drawableHeight;
@property (nonatomic) int drawableMultisample;
@property (nonatomic, retain) NSMutableDictionary *drawableProperties;
@property (nonatomic) int drawableStencilFormat;
@property (nonatomic, readonly) long long drawableWidth;
@property (nonatomic) bool enableSetNeedsDisplay;
@property (nonatomic) bool inDraw;
@property (nonatomic) unsigned int multisampleColorRenderbuffer;
@property (nonatomic) unsigned int multisampleFramebuffer;
@property (nonatomic) unsigned int resolveColorRenderbuffer;
@property (nonatomic) unsigned int resolveFramebuffer;
@property (nonatomic) bool shouldDeleteFramebuffer;
@property (readonly) UIImage *snapshot;
@property (nonatomic) unsigned int stencilRenderbuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewBounds;
@property (nonatomic) double viewContentScaleFactor;

+ (Class)layerClass;

- (bool)_canDrawContent;
- (bool)_controlsOwnScaleFactor;
- (void)_createFramebuffer;
- (void)_deleteFramebuffer;
- (void)_display:(bool)arg1;
- (void)_initCommon;
- (bool)_presentFramebuffer;
- (void)_resolveAndDiscard;
- (void)_setFramebuffer:(bool*)arg1;
- (void)bindDrawable;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)deleteDrawable;
- (unsigned int)depthRenderbuffer;
- (unsigned int)depthStencilRenderbuffer;
- (void)display;
- (void)displayLayer:(id)arg1;
- (int (*)drawRectIMP;
- (int)drawableColorFormat;
- (int)drawableDepthFormat;
- (long long)drawableHeight;
- (int)drawableMultisample;
- (id)drawableProperties;
- (int)drawableStencilFormat;
- (long long)drawableWidth;
- (bool)enableSetNeedsDisplay;
- (void)encodeWithCoder:(id)arg1;
- (bool)inDraw;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)layoutSubviews;
- (unsigned int)multisampleColorRenderbuffer;
- (unsigned int)multisampleFramebuffer;
- (unsigned int)resolveColorRenderbuffer;
- (unsigned int)resolveFramebuffer;
- (void)setContentScaleFactor:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthRenderbuffer:(unsigned int)arg1;
- (void)setDepthStencilRenderbuffer:(unsigned int)arg1;
- (void)setDrawRectIMP:(int (*)arg1;
- (void)setDrawableColorFormat:(int)arg1;
- (void)setDrawableDepthFormat:(int)arg1;
- (void)setDrawableMultisample:(int)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setDrawableStencilFormat:(int)arg1;
- (void)setEnableSetNeedsDisplay:(bool)arg1;
- (void)setInDraw:(bool)arg1;
- (void)setMultisampleColorRenderbuffer:(unsigned int)arg1;
- (void)setMultisampleFramebuffer:(unsigned int)arg1;
- (void)setResolveColorRenderbuffer:(unsigned int)arg1;
- (void)setResolveFramebuffer:(unsigned int)arg1;
- (void)setShouldDeleteFramebuffer:(bool)arg1;
- (void)setStencilRenderbuffer:(unsigned int)arg1;
- (void)setViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewContentScaleFactor:(double)arg1;
- (bool)shouldDeleteFramebuffer;
- (id)snapshot;
- (unsigned int)stencilRenderbuffer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewBounds;
- (double)viewContentScaleFactor;

@end
