/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompiler : NSObject {
    struct { 
        unsigned char key[32]; 
    } _cacheUUID;
    struct MTLCompilerConnectionManager { int (**x1)(); } *_compilerConnectionManager;
    NSObject<OS_dispatch_queue> *_compilerQueue;
    NSString *_pluginPath;
}

@property(assign,readonly) struct { unsigned char x1[32]; } cacheUUID;
@property(assign,readwrite) struct MTLCompilerConnectionManager { int (**x1)(); }* compilerConnectionManager;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * compilerQueue;
@property(assign,copy) NSString * pluginPath;

- (id).cxx_construct;
- (struct { unsigned char x1[32]; })cacheUUID;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 completionHandler:(id)arg4;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 options:(unsigned int)arg4 completionHandler:(id)arg5;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 completionHandler:(id)arg3;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)compileRequest:(id)arg1 completionHandler:(id)arg2;
- (void)compileVertexFunction:(id)arg1 serializedPipelineDescriptorData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)compileVertexFunction:(id)arg1 serializedVertexDescriptor:(id)arg2 stateData:(id)arg3 completionHandler:(id)arg4;
- (void)compileVertexFunction:(id)arg1 serializedVertexDescriptor:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id)arg5;
- (struct MTLCompilerConnectionManager { int (**x1)(); }*)compilerConnectionManager;
- (id)compilerQueue;
- (void)dealloc;
- (id)initWithArch:(unsigned int)arg1 cacheUUID:(struct { unsigned char x1[32]; }*)arg2 pluginPath:(id)arg3;
- (id)initWithTargetData:(id)arg1 cacheUUID:(struct { unsigned char x1[32]; }*)arg2 pluginPath:(id)arg3;
- (id)pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)setCompilerConnectionManager:(struct MTLCompilerConnectionManager { int (**x1)(); }*)arg1;
- (void)setCompilerQueue:(id)arg1;

@end