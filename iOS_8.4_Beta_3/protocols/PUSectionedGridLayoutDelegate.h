/* Generated by RuntimeBrowser.
 */

@protocol PUSectionedGridLayoutDelegate <NSObject>

@optional

- (long long)numberOfVisualSectionsForSectionedGridLayout:(PUSectionedGridLayout *)arg1;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didFinalizePrepareTransitionIsAppearing:(bool)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didInvalidateWithContext:(PUSectionedGridLayoutInvalidationContext *)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didPrepareTransitionIsAppearing:(bool)arg2;
- (long long)sectionedGridLayout:(PUSectionedGridLayout *)arg1 maximumRowsForVisualSection:(long long)arg2;
- (NSIndexSet *)sectionedGridLayout:(PUSectionedGridLayout *)arg1 sectionsForVisualSection:(long long)arg2;
- (struct CGPoint { double x1; double x2; })sectionedGridLayout:(PUSectionedGridLayout *)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (NSIndexPath *)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(PUSectionedGridLayout *)arg1;
- (NSString *)sectionedGridLayoutName:(PUSectionedGridLayout *)arg1;
- (bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(PUSectionedGridLayout *)arg1;

@end
