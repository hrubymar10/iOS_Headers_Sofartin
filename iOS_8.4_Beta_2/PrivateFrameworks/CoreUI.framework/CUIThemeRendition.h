/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeRendition : NSObject {
    long long _artworkStatus;
    int _blendMode;
    unsigned long long _colorSpaceID;
    int _exifOrientation;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_key;
    NSString *_name;
    double _opacity;
    struct { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int isVectorBased : 1; 
        unsigned int isOpaque : 1; 
        unsigned int reserved : 28; 
    } _renditionFlags;
    unsigned int _scale;
    NSData *_srcData;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } _stackKey;
    unsigned int _subtype;
    long long _templateRenderingMode;
    long long _type;
    NSString *_utiType;
    long long _validLookGradation;
}

@property(assign,readwrite) int blendMode;
@property(assign,readwrite) int exifOrientation;
@property(assign,readwrite) double opacity;

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;

- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (long long)artworkStatus;
- (int)blendMode;
- (unsigned long long)colorSpaceID;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)effectPreset;
- (int)exifOrientation;
- (id)gradient;
- (double)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(long long)arg3;
- (bool)isHeaderFlaggedFPO;
- (bool)isOpaque;
- (bool)isScaled;
- (bool)isTiled;
- (bool)isValidForLookGradation:(long long)arg1;
- (bool)isVectorBased;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (id)name;
- (double)opacity;
- (struct CGPDFDocument { }*)pdfDocument;
- (double)scale;
- (void)setBlendMode:(int)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setOpacity:(double)arg1;
- (id)sliceInformation;
- (unsigned int)subtype;
- (long long)templateRenderingMode;
- (long long)type;
- (struct CGImage { }*)unslicedImage;
- (id)utiType;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;

@end
