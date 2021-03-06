/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNode : TSPObject <TSCEResolverContainer, TSKDocumentObject, TSKModel, TSKSearchTarget> {
    unsigned long long _eventCount;
    bool _eventCountIsUpToDate;
    bool _hasExplicitBuilds;
    bool _hasExplicitBuildsIsUpToDate;
    NSMutableDictionary *_slideSpecificHyperlinkMap;
    NSArray *mChildren;
    NSString *mClassicUniqueID;
    NSString *mCopiedFromSlideIdentifier;
    unsigned long long mDepth;
    bool mHasBodyInOutlineView;
    bool mHasNote;
    bool mHasTransition;
    bool mIsCollapsed;
    bool mIsCollapsedInOutlineView;
    bool mIsHidden;
    NSString *mObsoleteUniqueIdentifier;
    bool mSlideNumberVisible;
    TSPLazyReference *mSlideReference;
    unsigned long long mSlideSpecificHyperlinksCount;
    KNSlideTree *mSlideTree;
    unsigned int mTableNameCounter;
    NSMutableDictionary *mThumbnails;
    bool mThumbnailsAreDirty;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic) NSString *classicUniqueID;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedInOutlineView, nonatomic) bool collapsedInOutlineView;
@property (nonatomic, retain) NSString *copiedFromSlideIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic) bool hasBodyInOutlineView;
@property (nonatomic, readonly) bool hasBuildEvents;
@property (nonatomic, readonly) bool hasChildren;
@property (nonatomic, readonly) bool hasExplicitBuilds;
@property (nonatomic) bool hasNote;
@property (nonatomic) bool hasTransition;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) bool isSlideNumberVisible;
@property (nonatomic, readonly) KNSlideNode *next;
@property (nonatomic, readonly) KNSlideNode *nextSkippingCollapsed;
@property (nonatomic, readonly) KNSlideNode *nextSkippingHidden;
@property (nonatomic, readonly) KNSlideNode *previous;
@property (nonatomic, readonly) KNSlideNode *previousSkippingCollapsed;
@property (nonatomic, readonly) KNSlideNode *previousSkippingHidden;
@property (nonatomic, retain) KNAbstractSlide *slide;
@property (nonatomic, readonly) KNAbstractSlide *slideIfLoaded;
@property (nonatomic, readonly) NSDictionary *slideSpecificHyperlinkMap;
@property (nonatomic) KNSlideTree *slideTree;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *thumbnails;
@property (nonatomic) bool thumbnailsAreDirty;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)needsObjectUUID;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (id)slideNodeForSelectionPath:(id)arg1;
+ (id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2;

- (void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)addOldModelDescendantsToSlideTree:(id)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2;
- (id)childEnumerator;
- (id)childSearchTargets;
- (id)children;
- (id)classicUniqueID;
- (id)copiedFromSlideIdentifier;
- (id)copyForPasteboard:(id)arg1;
- (void)dealloc;
- (unsigned long long)depth;
- (id)descendants;
- (id)descendantsOmittingSkippedSlideNodes:(bool)arg1 omittingCollapsedSlideNodes:(bool)arg2;
- (void)didLoadSlide:(id)arg1;
- (unsigned long long)eventCount;
- (bool)hasBodyInOutlineView;
- (bool)hasBuildEvents;
- (bool)hasChildren;
- (bool)hasExplicitBuilds;
- (bool)hasNote;
- (bool)hasSlideSpecificHyperlinkToNode:(id)arg1;
- (bool)hasSlideSpecificHyperlinks;
- (bool)hasTransition;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)invalidateBuildEventCountCaches;
- (bool)isCollapsed;
- (bool)isCollapsedInOutlineView;
- (bool)isHidden;
- (bool)isSlideNumberVisible;
- (void)loadFromArchive:(const struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::DataReference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Size> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; unsigned int x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; unsigned int x18; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; unsigned int x21; bool x22; bool x23; bool x24; bool x25; struct RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; struct Reference {} *x27; struct RepeatedPtrField<TSP::Reference> { void **x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; } x28; }*)arg1 unarchiver:(id)arg2;
- (id)next;
- (id)nextSkippingCollapsed;
- (id)nextSkippingHidden;
- (unsigned int)nextUntitledResolverIndex;
- (unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2;
- (void)p_addHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2;
- (void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2;
- (void)p_commonInit;
- (unsigned long long)p_eventCount;
- (void)p_removeHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2;
- (void)p_updateHasExplicitBuilds;
- (id)previous;
- (id)previousSkippingCollapsed;
- (id)previousSkippingHidden;
- (void)removeAllThumbnails;
- (void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)removeObsoleteFieldsFor20Upgrade;
- (void)removeThumbnailAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)resolverMatchingName:(id)arg1;
- (bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned long long)safeEventCount;
- (bool)safeHasBuildEvents;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchive:(struct SlideNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::DataReference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Size> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; unsigned int x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; unsigned int x18; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; unsigned int x21; bool x22; bool x23; bool x24; bool x25; struct RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry> { void **x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; } x26; struct Reference {} *x27; struct RepeatedPtrField<TSP::Reference> { void **x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; } x28; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setClassicUniqueID:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setCollapsedInOutlineView:(bool)arg1;
- (void)setCopiedFromSlideIdentifier:(id)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setHasBodyInOutlineView:(bool)arg1;
- (void)setHasNote:(bool)arg1;
- (void)setHasTransition:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsSlideNumberVisible:(bool)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideTree:(id)arg1;
- (void)setThumbnailsAreDirty:(bool)arg1;
- (id)slide;
- (id)slideIfLoaded;
- (id)slideSpecificHyperlinkMap;
- (id)slideTree;
- (id)thumbnails;
- (bool)thumbnailsAreDirty;
- (id)uniqueIdentifier;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1;
- (void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
