/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImportSessionInfo : NSObject {
    bool _importComplete;
    NSMutableIndexSet *_importCompleteIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importIndexes;
    bool _importStopped;
    bool _importingSelection;
}

@property(assign,readonly) NSIndexSet * completedIndexes;
@property(assign,readonly) NSIndexSet * errorIndexes;
@property(assign,readwrite) bool importComplete;
@property(assign,readonly) NSIndexSet * importIndexes;
@property(assign,readwrite) bool importStopped;
@property(assign,readwrite) bool importingSelection;
@property(assign,readonly) NSIndexSet * inProgressIndexes;

- (bool)_isImportCompleteForIndex:(unsigned long long)arg1;
- (void)addIndexToImport:(unsigned long long)arg1;
- (void)beginImportForIndex:(unsigned long long)arg1;
- (void)completeImportForIndex:(unsigned long long)arg1 error:(bool)arg2;
- (id)completedIndexes;
- (void)dealloc;
- (id)errorIndexes;
- (bool)importComplete;
- (id)importIndexes;
- (bool)importStopped;
- (bool)importingSelection;
- (id)inProgressIndexes;
- (id)initWithImportIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)setImportComplete:(bool)arg1;
- (void)setImportStopped:(bool)arg1;
- (void)setImportingSelection:(bool)arg1;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2;

@end
