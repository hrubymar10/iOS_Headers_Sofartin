/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpaceBundle : NSObject {
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayout *mLayout;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mSpace;
}

@property(assign,retain) TSTLayoutSpace * frozenHeaderColumnsSpace;
@property(assign,retain) TSTLayoutSpace * frozenHeaderCornerSpace;
@property(assign,retain) TSTLayoutSpace * frozenHeaderRowsSpace;
@property(assign,readwrite) TSTLayout * layout;
@property(assign,retain) TSTLayoutSpace * repeatHeaderColumnsSpace;
@property(assign,retain) TSTLayoutSpace * repeatHeaderCornerSpace;
@property(assign,retain) TSTLayoutSpace * repeatHeaderRowsSpace;
@property(assign,retain) TSTLayoutSpace * space;

- (void)dealloc;
- (id)description;
- (bool)enumerateFrozenLayoutSpacesUsingBlock:(id)arg1;
- (void)enumerateLayoutSpacesUsingBlock:(id)arg1;
- (bool)enumerateRepeatLayoutSpacesUsingBlock:(id)arg1;
- (id)frozenHeaderColumnsSpace;
- (id)frozenHeaderCornerSpace;
- (id)frozenHeaderRowsSpace;
- (id)getSpaceContainingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)initWithLayout:(id)arg1;
- (void)invalidateCoordinates;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateTableOffsets;
- (id)layout;
- (id)repeatHeaderColumnsSpace;
- (id)repeatHeaderCornerSpace;
- (id)repeatHeaderRowsSpace;
- (void)setFrozenHeaderColumnsSpace:(id)arg1;
- (void)setFrozenHeaderCornerSpace:(id)arg1;
- (void)setFrozenHeaderRowsSpace:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setRepeatHeaderColumnsSpace:(id)arg1;
- (void)setRepeatHeaderCornerSpace:(id)arg1;
- (void)setRepeatHeaderRowsSpace:(id)arg1;
- (void)setSpace:(id)arg1;
- (id)space;
- (int)validateLayoutSpaces;

@end