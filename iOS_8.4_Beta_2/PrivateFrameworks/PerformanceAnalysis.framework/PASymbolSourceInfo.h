/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolSourceInfo : NSObject <PASerializable> {
    unsigned int _columnNumber;
    NSString *_fileName;
    unsigned long long _length;
    unsigned int _lineNumber;
    unsigned long long _offsetIntoSymbolOwner;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long length;
@property(assign,readonly) unsigned long long offsetIntoSymbolOwner;
@property(assign,readonly) unsigned int sourceFileColumnNumber;
@property(assign,readonly) unsigned int sourceFileLineNumber;
@property(assign,readonly) NSString * sourceFileName;
@property(assign,readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)_initWithSerializedSymbolSourceInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned int x5; unsigned int x6; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (bool)isEmptySourceInfo;
- (unsigned long long)length;
- (unsigned long long)offsetIntoSymbolOwner;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)sourceFileColumnNumber;
- (unsigned int)sourceFileLineNumber;
- (id)sourceFileName;

@end
