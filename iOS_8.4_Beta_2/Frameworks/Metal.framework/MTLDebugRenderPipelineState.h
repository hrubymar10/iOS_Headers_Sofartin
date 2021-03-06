/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
}

@property(assign,readonly) MTLRenderPipelineDescriptor * descriptor;
@property(assign,readonly) MTLRenderPipelineReflection * reflection;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (id)getParameter:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)reflection;

@end
