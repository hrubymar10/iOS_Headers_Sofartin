/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSpriteNode : SKNode {
    SKLightNode *_light;
    bool _shouldRepeatTexture;
}

@property(assign,readwrite) struct CGPoint { double x1; double x2; } anchorPoint;
@property(assign,readwrite) long long blendMode;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centerRect;
@property(assign,retain) UIColor * color;
@property(assign,readwrite) double colorBlendFactor;
@property(assign,readwrite) unsigned int lightingBitMask;
@property(assign,retain) SKTexture * normalTexture;
@property(assign,readwrite) struct CGSize { double x1; double x2; } repeatTextureSize;
@property(assign,retain) SKShader * shader;
@property(assign,readwrite) unsigned int shadowCastBitMask;
@property(assign,readwrite) unsigned int shadowedBitMask;
@property(assign,readwrite) bool shouldRepeatTexture;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;
@property(assign,retain) SKTexture * texture;

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(bool)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)_copyImageData;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (long long)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect;
- (id)color;
- (double)colorBlendFactor;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqualToNode:(id)arg1;
- (unsigned int)lightingBitMask;
- (id)normalTexture;
- (bool)repeatTexture;
- (struct CGSize { double x1; double x2; })repeatTextureSize;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(double)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (void)setNormalTexture:(id)arg1;
- (void)setRepeatTexture:(bool)arg1;
- (void)setRepeatTextureSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShader:(id)arg1;
- (void)setShadowCastBitMask:(unsigned int)arg1;
- (void)setShadowedBitMask:(unsigned int)arg1;
- (void)setShouldRepeatTexture:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTexture:(id)arg1;
- (id)shader;
- (unsigned int)shadowCastBitMask;
- (unsigned int)shadowedBitMask;
- (bool)shouldRepeatTexture;
- (struct CGSize { double x1; double x2; })size;
- (id)texture;

@end
