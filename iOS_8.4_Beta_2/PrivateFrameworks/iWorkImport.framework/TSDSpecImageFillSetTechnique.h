/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecImageFillSetTechnique : TSDSpecFill {
    int _technique;
}

+ (id)newFromArchive:(const struct SpecImageFillSetTechniqueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecImageFillSetTechniqueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (bool)canApplyOnObject:(id)arg1;
- (id)imageFillModifiedFromImageFill:(id)arg1;
- (id)initSpecImageFillSetTechniqueWithArchive:(const struct SpecImageFillSetTechniqueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCurrentProperty:(id)arg1;
- (id)operationPropertyName;
- (void)saveSpecImageFillSetTechniqueToArchive:(struct SpecImageFillSetTechniqueArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; }*)arg1 archiver:(id)arg2;

@end
