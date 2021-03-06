/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineInfo : TSDShapeInfo {
    NSUUID *mConnectedFromID;
    NSUUID *mConnectedToID;
    struct { 
        unsigned int connectedFrom : 1; 
        unsigned int connectedTo : 1; 
    } mInvalidFlags;
}

@property (nonatomic) TSDDrawableInfo *connectedFrom;
@property (nonatomic, retain) NSUUID *connectedFromID;
@property (nonatomic) TSDDrawableInfo *connectedTo;
@property (nonatomic, retain) NSUUID *connectedToID;

- (void)acceptVisitor:(id)arg1;
- (bool)canAnchor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeLayoutFullTransform;
- (id)computeLayoutInfoGeometry;
- (void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2;
- (id)connectedFrom;
- (id)connectedFromID;
- (id)connectedTo;
- (id)connectedToID;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (id)initFromUnarchiver:(id)arg1;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ConnectionLineArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)performBlockWithTemporaryLayout:(id)arg1;
- (id)presetKind;
- (Class)repClass;
- (void)saveGeometryToArchive:(struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; struct Size {} *x6; unsigned int x7; float x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct ConnectionLineArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setConnectedFrom:(id)arg1;
- (void)setConnectedFromID:(id)arg1;
- (void)setConnectedTo:(id)arg1;
- (void)setConnectedToID:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
