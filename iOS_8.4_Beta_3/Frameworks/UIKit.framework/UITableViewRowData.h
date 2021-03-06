/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRowData : NSObject <NSCopying> {
    bool _estimatesRowHeights;
    NSIndexPath *_gapIndexPath;
    double _heightForTableHeaderViewHiding;
    double _minimumRowHeight;
    long long _numSections;
    NSIndexPath *_reorderedIndexPath;
    double _reorderedRowHeight;
    id *_sectionRowData;
    long long _sectionRowDataCapacity;
    double _tableBottomPadding;
    double _tableFooterHeight;
    bool _tableFooterHeightValid;
    double _tableHeaderHeight;
    bool _tableHeaderHeightValid;
    double _tableSidePadding;
    bool _tableSidePaddingValid;
    double _tableTopPadding;
    UITableView *_tableView;
    double _tableViewWidth;
}

@property (nonatomic) bool estimatesRowHeights;
@property (nonatomic, readonly) double heightForAutohidingTableHeaderView;
@property (nonatomic, readonly) double heightForTableHeaderViewHiding;
@property (nonatomic) double minimumRowHeight;
@property (nonatomic, readonly) NSIndexPath *reorderGapIndexPath;
@property (nonatomic, readonly) double reorderedRowHeight;
@property (nonatomic) double tableBottomPadding;
@property (nonatomic) double tableSidePadding;
@property (nonatomic) double tableTopPadding;

- (void)_ensureSectionOffsetIsValidForSection:(long long)arg1;
- (long long)_sectionForPoint:(struct CGPoint { double x1; double x2; })arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3;
- (long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long*)arg2;
- (void)_updateNumSections;
- (void)_updateSectionRowDataArrayForNumSections:(long long)arg1;
- (void)_updateTopAndBottomPadding;
- (void)addReorderGapFromIndexPath:(id)arg1;
- (void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)ensureAllSectionsAreValid;
- (bool)estimatesRowHeights;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingRectForFooterInSection:(long long)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingRectForHeaderInSection:(long long)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)footerAlignmentForSection:(long long)arg1;
- (long long)globalRowForRowAtIndexPath:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })globalRowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 canGuess:(bool)arg2;
- (bool)hasFooterForSection:(long long)arg1;
- (bool)hasHeaderForSection:(long long)arg1;
- (long long)headerAlignmentForSection:(long long)arg1;
- (double)heightForAutohidingTableHeaderView;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(bool)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(bool)arg2;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(bool)arg3;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(bool)arg3 adjustForReorderedRow:(bool)arg4;
- (double)heightForSection:(long long)arg1;
- (double)heightForTable;
- (double)heightForTableFooterView;
- (double)heightForTableHeaderView;
- (double)heightForTableHeaderViewHiding;
- (id)indexPathForRowAtGlobalRow:(long long)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTableView:(id)arg1;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (void)invalidateAllSections;
- (void)invalidateSection:(long long)arg1;
- (double)maxFooterTitleWidthForSection:(long long)arg1;
- (double)maxHeaderTitleWidthForSection:(long long)arg1;
- (double)minimumRowHeight;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (long long)numberOfRows;
- (long long)numberOfRowsBeforeSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)offsetForSection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForTable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForTableFooterView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForTableHeaderView;
- (void)removeReorderGapFromIndexPath:(id)arg1;
- (id)reorderGapIndexPath;
- (id)reorderedIndexPath;
- (double)reorderedRowHeight;
- (long long)sectionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)sectionForSectionRowData:(id)arg1;
- (int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2;
- (int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEstimatesRowHeights:(bool)arg1;
- (void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2;
- (void)setHeightForTableHeaderViewHiding:(double)arg1;
- (void)setMinimumRowHeight:(double)arg1;
- (void)setReorderedIndexPath:(id)arg1;
- (void)setTableBottomPadding:(double)arg1;
- (void)setTableSidePadding:(double)arg1;
- (void)setTableTopPadding:(double)arg1;
- (bool)shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (double)tableBottomPadding;
- (void)tableFooterHeightDidChangeToHeight:(double)arg1;
- (void)tableHeaderHeightDidChangeToHeight:(double)arg1;
- (double)tableSidePadding;
- (double)tableTopPadding;
- (void)tableViewWidthDidChangeToWidth:(double)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
