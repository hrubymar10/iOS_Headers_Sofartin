/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DUniformArrayShaderVariables : NSObject {
    unsigned long long mArraySize;
    NSString *mPrefix;
    NSMutableDictionary *mVariables;
}

@property(assign,readonly) unsigned long long arraySize;

+ (id)variablesWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2;

- (void)addArrayName:(id)arg1 type:(struct NSString { Class x1; }*)arg2;
- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (unsigned long long)arraySize;
- (void)dealloc;
- (id)initWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2;
- (id)p_formatVariableName:(id)arg1;
- (void)setVariable:(id)arg1 forName:(id)arg2;
- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;
- (id)variableForName:(id)arg1;

@end
