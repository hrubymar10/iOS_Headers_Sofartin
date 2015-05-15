/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying> {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArray *attachments; 
        unsigned long long rtBlendDescHash[8]; 
        unsigned long long depthAttachmentPixelFormat; 
        unsigned long long stencilAttachmentPixelFormat; 
        unsigned long long sampleCount; 
        unsigned long long sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        union { 
            unsigned int miscHash; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int pad : 29; 
            } ; 
        } ; 
        NSString *label; 
        unsigned long long labelHash; 
        unsigned long long vertexFunctionHash; 
        unsigned long long fragmentFunctionHash; 
        unsigned long long vertexDescriptorHash; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptor *vertexDescriptor; 
    } _private;
}

@property(getter=isAlphaToCoverageEnabled,assign,readwrite) bool alphaToCoverageEnabled;
@property(getter=isAlphaToOneEnabled,assign,readwrite) bool alphaToOneEnabled;
@property(assign,readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments;
@property(assign,readwrite) unsigned long long depthAttachmentPixelFormat;
@property(assign,retain) <MTLFunction> * fragmentFunction;
@property(assign,copy) NSString * label;
@property(getter=isRasterizationEnabled,assign,readwrite) bool rasterizationEnabled;
@property(assign,readwrite) unsigned long long sampleCount;
@property(assign,readwrite) unsigned long long stencilAttachmentPixelFormat;
@property(assign,copy) MTLVertexDescriptor * vertexDescriptor;
@property(assign,retain) <MTLFunction> * vertexFunction;

- (id).cxx_construct;
- (const struct MTLRenderPipelineDescriptorPrivate { id x1; unsigned long long x2[8]; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; union { unsigned int x_7_1_1; float x_7_1_2; } x7; union { unsigned int x_8_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 29; } x_8_1_2; } x8; id x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; id x14; id x15; id x16; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)description;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (id)fragmentFunction;
- (unsigned long long)hash;
- (id)init;
- (bool)isAlphaToCoverageEnabled;
- (bool)isAlphaToOneEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isRasterizationEnabled;
- (id)label;
- (void)reset;
- (unsigned long long)sampleCount;
- (float)sampleCoverage;
- (unsigned long long)sampleMask;
- (id)serializeFragmentData;
- (id)serializedVertexData;
- (void)setAlphaToCoverageEnabled:(bool)arg1;
- (void)setAlphaToOneEnabled:(bool)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRasterizationEnabled:(bool)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleMask:(unsigned long long)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexFunction:(id)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)validateWithDevice:(id)arg1;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end