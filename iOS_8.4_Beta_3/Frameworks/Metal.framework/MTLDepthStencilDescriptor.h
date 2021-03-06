/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDepthStencilDescriptor : NSObject <NSCopying> {
    struct MTLDepthStencilDescriptorPrivate { 
        MTLStencilDescriptor *frontFaceStencil; 
        MTLStencilDescriptor *backFaceStencil; 
        unsigned long long depthCompareFunction; 
        bool depthWriteEnabled; 
        NSString *label; 
    } _private;
}

@property (nonatomic, copy) MTLStencilDescriptor *backFaceStencil;
@property (nonatomic) unsigned long long depthCompareFunction;
@property (getter=isDepthWriteEnabled, nonatomic) bool depthWriteEnabled;
@property (nonatomic, copy) MTLStencilDescriptor *frontFaceStencil;
@property (nonatomic, copy) NSString *label;

- (id)backFaceStencil;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthCompareFunction;
- (struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned long long x3; bool x4; id x5; }*)depthStencilPrivate;
- (id)description;
- (id)frontFaceStencil;
- (unsigned long long)hash;
- (id)init;
- (bool)isDepthWriteEnabled;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setBackFaceStencil:(id)arg1;
- (void)setDepthCompareFunction:(unsigned long long)arg1;
- (void)setDepthWriteEnabled:(bool)arg1;
- (void)setFrontFaceStencil:(id)arg1;
- (void)setLabel:(id)arg1;

@end
