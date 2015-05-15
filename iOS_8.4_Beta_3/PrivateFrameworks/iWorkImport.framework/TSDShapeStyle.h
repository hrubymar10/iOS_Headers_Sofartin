/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeStyle : TSSStyle <TSDMixing, TSSPreset>

@property (nonatomic, readonly) NSString *presetKind;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (void)initialize;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct StrokeArchive {} *x6; struct ShadowArchive {} *x7; struct ReflectionArchive {} *x8; struct LineEndArchive {} *x9; struct LineEndArchive {} *x10; float x11; }*)arg2 unarchiver:(id)arg3;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct StrokeArchive {} *x6; struct ShadowArchive {} *x7; struct ReflectionArchive {} *x8; struct LineEndArchive {} *x9; struct LineEndArchive {} *x10; float x11; }*)arg2 archiver:(id)arg3;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hasLineEnds;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)presetKind;
- (void)saveToArchive:(struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (const struct ShapeStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ShapeStylePropertiesArchive {} *x6; unsigned int x7; }*)shapeStyleArchiveFromUnarchiver:(id)arg1;
- (bool)wantsHighContrastBackgroundColor;

@end
