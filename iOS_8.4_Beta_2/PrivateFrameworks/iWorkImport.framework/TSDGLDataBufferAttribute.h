/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLDataBufferAttribute : NSObject {
    unsigned long long _bufferOffset;
    unsigned int _bufferUsage;
    int _componentCount;
    TSDGLDataArrayBuffer *_dataArrayBuffer;
    TSDGLDataBuffer *_dataBuffer;
    long long _dataType;
    bool _isNormalized;
    int _locationInShader;
    NSString *_name;
}

@property(assign,readwrite) unsigned long long bufferOffset;
@property(assign,readonly) unsigned int bufferUsage;
@property(assign,readonly) int componentCount;
@property(assign,readwrite) TSDGLDataArrayBuffer * dataArrayBuffer;
@property(assign,readwrite) TSDGLDataBuffer * dataBuffer;
@property(assign,readonly) long long dataType;
@property(assign,readonly) bool isNormalized;
@property(assign,readwrite) int locationInShader;
@property(assign,copy) NSString * name;

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(bool)arg4 componentCount:(unsigned long long)arg5;

- (unsigned long long)bufferOffset;
- (unsigned int)bufferUsage;
- (int)componentCount;
- (id)dataArrayBuffer;
- (id)dataBuffer;
- (long long)dataType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(long long)arg3 normalized:(bool)arg4 componentCount:(unsigned long long)arg5;
- (bool)isNormalized;
- (int)locationInShader;
- (id)name;
- (void)setBufferOffset:(unsigned long long)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)setComponentCount:(int)arg1;
- (void)setDataArrayBuffer:(id)arg1;
- (void)setDataBuffer:(id)arg1;
- (void)setLocationInShader:(int)arg1;
- (void)setName:(id)arg1;

@end
