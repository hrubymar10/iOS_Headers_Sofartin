/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer {
    TSCH3DFBOLoader *mLoader;
    bool mPreserveProtectedResourceAfterDestroy;
    TSCH3DResource *mResource;
}

@property(assign,readwrite) bool preserveProtectedResourceAfterDestroy;

+ (id)FBOFromContext:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
+ (id)FBOFromContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3 textureAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg4 resource:(id)arg5;
+ (id)FBOFromContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3 textureAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(id)arg7;

- (id)FBOHandleForSession:(id)arg1;
- (id)GLHandleForSession:(id)arg1;
- (bool)activateInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (bool)bindInSession:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)destroyResourcesInSession:(id)arg1;
- (void)disableSamplingInSession:(id)arg1;
- (void)discardBuffers;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (unsigned long long)estimatedMemroyInBytes;
- (id)initFromContext:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
- (bool)isProtectedInSession:(id)arg1;
- (bool)isTexturable;
- (struct SessionLoadResourceResult { bool x1; bool x2; bool x3; id x4; id x5; })loadInsideSession:(id)arg1;
- (id)loader;
- (bool)preserveProtectedResourceAfterDestroy;
- (void)protectInSession:(id)arg1 unprotectOnFail:(bool)arg2;
- (void)setPreserveProtectedResourceAfterDestroy:(bool)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (unsigned int)type;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(bool)arg2;
- (bool)validForSession:(id)arg1;

@end
