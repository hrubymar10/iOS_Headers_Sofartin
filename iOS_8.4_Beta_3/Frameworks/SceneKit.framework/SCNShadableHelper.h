/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNShadableHelper : NSObject <NSSecureCoding> {
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
    NSDictionary *_uniformNameToType;
}

@property (nonatomic, readonly) id owner;
@property (nonatomic, retain) SCNProgram *program;
@property (nonatomic, copy) NSDictionary *shaderModifiers;
@property (nonatomic, readonly) NSArray *shaderModifiersUniformNames;

+ (bool)supportsSecureCoding;

- (struct __C3DFXGLSLProfile { }*)_GLSLProfile;
- (void*)__CFObject;
- (bool)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_kvoUpdateUniformNamed:(id)arg1 ofType:(short)arg2 immediate:(bool)arg3;
- (void)_programDidChange:(id)arg1;
- (struct __C3DFXGLSLProgram { }*)_programFromPassAtIndex:(long long)arg1;
- (void)_setC3DProgramAndStartObservingUniforms;
- (void)_setC3DProgramDelegate;
- (void)_setUniform:(id)arg1 withC3DValue:(struct __C3DValue { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; short x2; short x3; char *x4; long long x5; }*)arg2;
- (void)_startObservingProgram;
- (void)_startObservingProgramUniforms:(id)arg1;
- (void)_startObservingUniformsOfC3DShaderModifiers:(id)arg1;
- (void)_stopObservingProgram;
- (void)_stopObservingUniforms;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram { }*)arg1 forSymbol:(id)arg2;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)commonDestroy;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (bool)isOpaque;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)owner;
- (void)ownerWillDie;
- (id)program;
- (void)setProgram:(id)arg1;
- (void)setShaderModifiers:(id)arg1;
- (id)shaderModifiers;
- (id)shaderModifiersUniformNames;

@end
