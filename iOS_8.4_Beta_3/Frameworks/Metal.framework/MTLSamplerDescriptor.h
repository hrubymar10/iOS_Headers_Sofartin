/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLSamplerDescriptor : NSObject <NSCopying> {
    struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; } *_private;
}

@property(assign,copy) NSString * label;
@property(assign,readwrite) float lodMaxClamp;
@property(assign,readwrite) float lodMinClamp;
@property(assign,readwrite) unsigned long long magFilter;
@property(assign,readwrite) unsigned long long maxAnisotropy;
@property(assign,readwrite) unsigned long long minFilter;
@property(assign,readwrite) unsigned long long mipFilter;
@property(assign,readwrite) bool normalizedCoordinates;
@property(assign,readwrite) unsigned long long rAddressMode;
@property(assign,readwrite) unsigned long long sAddressMode;
@property(assign,readwrite) unsigned long long tAddressMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (const struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; }*)descriptorPrivate;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (float)lodBias;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (bool)normalizedCoordinates;
- (unsigned long long)rAddressMode;
- (unsigned long long)sAddressMode;
- (void)setLabel:(id)arg1;
- (void)setLodBias:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(bool)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (unsigned long long)tAddressMode;

@end
