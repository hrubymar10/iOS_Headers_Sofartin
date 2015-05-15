/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning> {
    TSCECalculationEngine *mCalculationEngine;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > { 
        struct TSUColumnRowRect {} *__begin_; 
        struct TSUColumnRowRect {} *__end_; 
        struct __compressed_pair<TSUColumnRowRect *, std::__1::allocator<TSUColumnRowRect> > { 
            struct TSUColumnRowRect {} *__first_; 
        } __end_cap_; 
    } mCellRangesToInvalidate;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__first_; 
        } __end_cap_; 
    } mHiddenRowIndices;
    bool mNeedsToUpdateFilterSetForImport;
    struct __CFUUID { } *mOwnerID;
    struct vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
        struct pair<unsigned short, bool> {} *__begin_; 
        struct pair<unsigned short, bool> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned short, bool> *, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
            struct pair<unsigned short, bool> {} *__first_; 
        } __end_cap_; 
    } mPendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> *mPendingComputedShowRowResultsQueue;
    TSTTableFilterSet *mRewrittenFilterSet;
    TSTTableInfo *mTableInfo;
    NSMutableArray *mThresholdCellValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (id)calculationEngine;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })cellReferenceForIndex:(unsigned short)arg1;
- (void)dealloc;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (void)hiddenStateChangedForIndex:(unsigned short)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (void)invalidateForCalculationEngine:(id)arg1;
- (struct __CFUUID { }*)ownerID;
- (void)p_registerAllFormulaToCalculationEngine;
- (void)p_removeAllFormulaFromCalculationEngine;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReferenceFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4;
- (int)registerWithCalculationEngineChoosingUniqueID:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)setOwnerID:(struct __CFUUID { }*)arg1;
- (void)setTableInfo:(id)arg1;
- (id)tableInfo;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
