/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideTree : TSPContainedObject <KNSlideCollection> {
    NSMutableArray *mDisplayedSlideNodeCache;
    TSUPointerKeyDictionary *mFormulaReferenceNamesForSlideNodesCache;
    NSMutableOrderedSet *mSlideNodes;
    NSMutableDictionary *mSlideNodesForFormulaReferenceNamesCache;
    NSMutableDictionary *mSlideNodesForUniqueIdentifiersCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) KNSlideNode *defaultSlideNodeForNewSelection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayedSlideNodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *slideNodes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleSlideNodes;

+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2;

- (void)addSlideNode:(id)arg1 atDepth:(unsigned long long)arg2 dolcContext:(id)arg3;
- (void)addSlideNodeForDocumentUpgrade:(id)arg1 atDepth:(unsigned long long)arg2;
- (unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2;
- (id)childrenOfSlideNode:(id)arg1;
- (void)dealloc;
- (id)defaultSlideNodeForNewSelection;
- (id)descendantsOfSlideNode:(id)arg1 omitSkippedSlideNodes:(bool)arg2 omitCollapsedSlideNodes:(bool)arg3;
- (id)displayedSlideNodes;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (id)initWithArchive:(const struct SlideTreeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)insertSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 dolcContext:(id)arg5;
- (void)invalidateSlideNameCache;
- (bool)isEmpty;
- (void)moveSlideNodes:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 slideNodesChangingDepths:(id)arg4 depthsOfSlideNodesChangingDepths:(id)arg5;
- (unsigned long long)numberOfSlidesUsingMasterSlide:(id)arg1;
- (id)objectEnumerator;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (void)p_cacheSlideNodes;
- (void)p_clearSlideNodeCache;
- (void)p_logSlideTreeErrorWithMessage:(id)arg1 slideNodesOrderBeforeEdit:(id)arg2 depthsBeforeEdit:(id)arg3;
- (id)parentOfSlideNode:(id)arg1;
- (void)reloadDisplayedNodes;
- (void)removeAll;
- (void)removeSlideNodes:(id)arg1 slideNodesChangingDepths:(id)arg2 depthsOfSlideNodesChangingDepths:(id)arg3;
- (void)saveToArchive:(struct SlideTreeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)setDisplayedSlideNodes:(id)arg1;
- (void)slideIndex:(unsigned long long*)arg1 andEventIndex:(unsigned long long*)arg2 forByBuildPageIndex:(unsigned long long)arg3;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeAfterSlideNode:(id)arg1 omitSkippedSlideNodes:(bool)arg2 omitCollapsedSlideNodes:(bool)arg3;
- (id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(bool)arg2;
- (id)slideNodeBeforeSlideNode:(id)arg1 omitSkippedSlideNodes:(bool)arg2 omitCollapsedSlideNodes:(bool)arg3;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(bool)arg2;
- (bool)slideNodeIsDisplayed:(id)arg1;
- (id)slideNodeWithUniqueIdentifier:(id)arg1;
- (id)slideNodes;
- (id)slideNodesInAscendingOrder:(id)arg1;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
- (id)slidesUsingMasterSlide:(id)arg1;
- (id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)visiblePageCountIsSeparatedByBuilds:(bool)arg1;
- (id)visibleSlideNodes;

@end
