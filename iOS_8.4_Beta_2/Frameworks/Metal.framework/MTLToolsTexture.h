/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {
    MTLToolsPointerArray *_views;
}

@property(assign,readonly) unsigned long long arrayLength;
@property(assign,readonly) MTLResourceAllocationInfo * cachedAllocationInfo;
@property(assign,readonly) unsigned long long cpuCacheMode;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) unsigned long long depth;
@property(assign,copy) NSString * description;
@property(assign,readonly) <MTLDevice> * device;
@property(getter=isFramebufferOnly,assign,readonly) bool framebufferOnly;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long height;
@property(assign,readonly) struct __IOSurface { }* iosurface;
@property(assign,readonly) unsigned long long iosurfacePlane;
@property(assign,readonly) bool isDrawable;
@property(assign,copy) NSString * label;
@property(assign,readonly) unsigned long long mipmapLevelCount;
@property(assign,readonly) unsigned long long numFaces;
@property(assign,readonly) unsigned long long pixelFormat;
@property(assign,readwrite) int responsibleProcess;
@property(assign,readonly) <MTLResource> * rootResource;
@property(assign,readonly) unsigned long long rotation;
@property(assign,readonly) unsigned long long sampleCount;
@property(assign,readonly) MTLResourceAllocationInfo * sharedAllocationInfo;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long textureType;
@property(assign,readonly) MTLToolsPointerArray * views;
@property(assign,readonly) unsigned long long width;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (unsigned long long)arrayLength;
- (void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (unsigned long long)depth;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (unsigned long long)height;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)iosurfacePlane;
- (bool)isDrawable;
- (bool)isFramebufferOnly;
- (unsigned long long)mipmapLevelCount;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (unsigned long long)numFaces;
- (unsigned long long)pixelFormat;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)rootResource;
- (unsigned long long)rotation;
- (unsigned long long)sampleCount;
- (unsigned long long)textureType;
- (id)views;
- (unsigned long long)width;

@end