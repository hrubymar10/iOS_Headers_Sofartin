/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mAnchorCellID;
    TSTCellRegion *mBaseRegion;
    TSTCellRegion *mCellRegion;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCursorCellID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } mSearchReferenceRange;
    int mSelectionType;
}

@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } anchorCellID;
@property (nonatomic, readonly) TSTCellRegion *baseRegion;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cursorCellID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAtEndOfLine;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } searchReferenceRange;
@property (nonatomic, readonly) int selectionType;
@property (readonly) Class superclass;

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableModel:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
+ (id)selectionWithTableModel:(id)arg1 cellRegion:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 rowIndices:(id)arg2;

- (id).cxx_construct;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })anchorCellID;
- (bool)areCellsInTheSameRegionInTable:(id)arg1;
- (id)baseRegion;
- (unsigned long long)cellCount;
- (id)cellRegion;
- (bool)containsCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)containsSelection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cursorCellID;
- (void)dealloc;
- (id)description;
- (void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(id)arg2;
- (void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(id)arg3;
- (id)initWithArchive:(const struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CellID {} *x6; struct RepeatedPtrField<TST::CellRange> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TST::CellRange> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CellID {} *x9; int x10; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTableModel:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initWithTableModel:(id)arg1 andCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(struct { int x1; int x2; })arg3;
- (id)initWithTableModel:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 selectionType:(int)arg3;
- (id)initWithTableModel:(id)arg1 cellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 type:(int)arg3 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5 selectionType:(int)arg6;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (id)initWithTableModel:(id)arg1 rowIndices:(id)arg2;
- (id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableModel:(id)arg1 selectionType:(int)arg2;
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;
- (void)insert:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (bool)intersectsPartialMergeRangeInTable:(id)arg1;
- (bool)isAtEndOfLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)remove:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)saveToArchive:(struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CellID {} *x6; struct RepeatedPtrField<TST::CellRange> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TST::CellRange> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CellID {} *x9; int x10; }*)arg1 archiver:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })searchReferenceRange;
- (id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1;
- (id)selectionByAddingCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (id)selectionByExtendingWithCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)selectionByRemovingCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (int)selectionType;
- (bool)selectsSingleLogicalCellInTable:(id)arg1;
- (bool)selectsSingleLogicalControlCellInTable:(id)arg1;
- (bool)selectsSingleLogicalControlCellInTable:(id)arg1 outShowsChrome:(out bool*)arg2;
- (void)setCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setSearchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
