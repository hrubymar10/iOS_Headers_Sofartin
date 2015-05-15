/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureInfo : NSObject <NSCopying> {
    int alphaState;
    bool containsMipmaps;
    unsigned int height;
    unsigned int name;
    unsigned int target;
    int textureOrigin;
    unsigned int width;
}

@property (readonly) int alphaState;
@property (readonly) bool containsMipmaps;
@property (readonly) unsigned int height;
@property (readonly) unsigned int name;
@property (readonly) unsigned int target;
@property (readonly) int textureOrigin;
@property (readonly) unsigned int width;

- (int)alphaState;
- (bool)containsMipmaps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)height;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (unsigned int)name;
- (unsigned int)target;
- (int)textureOrigin;
- (unsigned int)width;

@end
