/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDComment : NSObject {
    EDString *_author;
    int _columnIndex;
    int _rowIndex;
    bool _visible;
}

@property(assign,retain) EDString * author;
@property(assign,readwrite) int columnIndex;
@property(assign,readwrite) int rowIndex;
@property(assign,readwrite) bool visible;

- (id)author;
- (int)columnIndex;
- (void)dealloc;
- (int)rowIndex;
- (void)setAuthor:(id)arg1;
- (void)setColumnIndex:(int)arg1;
- (void)setRowIndex:(int)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end
