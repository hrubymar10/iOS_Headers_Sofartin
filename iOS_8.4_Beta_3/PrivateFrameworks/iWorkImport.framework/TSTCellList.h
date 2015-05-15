/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellList : TSPObject <NSCopying> {
    NSPointerArray *_cells;
}

@property (nonatomic, retain) NSPointerArray *cells;

- (id)addCell:(id)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (id)cells;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)lastCell;
- (void)popLastCell;
- (void)saveToArchiver:(id)arg1;
- (void)setCells:(id)arg1;

@end
