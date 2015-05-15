/* Generated by RuntimeBrowser.
 */

@protocol MTLDeviceSPI <MTLDevice>

@required

+ (void)registerDevices;

- (unsigned long long)doubleFPConfig;
- (unsigned long long)featureProfile;
- (unsigned long long)halfFPConfig;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; float x20; float x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; }*)limits;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupSize;
- (unsigned long long)maxComputeThreadsPerThreadgroup;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFramebufferStorageBits;
- (unsigned long long)maxInterpolants;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxSampleCount;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxVisibilityQueryOffset;
- (bool)metalAssertionsEnabled;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (void)setMetalAssertionsEnabled:(bool)arg1;
- (unsigned long long)singleFPConfig;

@optional

- (bool)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(id)arg2;
- (<MTLComputePipelineState> *)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (<MTLComputePipelineState> *)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)setShaderDebugInfoCaching:(bool)arg1;
- (bool)shaderDebugInfoCaching;
- (void)unmapShaderSampleBuffer;

@end
