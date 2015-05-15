/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutHint : NSObject <TSDHint> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCacheHintID;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mCellRange;
    struct CGSize { 
        double width; 
        double height; 
    } mEffectiveSize;
    bool mHorizontal;
    bool mIsValid;
    TSTLayout *mLayout;
    struct CGSize { 
        double width; 
        double height; 
    } mMaximumSize;
    unsigned int mPartitionPosition;
    NSNumber *mPartitioningPass;
}

@property(assign,readwrite) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cacheHintID;
@property(assign,readwrite) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cellRange;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) struct CGSize { double x1; double x2; } effectiveSize;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool horizontal;
@property(assign,readwrite) bool isValid;
@property(assign,readwrite) TSTLayout * layout;
@property(assign,readwrite) struct CGSize { double x1; double x2; } maximumSize;
@property(assign,readwrite) unsigned int partitionPosition;
@property(assign,retain) NSNumber * partitioningPass;
@property(assign,readonly) Class superclass;

+ (Class)archivedHintClass;

- (id).cxx_construct;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cacheHintID;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)copyForArchiving;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })effectiveSize;
- (id)firstChildHint;
- (bool)horizontal;
- (id)init;
- (id)initWithArchive:(const struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellRange {} *x5; struct CellID {} *x6; struct Size {} *x7; bool x8; bool x9; unsigned int x10; struct Size {} *x11; unsigned int x12; }*)arg1;
- (id)initWithRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 hintId:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize { double x1; double x2; })arg4 effectiveSize:(struct CGSize { double x1; double x2; })arg5 layout:(id)arg6 validity:(bool)arg7 horizontal:(bool)arg8;
- (void)invalidate;
- (bool)isFirstHint;
- (bool)isValid;
- (id)lastChildHint;
- (id)layout;
- (struct CGSize { double x1; double x2; })maximumSize;
- (void)offsetByDelta:(int)arg1;
- (bool)overlapsWithSelection:(id)arg1;
- (unsigned int)partitionPosition;
- (id)partitioningPass;
- (oneway void)release;
- (void)saveToArchive:(struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CellRange {} *x5; struct CellID {} *x6; struct Size {} *x7; bool x8; bool x9; unsigned int x10; struct Size {} *x11; unsigned int x12; }*)arg1;
- (void)setCacheHintID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setEffectiveSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHorizontal:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPartitionPosition:(unsigned int)arg1;
- (void)setPartitioningPass:(id)arg1;

@end
