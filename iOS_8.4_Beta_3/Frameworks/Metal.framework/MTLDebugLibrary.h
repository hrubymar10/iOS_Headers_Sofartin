/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugLibrary : MTLToolsLibrary {
    id _code;
    MTLCompileOptions *_compileOptions;
    unsigned long long _type;
}

@property(assign,copy) id code;
@property(assign,copy) MTLCompileOptions * compileOptions;
@property(assign,readwrite) unsigned long long type;

- (void).cxx_destruct;
- (id)code;
- (id)compileOptions;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;
- (id)newFunctionWithName:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setCompileOptions:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
