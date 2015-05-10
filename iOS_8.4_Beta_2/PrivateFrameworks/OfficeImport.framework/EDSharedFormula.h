/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSharedFormula : EDFormula {
    unsigned long long _baseFormulaIndex;
    EDReference *_baseFormulaRange;
    int _columnBaseOrOffset;
    bool _forceNonBaseFormula;
    int _rowBaseOrOffset;
}

@property(assign,readwrite) unsigned long long baseFormulaIndex;
@property(assign,readonly) EDReference * baseFormulaRange;
@property(assign,readwrite) int columnBaseOrOffset;
@property(assign,readwrite) bool forceNonBaseFormula;
@property(assign,readwrite) int rowBaseOrOffset;

- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (unsigned long long)baseFormulaIndex;
- (id)baseFormulaRange;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (int)columnBaseOrOffset;
- (bool)convertTokensToShared;
- (void)dealloc;
- (bool)forceNonBaseFormula;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (bool)isBaseFormula;
- (bool)isSharedFormula;
- (int)rowBaseOrOffset;
- (void)setBaseFormulaIndex:(unsigned long long)arg1;
- (void)setColumnBaseOrOffset:(int)arg1;
- (void)setForceNonBaseFormula:(bool)arg1;
- (void)setRowBaseOrOffset:(int)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned long long*)arg2;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (id)warningWithRowBlocks:(id)arg1;

@end