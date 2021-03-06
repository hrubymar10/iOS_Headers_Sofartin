/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTexture : NSObject <NSCoding, NSCopying> {
    int _alignment;
    unsigned int *_alphaMap;
    struct CGSize { 
        double width; 
        double height; 
    } _alphaMapSize;
    unsigned int _compressedFormat;
    int _compressedSize;
    struct CGPoint { 
        double x; 
        double y; 
    } _cropOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _cropScale;
    bool _didGenerateMipmaps;
    bool _disableAlpha;
    CIFilter *_filter;
    NSString *_imgName;
    bool _isCompressed;
    bool _isData;
    bool _isPath;
    bool _isRotated;
    NSString *_originalAtlasName;
    SKTexture *_originalTexture;
    int _rowLength;
    NSArray *_searchPaths;
    bool _shouldGenerateMipmaps;
    NSString *_subTextureName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textCoords;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textRect;
    SKTextureCache *_textureCache;
    unsigned int _textureTarget;
}

@property(assign,readonly) unsigned int* alphaMap;
@property(assign,readonly) struct CGSize { double x1; double x2; } alphaMapSize;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } cropOffset;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } cropScale;
@property(assign,readwrite) bool disableAlpha;
@property(assign,readwrite) long long filteringMode;
@property(assign,readonly) bool hasAlpha;
@property(assign,readonly) NSString * imageNameOrPath;
@property(assign,readonly) bool isRepeatable;
@property(assign,readwrite) bool isRotated;
@property(assign,copy) NSString * originalAtlasName;
@property(assign,readonly) struct CGSize { double x1; double x2; } pixelSize;
@property(assign,copy) NSString * subTextureName;
@property(assign,readwrite) unsigned int textureTarget;
@property(assign,readonly) bool useAlpha;
@property(assign,readwrite) bool usesMipmaps;
@property(assign,readwrite) int wrapMode;

+ (void)_addTextureToPreloadlist:(id)arg1;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_textureWithImageNamed:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(bool)arg4;
+ (void)deleteUnusedTextures;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)preloadTextures;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2 grayscale:(bool)arg3;
+ (id)textureVectorNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 flipped:(bool)arg3;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)textureWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTexture:(id)arg2;
+ (void)updateTextures;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_copyImageData;
- (struct CGImage { }*)_createCGImage;
- (void)_ensureImageData;
- (id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_loadOnTextureQueue;
- (struct CGImage { }*)_newTextureFromGLCache;
- (struct CGImage { }*)_rotateCGImage:(struct CGImage { }*)arg1;
- (void)_savePngFromGLCache:(id)arg1;
- (id)_textureCache;
- (unsigned int*)alphaMap;
- (struct CGSize { double x1; double x2; })alphaMapSize;
- (struct CGImage { }*)alphaMask;
- (bool)alphaTestX:(double)arg1 y:(double)arg2;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })cropOffset;
- (struct CGPoint { double x1; double x2; })cropScale;
- (void)dealloc;
- (id)description;
- (bool)disableAlpha;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringMode;
- (void)generateAlphaMapOfSize:(struct CGSize { double x1; double x2; })arg1 fromImage:(struct CGImage { }*)arg2;
- (int)glTextureId;
- (bool)hasAlpha;
- (id)imageNameOrPath;
- (id)imgName;
- (id)init;
- (void)initTextureCacheWithImageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (bool)isInMemory;
- (bool)isRepeatable;
- (bool)isRotated;
- (void)load;
- (void)loadImageData;
- (void)loadImageDataFromCGImage:(struct CGImage { }*)arg1 pointsSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)loadImageDataFromPVRData:(id)arg1;
- (bool)loadImageDataFromPVRGZData:(id)arg1;
- (id)originalAtlasName;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)preload;
- (void)preloadWithCompletionHandler:(id)arg1;
- (void)setCropOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCropScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDisableAlpha:(bool)arg1;
- (void)setFilteringMode:(long long)arg1;
- (void)setIsRotated:(bool)arg1;
- (void)setOriginalAtlasName:(id)arg1;
- (void)setSubTextureName:(id)arg1;
- (void)setTextureDimension:(const struct CGSize { double x1; double x2; }*)arg1 withPixelSize:(const struct CGSize { double x1; double x2; }*)arg2;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setUsesMipmaps:(bool)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)subTextureName;
- (id)textureByApplyingCIFilter:(id)arg1;
- (id)textureByGeneratingNormalMap;
- (id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textureRect;
- (unsigned int)textureTarget;
- (void)unload;
- (bool)useAlpha;
- (bool)usesMipmaps;
- (int)wrapMode;

@end
