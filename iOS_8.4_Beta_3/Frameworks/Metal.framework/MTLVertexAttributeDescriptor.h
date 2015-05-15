/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttributeDescriptor : NSObject <NSCopying> {
    unsigned long long _bufferIndex;
    unsigned long long _offset;
    unsigned long long _vertexFormat;
}

@property(assign,readwrite) unsigned long long bufferIndex;
@property(assign,readwrite) unsigned long long format;
@property(assign,readwrite) unsigned long long offset;

- (unsigned long long)bufferIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)format;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end