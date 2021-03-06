/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {
    MTLToolsPointerArray *_textures;
}

@property(assign,readonly) unsigned long long cpuCacheMode;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <MTLDevice> * device;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * label;
@property(assign,readonly) unsigned long long length;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MTLToolsPointerArray * textures;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void*)contents;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)length;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)textures;

@end
