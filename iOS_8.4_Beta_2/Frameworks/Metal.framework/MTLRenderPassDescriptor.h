/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {
    struct MTLRenderPassDescriptorPrivate { 
        MTLRenderPassColorAttachmentDescriptorArray *attachments; 
        <MTLBuffer> *visibilityResultBuffer; 
        bool ditherEnabled; 
    } _private;
}

@property(assign,readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments;
@property(assign,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment;
@property(assign,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment;
@property(assign,retain) <MTLBuffer> * visibilityResultBuffer;

+ (id)renderPassDescriptor;

- (const struct MTLRenderPassDescriptorPrivate { id x1; id x2; bool x3; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)depthAttachment;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setDepthAttachment:(id)arg1;
- (void)setStencilAttachment:(id)arg1;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)stencilAttachment;
- (bool)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3;
- (id)visibilityResultBuffer;

@end
