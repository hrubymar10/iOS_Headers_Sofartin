/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying> {
    struct MTLRenderPipelineAttachmentDescriptorPrivate { 
        union { 
            struct { 
                unsigned int blendingEnabled : 1; 
                unsigned int rgbBlendOperation : 3; 
                unsigned int alphaBlendOperation : 3; 
                unsigned int sourceRGBBlendFactor : 4; 
                unsigned int sourceAlphaBlendFactor : 4; 
                unsigned int destinationRGBBlendFactor : 4; 
                unsigned int destinationAlphaBlendFactor : 4; 
                unsigned int writeMask : 4; 
                unsigned int logicOp : 4; 
                unsigned int logicOpEnabled : 1; 
                unsigned int pixelFormat; 
            } ; 
            struct { 
                unsigned long long hash; 
            } ; 
        } ; 
    } _private;
}

@property (nonatomic) unsigned long long alphaBlendOperation;
@property (getter=isBlendingEnabled, nonatomic) bool blendingEnabled;
@property (nonatomic) unsigned long long destinationAlphaBlendFactor;
@property (nonatomic) unsigned long long destinationRGBBlendFactor;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long rgbBlendOperation;
@property (nonatomic) unsigned long long sourceAlphaBlendFactor;
@property (nonatomic) unsigned long long sourceRGBBlendFactor;
@property (nonatomic) unsigned long long writeMask;

- (id).cxx_construct;
- (const struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 3; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 4; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; unsigned int x_1_2_8 : 4; unsigned int x_1_2_9 : 4; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11; } x_1_1_1; struct { unsigned long long x_2_2_1; } x_1_1_2; } x1; }*)_descriptorPrivate;
- (unsigned long long)alphaBlendOperation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)destinationAlphaBlendFactor;
- (unsigned long long)destinationRGBBlendFactor;
- (unsigned long long)hash;
- (id)init;
- (bool)isBlendingEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pixelFormat;
- (unsigned long long)rgbBlendOperation;
- (void)setAlphaBlendOperation:(unsigned long long)arg1;
- (void)setBlendingEnabled:(bool)arg1;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setRgbBlendOperation:(unsigned long long)arg1;
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;
- (void)setWriteMask:(unsigned long long)arg1;
- (unsigned long long)sourceAlphaBlendFactor;
- (unsigned long long)sourceRGBBlendFactor;
- (unsigned long long)writeMask;

@end
