/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBufferArgument : MTLArgument {
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned short _dataType;
    MTLStructType *_structType;
}

- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (id)bufferStructType;
- (void)dealloc;
- (id)describe;
- (id)description;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9;
- (void)setStructType:(id)arg1;

@end
