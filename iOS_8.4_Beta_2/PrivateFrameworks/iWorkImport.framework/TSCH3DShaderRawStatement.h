/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderRawStatement : NSObject <TSCH3DShaderStatement> {
    struct TSCH3DShaderType { 
        unsigned long long mValue; 
    } mLinkageType;
    NSString *mString;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) struct TSCH3DShaderType { unsigned long long x1; } linkageType;
@property(assign,readonly) NSString * string;
@property(assign,readonly) Class superclass;

+ (id)statementWithString:(id)arg1 linkageType:(struct TSCH3DShaderType { unsigned long long x1; })arg2;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithString:(id)arg1 linkageType:(struct TSCH3DShaderType { unsigned long long x1; })arg2;
- (bool)isLinked;
- (struct TSCH3DShaderType { unsigned long long x1; })linkageType;
- (id)resolve;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)setLinkageType:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (id)string;

@end
