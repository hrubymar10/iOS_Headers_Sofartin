/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellDependencyRowPrinter : NSObject {
    NSString *_cellID;
    TSCEEdgeListPrinter *_dependentsList;
    unsigned long long _dirtyPrecedentCount;
    bool _isFormula;
    bool _isInCycle;
    TSCEEdgeListPrinter *_precedentsList;
}

@property(assign,retain) NSString * cellID;
@property(assign,readwrite) unsigned long long dirtyPrecedentCount;
@property(assign,readwrite) bool isFormula;
@property(assign,readwrite) bool isInCycle;

- (void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2;
- (void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2;
- (id)cellID;
- (void)dealloc;
- (unsigned long long)dirtyPrecedentCount;
- (id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned long long)arg2;
- (bool)isFormula;
- (bool)isInCycle;
- (void)setCellID:(id)arg1;
- (void)setDirtyPrecedentCount:(unsigned long long)arg1;
- (void)setIsFormula:(bool)arg1;
- (void)setIsInCycle:(bool)arg1;
- (id)stringForDependencyRow;
- (long long)tsce_numericCompare:(id)arg1;

@end