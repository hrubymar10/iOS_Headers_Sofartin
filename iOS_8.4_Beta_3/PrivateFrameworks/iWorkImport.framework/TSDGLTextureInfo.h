/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLTextureInfo : NSObject {
    bool _containsMipmaps;
    unsigned int _height;
    unsigned int _name;
    unsigned int _target;
    unsigned int _width;
}

@property (nonatomic, readonly) bool containsMipmaps;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) unsigned int name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned int target;
@property (nonatomic, readonly) unsigned int width;

+ (id)textureInfoWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(bool)arg5;

- (bool)containsMipmaps;
- (id)description;
- (unsigned int)height;
- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(bool)arg5;
- (unsigned int)name;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)target;
- (void)teardown;
- (unsigned int)width;

@end
