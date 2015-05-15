/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMasterLayout : NSObject <TSTTableHiddenRowColumnProviding> {
    bool mBandedFillIsValid;
    TSDFill *mBandedFillObject;
    NSPointerArray *mBottomRowStrokes;
    unsigned long long mCachedMaxNumberOfColumns;
    unsigned long long mCachedMaxNumberOfRows;
    unsigned short mCachedNumberOfFooterRows;
    unsigned short mCachedNumberOfHeaderColumns;
    unsigned short mCachedNumberOfHeaderRows;
    double mCachedTableNameHeight;
    TSTWPColumnCache *mCellIDToWPColumnCache;
    TSTCellRegion *mCellRegionForClearedMergeStrokes;
    NSMutableArray *mChangeDescriptors;
    TSKChangeNotifier *mChangeNotifier;
    TSTStrokeWidthCache *mColumnToStrokeWidthCache;
    TSTDupContentCache *mDupContentCache;
    double mDynamicAddOrRemoveColumnElementSize;
    double mDynamicAddOrRemoveRowElementSize;
    bool mDynamicBandedFill;
    bool mDynamicBandedFillSetting;
    <TSTLayoutDynamicCellFillProtocol> *mDynamicCellFillDelegate;
    int mDynamicColumnAdjustment;
    <TSTLayoutDynamicColumnMoveProtocol> *mDynamicColumnMoveDelegate;
    double mDynamicColumnTabSize;
    <TSTLayoutDynamicContentProtocol> *mDynamicContentDelegate;
    TSUColor *mDynamicFontColor;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicFontColorCellRange;
    double mDynamicHeightResize;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingContent;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingRowsCols;
    long long mDynamicHidingRowsColsDirection;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingText;
    TSDInfoGeometry *mDynamicInfoGeometry;
    NSMutableSet *mDynamicLayouts;
    bool mDynamicRepResize;
    bool mDynamicRepressFrozenHeader;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
    double mDynamicResizingColumnAdjustment;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicResizingColumnRange;
    bool mDynamicResizingColumns;
    double mDynamicResizingRowAdjustment;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicResizingRowRange;
    bool mDynamicResizingRows;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicRevealingRowsCols;
    long long mDynamicRevealingRowsColsDirection;
    int mDynamicRowAdjustment;
    <TSTLayoutDynamicRowMoveProtocol> *mDynamicRowMoveDelegate;
    double mDynamicRowTabSize;
    TSDLayoutGeometry *mDynamicSavedLayoutGeometry;
    TSTCellSelection *mDynamicSelection;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mDynamicSuppressingConditionalStylesCellID;
    double mDynamicTableNameResize;
    double mDynamicWidthResize;
    bool mEmptyFilteredTable;
    bool mHeaderColumnsFrozen;
    bool mHeaderColumnsRepeat;
    bool mHeaderRowsFrozen;
    bool mHeaderRowsRepeat;
    TSTHiddenRowsColumnsCache *mHiddenRowsColumnsCache;
    bool mInDynamicLayoutMode;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    TSUWidthLimitedQueue *mLayoutQueue;
    NSPointerArray *mLeftColumnStrokes;
    NSLock *mLock;
    unsigned int mMaxConcurrentTasks;
    struct CGSize { 
        double width; 
        double height; 
    } mMaximumPartitionSize;
    TSTMergeRangeSortedSet *mMergeRanges;
    unsigned int mNumCellsPerTask;
    TSTRWRetainedPointerKeyDictionary *mParaStyleToHeightCache;
    bool mProcessHiddenRowsForExport;
    int mReferenceCount;
    NSPointerArray *mRightColumnStrokes;
    TSTStrokeWidthCache *mRowToStrokeHeightCache;
    TSTConcurrentMutableIndexSet *mSpillStrokeColumns;
    TSTStrokeDefaultVendor *mStrokesDefaultVendor;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } mStrokesRWLock;
    double mTableDefaultFontHeightForArea;
    bool mTableDefaultFontHeightsAreValid;
    int mTableEnvironment;
    TSTTableInfo *mTableInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mTableNameBounds;
    bool mTableNameEnabled;
    int mTableRowsBehavior;
    TSTWPColumnCache *mTempWPColumnCache;
    NSPointerArray *mTopRowStrokes;
    bool mUseBandedFill;
    TSTWidthHeightCache *mWidthHeightCache;
}

