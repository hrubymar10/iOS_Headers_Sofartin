/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLFrameBufferTextureLookupInfo : NSObject {
    unsigned int _attachment;
    long long _indexOnAttachment;
    NSString *_name;
    unsigned int _textureName;
    struct CGSize { 
        double width; 
        double height; 
    } _textureSize;
}

@property(assign,readwrite) unsigned int attachment;
@property(assign,readwrite) long long indexOnAttachment;
@property(assign,readonly) NSString * name;
@property(assign,readonly) unsigned int textureName;
@property(assign,readonly) struct CGSize { double x1; double x2; } textureSize;

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 name:(id)arg5;

- (unsigned int)attachment;
- (void)dealloc;
- (id)description;
- (long long)indexOnAttachment;
- (id)initWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 name:(id)arg5;
- (id)name;
- (void)setAttachment:(unsigned int)arg1;
- (void)setIndexOnAttachment:(long long)arg1;
- (unsigned int)textureName;
- (struct CGSize { double x1; double x2; })textureSize;

@end
