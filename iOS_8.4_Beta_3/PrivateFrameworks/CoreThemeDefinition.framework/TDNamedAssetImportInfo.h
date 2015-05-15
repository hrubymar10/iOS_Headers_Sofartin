/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDNamedAssetImportInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _alignmentRect;
    NSURL *_fileURL;
    unsigned long long _graphicsClass;
    long long _idiom;
    unsigned long long _memoryClass;
    NSDate *_modificationDate;
    NSString *_name;
    long long _nameIdentifier;
    long long _renditionType;
    struct CGSize { 
        double width; 
        double height; 
    } _resizableSliceSize;
    long long _resizingMode;
    unsigned long long _scaleFactor;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sliceInsets;
    long long _subtype;
    long long _templateRenderingMode;
}

@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property(assign,copy) NSURL * fileURL;
@property(assign,readwrite) unsigned long long graphicsClass;
@property(assign,readwrite) long long idiom;
@property(assign,readwrite) bool isTemplate;
@property(assign,readwrite) unsigned long long memoryClass;
@property(assign,copy) NSDate * modificationDate;
@property(assign,copy) NSString * name;
@property(assign,readwrite) long long nameIdentifier;
@property(assign,readwrite) long long renditionType;
@property(assign,readwrite) struct CGSize { double x1; double x2; } resizableSliceSize;
@property(assign,readwrite) long long resizingMode;
@property(assign,readwrite) unsigned long long scaleFactor;
@property(assign,readwrite) long long sizeClassHorizontal;
@property(assign,readwrite) long long sizeClassVertical;
@property(assign,readwrite) struct { double x1; double x2; double x3; double x4; } sliceInsets;
@property(assign,readwrite) long long subtype;
@property(assign,readwrite) long long templateRenderingMode;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)dealloc;
- (id)fileURL;
- (unsigned long long)graphicsClass;
- (long long)idiom;
- (id)init;
- (bool)isTemplate;
- (unsigned long long)memoryClass;
- (id)modificationDate;
- (id)name;
- (long long)nameIdentifier;
- (long long)renditionSubtype;
- (long long)renditionType;
- (struct CGSize { double x1; double x2; })resizableSliceSize;
- (long long)resizingMode;
- (unsigned long long)scaleFactor;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFileURL:(id)arg1;
- (void)setGraphicsClass:(unsigned long long)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setMemoryClass:(unsigned long long)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameIdentifier:(long long)arg1;
- (void)setRenditionType:(long long)arg1;
- (void)setResizableSliceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizingMode:(long long)arg1;
- (void)setScaleFactor:(unsigned long long)arg1;
- (void)setSizeClassHorizontal:(long long)arg1;
- (void)setSizeClassVertical:(long long)arg1;
- (void)setSliceInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtype:(long long)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (struct { double x1; double x2; double x3; double x4; })sliceInsets;
- (long long)subtype;
- (long long)templateRenderingMode;

@end