@property(assign,readonly) TSDFill * bandedFillObject;
@property(assign,readonly) TSTWPColumnCache * cellIDToWPColumnCache;
@property(assign,readonly) NSMutableArray * changeDescriptors;
@property(assign,readwrite) TSKChangeNotifier * changeNotifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) TSTDupContentCache * dupContentCache;
@property(assign,readonly) double dynamicAddOrRemoveColumnElementSize;
@property(assign,readonly) double dynamicAddOrRemoveRowElementSize;
@property(assign,readonly) bool dynamicBandedFill;
@property(assign,readonly) bool dynamicBandedFillSetting;
@property(assign,readonly) <TSTLayoutDynamicCellFillProtocol> * dynamicCellFillDelegate;
@property(assign,readonly) int dynamicColumnAdjustment;
@property(assign,readonly) <TSTLayoutDynamicColumnMoveProtocol> * dynamicColumnMoveDelegate;
@property(assign,readonly) double dynamicColumnTabSize;
@property(assign,readonly) <TSTLayoutDynamicContentProtocol> * dynamicContentDelegate;
@property(assign,readonly) TSUColor * dynamicFontColor;
@property(assign,readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicFontColorCellRange;
@property(assign,readwrite) double dynamicHeightResize;
@property(assign,readonly) TSDInfoGeometry * dynamicInfoGeometry;
@property(assign,readonly) TSTLayout * dynamicLayout;
@property(assign,readonly) NSMutableSet * dynamicLayouts;
@property(assign,readwrite) bool dynamicRepResize;
@property(assign,readonly) double dynamicResizingColumnAdjustment;
@property(assign,readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingColumnRange;
@property(assign,readonly) bool dynamicResizingColumns;
@property(assign,readonly) double dynamicResizingRowAdjustment;
@property(assign,readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingRowRange;
@property(assign,readonly) bool dynamicResizingRows;
@property(assign,readonly) int dynamicRowAdjustment;
@property(assign,readonly) <TSTLayoutDynamicRowMoveProtocol> * dynamicRowMoveDelegate;
@property(assign,readonly) double dynamicRowTabSize;
@property(assign,copy) TSDLayoutGeometry * dynamicSavedLayoutGeometry;
@property(assign,readonly) TSTCellSelection * dynamicSelection;
@property(assign,readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } dynamicSuppressingConditionalStylesCellID;
@property(assign,readonly) double dynamicTableNameResize;
@property(assign,readwrite) double dynamicWidthResize;
@property(assign,readonly) bool emptyFilteredTable;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSIndexSet * hiddenColumnIndices;
@property(assign,readonly) NSIndexSet * hiddenRowIndices;
@property(assign,readonly) TSTHiddenRowsColumnsCache * hiddenRowsColumnsCache;
@property(assign,readonly) bool inDynamicLayoutMode;
@property(assign,readonly) bool isGrouped;
@property(assign,readwrite) unsigned int maxConcurrentTasks;
@property(assign,readwrite) struct CGSize { double x1; double x2; } maximumPartitionSize;
@property(assign,readwrite) TSTMergeRangeSortedSet * mergeRanges;
@property(assign,readwrite) unsigned int numCellsPerTask;
@property(assign,readwrite) bool processHiddenRowsForExport;
@property(assign,readonly) TSTStrokeDefaultVendor * strokesDefaultVendor;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) int tableEnvironment;
@property(assign,readwrite) TSTTableInfo * tableInfo;
@property(assign,readonly) TSTTableModel * tableModel;
@property(assign,readonly) int tableRowsBehavior;
@property(assign,readonly) TSTWPColumnCache * tempWPColumnCache;
@property(assign,readonly) bool useBandedFill;
@property(assign,readonly) NSIndexSet * visibleColumnIndices;
@property(assign,readonly) NSIndexSet * visibleRowIndices;
@property(assign,readonly) TSTWidthHeightCache * widthHeightCache;

+ (double)effectiveTableNameHeightForModel:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
+ (struct CGSize { double x1; double x2; })tableNameTextSize:(id)arg1;

- (id).cxx_construct;
- (id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)addChangeDescriptor:(id)arg1;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 andStrokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (bool)adjustGridColumnForVisibility:(unsigned int*)arg1 isLeft:(bool)arg2;
- (bool)adjustGridRowForVisibility:(unsigned int*)arg1 isTop:(bool)arg2;
- (bool)anyColumnsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyRowsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyRowsUserHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)bandedFillObject;
- (double)calculatedTableNameHeight;
- (double)calculatedTableNameHeightIncludingDynamicResize:(bool)arg1;
- (void)captureDynamicResizeInfo;
- (bool)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)cellIDToWPColumnCache;
- (id)changeDescriptors;
- (id)changeNotifier;
- (void)clearDynamicStrokesForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)clearModelHeightWidthCacheForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)containsAnyContentInRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)customStrokeProvider;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultPaddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)description;
- (id)dupContentCache;
- (double)dynamicAddOrRemoveColumnElementSize;
- (double)dynamicAddOrRemoveRowElementSize;
- (bool)dynamicBandedFill;
- (bool)dynamicBandedFillSetting;
- (id)dynamicCellFillDelegate;
- (int)dynamicColumnAdjustment;
- (id)dynamicColumnMoveDelegate;
- (double)dynamicColumnTabSize;
- (id)dynamicContentDelegate;
- (id)dynamicFontColor;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicFontColorCellRange;
- (double)dynamicHeightResize;
- (id)dynamicInfoGeometry;
- (id)dynamicLayout;
- (id)dynamicLayouts;
- (bool)dynamicRepResize;
- (double)dynamicResizingColumnAdjustment;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingColumnRange;
- (bool)dynamicResizingColumns;
- (double)dynamicResizingRowAdjustment;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingRowRange;
- (bool)dynamicResizingRows;
- (int)dynamicRowAdjustment;
- (id)dynamicRowMoveDelegate;
- (double)dynamicRowTabSize;
- (id)dynamicSavedLayoutGeometry;
- (id)dynamicSelection;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })dynamicSuppressingConditionalStylesCellID;
- (double)dynamicTableNameResize;
- (double)dynamicWidthResize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsFromPadding:(id)arg1;
- (bool)emptyFilteredTable;
- (void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateMergedStrokesAndCapsForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateMergedStrokesForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateMergedStrokesForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id)arg4;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToVisibleNeighbors:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)firstEmptyBodyRow;
- (double)fontHeightOfParagraphStyle:(id)arg1;
- (id)hiddenColumnIndices;
- (id)hiddenRowIndices;
- (id)hiddenRowsColumnsCache;
- (bool)hintIsValid:(id)arg1;
- (bool)inDynamicLayoutMode;
- (id)initWithInfo:(id)arg1;
- (void)invalidateBandedFill;
- (void)invalidateDefaultFontHeights;
- (void)invalidateDynamicResizeInfo;
- (void)invalidateStrokeDefaults;
- (void)invalidateStrokeSpills;
- (void)invalidateTableNameHeight;
- (bool)isColumnHidden:(unsigned char)arg1;
- (bool)isDynamicallyChangingCellFill;
- (bool)isDynamicallyChangingColumnCount;
- (bool)isDynamicallyChangingContent;
- (bool)isDynamicallyChangingFontColorOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)isDynamicallyChangingInfoGeometry;
- (bool)isDynamicallyChangingRowCount;
- (bool)isDynamicallyChangingRowOrColumnCount;
- (bool)isDynamicallyChangingSelection;
- (bool)isDynamicallyColumnTabResizing;
- (bool)isDynamicallyHidingContentOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)isDynamicallyHidingRowsCols;
- (bool)isDynamicallyHidingRowsCols:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (bool)isDynamicallyHidingRowsColsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)isDynamicallyHidingTextOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)isDynamicallyMovingColumns;
- (bool)isDynamicallyMovingRows;
- (bool)isDynamicallyRepressingFrozenHeaders;
- (bool)isDynamicallyResizing:(long long)arg1;
- (bool)isDynamicallyResizing:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (bool)isDynamicallyResizingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)isDynamicallyResizingTableName;
- (bool)isDynamicallyRevealingRowsCols;
- (bool)isDynamicallyRevealingRowsCols:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (bool)isDynamicallyRowTabResizing;
- (bool)isDynamicallySettingBandedFill;
- (bool)isEntireCellRangeHidden:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)isGrouped;
- (bool)isRowHidden:(unsigned short)arg1;
- (bool)isRowUserHidden:(unsigned short)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })layoutCellIDForModelCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)layoutColumnForModelColumn:(unsigned char)arg1;
- (unsigned short)layoutRowForModelRow:(unsigned short)arg1;
- (unsigned int)maxConcurrentTasks;
- (struct CGSize { double x1; double x2; })maximumPartitionSize;
- (void)measureTextForLayoutState:(id)arg1;
- (id)mergeRanges;
- (id)mergedStrokesForGridColumn:(unsigned int)arg1;
- (id)mergedStrokesForGridRow:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })modelCellIDForLayoutCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)modelColumnForLayoutColumn:(unsigned char)arg1;
- (unsigned short)modelRowForLayoutRow:(unsigned short)arg1;
- (id)newLayoutHint;
- (id)newTextEngineForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned int)numCellsPerTask;
- (void)p_clearStrokesForMergesInCellRegion:(id)arg1;
- (void)p_invalidateClearedStrokesForCellRegion:(id)arg1;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridColumn:(unsigned int)arg3 isLeft:(bool)arg4 beginRow:(unsigned int)arg5 endRow:(unsigned int)arg6;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridRow:(unsigned int)arg3 isTop:(bool)arg4 beginColumn:(unsigned int)arg5 endColumn:(unsigned int)arg6;
- (id)p_strokesForGridColumn:(unsigned int)arg1 isLeft:(bool)arg2 takeStrokeWriteLock:(bool)arg3;
- (id)p_strokesForGridRow:(unsigned int)arg1 isTop:(bool)arg2 takeStrokeWriteLock:(bool)arg3;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_validateFittingInfoForEmptyCellsBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 inRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 widthHeightCollection:(id)arg4;
- (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andEndCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 widthHeightCollection:(id)arg3;
- (void)p_validateFittingInfoForEmptyMergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)p_validateStrokesForRegion:(id)arg1;
- (id)p_validationFittingCellRegionForColumnsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingForChangeDescriptorType:(int)arg1 regionFromChangeDescriptor:(id)arg2 currentRegionToValidate:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)processHiddenRowsForExport;
- (void)processLayoutTask:(id)arg1;
- (void)queueCellForValidation:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 cell:(id)arg2 mergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 wrap:(bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(bool)arg7 layoutCacheFlags:(int)arg8 layoutTask:(id)arg9;
- (void)resetModelHeightWidthCache;
- (void)setChangeNotifier:(id)arg1;
- (void)setClearedStrokeForGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (void)setClearedStrokeForGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (void)setDynamicCellBorder:(id)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)setDynamicHeightResize:(double)arg1;
- (void)setDynamicRepResize:(bool)arg1;
- (void)setDynamicSavedLayoutGeometry:(id)arg1;
- (void)setDynamicWidthResize:(double)arg1;
- (void)setMaxConcurrentTasks:(unsigned int)arg1;
- (void)setMaximumPartitionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMergeRanges:(id)arg1;
- (void)setNumCellsPerTask:(unsigned int)arg1;
- (void)setProcessHiddenRowsForExport:(bool)arg1;
- (void)setStrokeSpillForRightGridColumn:(unsigned int)arg1 leftGridColumn:(unsigned int)arg2 inRow:(unsigned int)arg3;
- (void)setTableEnvironment:(int)arg1;
- (void)setTableInfo:(id)arg1;
- (bool)shouldRowUseBandedFill:(unsigned short)arg1;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 atColumnIndex:(unsigned int)arg2;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 atRowIndex:(unsigned int)arg2;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (id)strokesDefaultVendor;
- (void)strokesForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 top:(id*)arg2 left:(id*)arg3 bottom:(id*)arg4 right:(id*)arg5;
- (unsigned long long)tableAreaForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)tableEnvironment;
- (id)tableInfo;
- (id)tableModel;
- (double)tableNameHeight;
- (id)tableNameTextEngine;
- (struct CGSize { double x1; double x2; })tableNameTextSize;
- (int)tableRowsBehavior;
- (id)tableStrokeProvider;
- (id)tempWPColumnCache;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)updateDynamicTableNameSize:(double)arg1;
- (void)updateWHCForMergeRanges;
- (bool)useBandedFill;
- (void)validate;
- (void)validateBandedFill;
- (id)validateCellForDrawing:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 cell:(id)arg2 contents:(id)arg3 wrap:(bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned long long)arg8 pageCount:(unsigned long long)arg9;
- (void)validateChangeDescriptorQueue;
- (void)validateDefaultFontHeights;
- (void)validateDynamicResizeInfo;
- (void)validateFittingInfoForCell:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 mergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 setFitting:(bool)arg4 layoutTask:(id)arg5 widthHeightCollection:(id)arg6;
- (void)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (void)validateFittingInfoWithCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)validateFittingInfoWithCellRangeWorker:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (void)validateLayoutHint:(id)arg1;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validateRowVisibility:(id)arg1;
- (void)validateStrokesArrays;
- (void)validateStrokesForChangeDescriptors:(id)arg1;
- (void)validateTableRowsBehavior;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
- (id)visibleColumnIndices;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
- (id)visibleRowIndices;
- (void)waitForLayoutToComplete;
- (id)widthHeightCache;

@end
