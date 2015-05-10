/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLayout : TSDLayout <TSWPLayoutOwner, TSWPLayoutTarget> {
    NSMutableArray *_columns;
    TSWPLayoutManager *_layoutManager;
    TSWPStorage *_storage;
    bool _textLayoutValid;
}

@property(assign,readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property(assign,retain) NSMutableArray * anchoredDrawablesForRelayout;
@property(assign,readonly) unsigned int autosizeFlags;
@property(assign,readonly) TSDCanvas * canvas;
@property(assign,retain) NSMutableArray * columns;
@property(assign,readonly) struct CGSize { double x1; double x2; } currentSize;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer;
@property(assign,readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) struct __CFLocale { }* hyphenationLocale;
@property(assign,readonly) TSUBezierPath * interiorClippingPath;
@property(assign,readonly) bool isInstructional;
@property(assign,readonly) bool layoutIsValid;
@property(assign,readonly) TSWPLayoutManager * layoutManager;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property(assign,readonly) double maxAnchorY;
@property(assign,readonly) struct CGSize { double x1; double x2; } maxSize;
@property(assign,readonly) struct CGSize { double x1; double x2; } minSize;
@property(assign,readonly) int naturalAlignment;
@property(assign,readonly) int naturalDirection;
@property(assign,readonly) TSPObject<TSDHint> * nextTargetFirstChildHint;
@property(assign,retain) <TSWPOffscreenColumn> * nextTargetFirstColumn;
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(assign,readonly) unsigned long long pageCount;
@property(assign,readonly) unsigned long long pageNumber;
@property(assign,readonly) TSDLayout * parentLayoutForInlineAttachments;
@property(assign,readonly) struct CGPoint { double x1; double x2; } position;
@property(assign,retain) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(assign,readonly) bool shouldHyphenate;
@property(assign,readonly) bool shouldWrapAroundExternalDrawables;
@property(assign,readonly) TSWPStorage * storage;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool textIsVertical;
@property(assign,readonly) bool textLayoutValid;
@property(assign,readonly) int verticalAlignment;
@property(assign,readonly) bool wantsLineFragments;

- (void)addAttachmentLayout:(id)arg1;
- (id)additionalReliedOnLayoutsForTextWrap;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (bool)caresAboutStorageChanges;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)dependentLayouts;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithInfo:(id)arg1 storage:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void*)initialLayoutState;
- (id)interiorClippingPath;
- (void)invalidateForFootnoteNumberingChange;
- (bool)invalidateForPageCountChange;
- (void)invalidateParentForAutosizing;
- (void)invalidateSize;
- (void)invalidateTextLayout;
- (bool)isInstructional;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (bool)layoutIsValid;
- (id)layoutManager;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)nextTargetTopicNumbers;
- (void)p_clearOutLayoutManager;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
- (void)p_invalidateTextLayout;
- (bool)p_parentAutosizes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_protectedRectWithinLayoutForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForSelectionPath:(id)arg1 useParagraphModeRects:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectInRootForSelectionPath:(id)arg1 useParagraphModeRects:(bool)arg2;
- (void)p_validateTextLayout;
- (id)p_wpLayoutParent;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)previousTargetTopicNumbers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (id)reliedOnLayouts;
- (Class)repClassOverride;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldDisplayGuides;
- (bool)shouldProvideSizingGuides;
- (bool)shouldWrapAroundExternalDrawables;
- (id)storage;
- (id)styleProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textColorOverride;
- (bool)textIsVertical;
- (bool)textLayoutValid;
- (id)textWrapper;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (bool)wantsLineFragments;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)wrappableChildInvalidated:(id)arg1;

@end
