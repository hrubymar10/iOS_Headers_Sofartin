/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecStrokeSetColor : TSDSpecStroke {
    TSUColor *_color;
}

+ (id)newFromArchive:(const struct SpecStrokeSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecStrokeSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (bool)canApplyOnObject:(id)arg1;
- (id)initSpecStrokeSetColorWithArchive:(const struct SpecStrokeSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCurrentProperty:(id)arg1;
- (id)operationPropertyName;
- (void)saveSpecStrokeSetColorToArchive:(struct SpecStrokeSetColorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; }*)arg1 archiver:(id)arg2;
- (id)strokeModifiedFromStroke:(id)arg1;

@end
