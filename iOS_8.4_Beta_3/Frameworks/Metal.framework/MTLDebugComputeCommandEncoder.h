/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    MTLDebugFunctionArgument *_buffers;
    <MTLDevice> *_cachedDevice;
    <MTLComputePipelineState> *_computePipelineState;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; float x20; float x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; } *_limits;
    MTLDebugFunctionArgument *_samplers;
    MTLDebugFunctionArgument *_textures;
    MTLDebugFunctionArgument *_threadgroupMemoryLengths;
    bool canDealloc;
    bool canEndEncoding;
    bool canSetComputePipelineState;
    bool hasEndEncoding;
    bool hasSetComputePipelineState;
}

@property(assign,readonly) <MTLDevice> * cachedDevice;
@property(assign,readonly) <MTLComputePipelineState> * computePipelineState;

- (void).cxx_destruct;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (id)cachedDevice;
- (id)computePipelineState;
- (void)dealloc;
- (id)description;
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)endEncoding;
- (void)executeBarrier;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
