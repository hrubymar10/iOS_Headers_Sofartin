/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeInfo : TSDStyledInfo <TSDInfoWithPathSource, TSDMixing, TSDReducableInfo, TSKSearchable> {
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
}

@property(getter=isAnchoredToText,assign,readonly) bool anchoredToText;
@property(getter=isAttachedToBodyText,assign,readonly) bool attachedToBodyText;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) TSDFill * fill;
@property(getter=isFloatingAboveText,assign,readonly) bool floatingAboveText;
@property(assign,copy) TSDInfoGeometry * geometry;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) TSDLineEnd * headLineEnd;
@property(getter=isInlineWithText,assign,readonly) bool inlineWithText;
@property(assign,readwrite) bool matchesObjectPlaceholderGeometry;
@property(assign,readwrite) TSPObject<TSDOwningAttachment> * owningAttachment;
@property(assign,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(assign,readwrite) NSObject<TSDContainerInfo> * parentInfo;
@property(assign,retain) TSDPathSource * pathSource;
@property(assign,readonly) TSDShapeStyle * shapeStyle;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool supportsShrinkTextToFit;
@property(assign,readonly) bool supportsTextInset;
@property(assign,copy) TSDLineEnd * tailLineEnd;

- (id)animationFilters;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)fill;
- (id)headLineEnd;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct Reference {} *x6; struct PathSourceArchive {} *x7; struct LineEndArchive {} *x8; struct LineEndArchive {} *x9; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectForProperty:(int)arg1;
- (void)p_correctLineSegmentGeometry;
- (void)p_correctNearZeroWidthLines;
- (bool)pathIsOpen;
- (id)pathSource;
- (Class)repClass;
- (void)saveToArchive:(struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct Reference {} *x6; struct PathSourceArchive {} *x7; struct LineEndArchive {} *x8; struct LineEndArchive {} *x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setHeadLineEnd:(id)arg1;
- (void)setPathSource:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTailLineEnd:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shapeStyle;
- (bool)shouldFlipLineEndsForStyle:(id)arg1 isStyleTailEndOnLeft:(int)arg2;
- (id)style;
- (Class)styleClass;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (bool)supportsShrinkTextToFit;
- (bool)supportsTextInset;
- (id)tailLineEnd;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;

@end
