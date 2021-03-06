/* Generated by RuntimeBrowser.
 */

@protocol TSTTableHiddenRowColumnProviding <NSObject>

@required

- (bool)anyColumnsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyRowsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)isColumnHidden:(unsigned char)arg1;
- (bool)isRowHidden:(unsigned short)arg1;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg1;

@end
