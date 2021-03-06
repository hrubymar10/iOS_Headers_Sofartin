/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartSelection : TSDDrawableSelection {
    TSCHChartDrawableInfo *mChart;
    struct { 
        struct TSCERangeCoordinate { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mTopLeft; 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } mBottomRight; 
        } range; 
        struct __CFUUID {} *tableID; 
    } mReference;
}

@property(assign,readonly) TSCHChartDrawableInfo * chart;
@property(assign,readonly) struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } reference;

+ (Class)archivedSelectionClass;

- (id).cxx_construct;
- (id)chart;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initFromArchive:(const struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RangeReferenceArchive {} *x5; struct ChartSelectionArchive {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithChartInfo:(id)arg1 reference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })reference;
- (bool)returnChartFrameForAutoscroll;
- (void)saveToArchive:(struct ChartSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RangeReferenceArchive {} *x5; struct ChartSelectionArchive {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)setReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;

@end
