/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAnimate : SKAction {
    struct SKCAnimate { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; long long x17; float x18; float x19; float x20; float x21; struct vector<SKTexture *, std::__1::allocator<SKTexture *> > { id *x_22_1_1; id *x_22_1_2; struct __compressed_pair<SKTexture *__strong *, std::__1::allocator<SKTexture *> > { id *x_3_2_1; } x_22_1_3; } x22; double x23; id x24; struct { float x_25_1_1; float x_25_1_2; } x25; bool x26; bool x27; } *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(bool)arg3 restore:(bool)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)setTimePerFrame:(double)arg1;
- (double)timePerFrame;

@end
