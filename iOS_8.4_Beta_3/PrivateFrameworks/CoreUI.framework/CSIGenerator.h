/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSIGenerator : NSObject {
    bool _allowsMultiPassEncoding;
    NSMutableArray *_bitmaps;
    int _blendMode;
    short _colorSpaceID;
    CUIShapeEffectPreset *_effectPreset;
    int _exifOrientation;
    CUIPSDGradient *_gradient;
    bool _isExcludedFromFilter;
    bool _isFPOHint;
    bool _isVectorBased;
    short _layout;
    NSMutableArray *_metrics;
    NSDate *_modtime;
    NSString *_name;
    double _opacity;
    unsigned int _pixelFormat;
    NSData *_rawData;
    unsigned long long _rowbytes;
    unsigned int _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    NSMutableArray *_slices;
    long long _templateRenderingMode;
    NSString *_utiType;
}

@property(assign,readwrite) bool allowsMultiPassEncoding;
@property(assign,readwrite) int blendMode;
@property(assign,readwrite) short colorSpaceID;
@property(assign,retain) CUIShapeEffectPreset * effectPreset;
@property(getter=isExcludedFromContrastFilter,assign,readwrite) bool excludedFromContrastFilter;
@property(assign,readwrite) int exifOrientation;
@property(assign,retain) CUIPSDGradient * gradient;
@property(assign,readwrite) bool isRenditionFPO;
@property(assign,readwrite) bool isVectorBased;
@property(assign,copy) NSDate * modtime;
@property(assign,copy) NSString * name;
@property(assign,readwrite) double opacity;
@property(assign,readwrite) unsigned int pixelFormat;
@property(assign,readwrite) unsigned int scaleFactor;
@property(assign,readwrite) long long templateRenderingMode;
@property(assign,copy) NSString * utiType;

+ (int)fileCompression;
+ (void)initialize;
+ (void)setFileCompression:(int)arg1;

- (id)CSIRepresentationWithCompression:(bool)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode { unsigned int x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg2;
- (void)addBitmap:(id)arg1;
- (void)addMetrics:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)addSliceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowsMultiPassEncoding;
- (int)blendMode;
- (short)colorSpaceID;
- (void)dealloc;
- (id)effectPreset;
- (int)exifOrientation;
- (void)formatCSIHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (id)gradient;
- (id)initWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (bool)isExcludedFromContrastFilter;
- (bool)isRenditionFPO;
- (bool)isVectorBased;
- (id)modtime;
- (id)name;
- (double)opacity;
- (unsigned int)pixelFormat;
- (unsigned int)scaleFactor;
- (void)setAllowsMultiPassEncoding:(bool)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColorSpaceID:(short)arg1;
- (void)setEffectPreset:(id)arg1;
- (void)setExcludedFromContrastFilter:(bool)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setGradient:(id)arg1;
- (void)setIsRenditionFPO:(bool)arg1;
- (void)setIsVectorBased:(bool)arg1;
- (void)setModtime:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (void)setUtiType:(id)arg1;
- (long long)templateRenderingMode;
- (id)utiType;
- (unsigned long long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(bool)arg3;
- (unsigned long long)writeGradientToData:(id)arg1;
- (void)writeHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 toData:(id)arg2;
- (unsigned long long)writeRawDataToData:(id)arg1;
- (unsigned long long)writeResourcesToData:(id)arg1;

@end