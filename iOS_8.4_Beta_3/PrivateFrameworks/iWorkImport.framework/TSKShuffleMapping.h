/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKShuffleMapping : NSObject <NSCopying> {
    unsigned short mDestinationIndexForMove;
    unsigned short mEndIndex;
    unsigned short mFirstMovedIndex;
    bool mIsMoveOperation;
    bool mIsVertical;
    unsigned short *mMapping;
    unsigned short mNumberOfIndicesMoved;
    unsigned short mStartIndex;
}

@property (nonatomic, readonly) unsigned short endIndex;
@property (nonatomic, readonly) bool isIdentityMapping;
@property (nonatomic, readonly) unsigned short*mapping;
@property (nonatomic, readonly) unsigned short mappingSize;
@property (nonatomic, readonly) unsigned short startIndex;

- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned short)endIndex;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id)arg2;
- (id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(bool)arg4;
- (id)initWithArchive:(const struct ShuffleMappingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg1;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2;
- (id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3;
- (void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(bool)arg3;
- (bool)isIdentityMapping;
- (bool)isMove;
- (bool)isVertical;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })mapCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned short)mapIndex:(unsigned short)arg1;
- (unsigned short*)mapping;
- (unsigned short)mappingSize;
- (void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })reverseMapCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned short)reverseMapIndex:(unsigned short)arg1;
- (void)saveToArchive:(struct ShuffleMappingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg1;
- (unsigned short)startIndex;
- (void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2;

@end
