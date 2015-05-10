/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUHTMLTable : NSObject {
    NSMutableDictionary *_cellAttributes;
    NSMutableDictionary *_columnAttributes;
    NSMutableArray *_columnHeaders;
    unsigned long long _rowClassStride;
    NSMutableDictionary *_rowClasses;
    NSMutableArray *_rows;
}

@property(assign,readonly) unsigned long long count;
@property(assign,readonly) unsigned long long lastRowIndex;
@property(assign,readwrite) unsigned long long rowClassStride;

+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(unsigned long long)arg1 :(unsigned long long)arg2;
+ (id)htmlTable;

- (void)addRowWithCellMarkup:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)deleteColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(id)arg1;
- (unsigned long long)indexOfColumnWithTitle:(id)arg1;
- (id)init;
- (unsigned long long)lastRowIndex;
- (id)markup;
- (unsigned long long)rowClassStride;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)setRowClassStride:(unsigned long long)arg1;

@end
