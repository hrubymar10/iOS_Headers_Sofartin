/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {
    TSCHChartGrid *mGrid;
    unsigned long long mIndex;
}

@property(assign,readonly) TSCHChartGrid * grid;
@property(assign,retain) NSString * name;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)grid;
- (id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id*)valuesAtIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end