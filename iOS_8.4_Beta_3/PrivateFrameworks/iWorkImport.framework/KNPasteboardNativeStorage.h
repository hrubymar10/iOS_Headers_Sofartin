/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPasteboardNativeStorage : TSPObject {
    struct CGSize { 
        double width; 
        double height; 
    } _originalShowSize;
    NSArray *mBuildChunks;
    NSSet *mBuilds;
    NSSet *mCollapsedSlideNodes;
    NSArray *mDisplayedSlideNodes;
    NSArray *mDrawables;
    NSArray *mGeometriesInRoot;
    NSArray *mMasterSlideNodes;
    struct CGSize { 
        double width; 
        double height; 
    } mOriginalShowSize;
    NSSet *mOutlineCollapsedSlideNodes;
    NSSet *mOutlineHasBodySlideNodes;
    NSString *mSlideNodeUUID;
    NSArray *mSlideNodes;
    NSArray *mTextStorageTitleRanges;
    NSDictionary *mThemeCurves;
}

@property (nonatomic, readonly) NSArray *buildChunks;
@property (nonatomic, readonly) NSSet *builds;
@property (nonatomic, readonly) NSSet *collapsedSlideNodes;
@property (nonatomic, readonly) NSArray *displayedSlideNodes;
@property (nonatomic, readonly) NSArray *drawables;
@property (nonatomic, readonly) NSArray *geometriesInRoot;
@property (nonatomic, readonly) NSArray *nonPlaceholderDrawables;
@property (nonatomic) struct CGSize { double x1; double x2; } originalShowSize;
@property (nonatomic, readonly) NSSet *outlineCollapsedSlideNodes;
@property (nonatomic, readonly) NSSet *outlineHasBodySlideNodes;
@property (nonatomic, readonly) NSArray *placeholderDrawables;
@property (nonatomic, readonly) NSString *slideNodeUUID;
@property (nonatomic, readonly) NSArray *slideNodes;
@property (nonatomic, readonly) NSArray *textStorageTitleRanges;
@property (nonatomic, readonly) NSDictionary *themeCurves;

- (id)buildChunks;
- (id)builds;
- (id)collapsedSlideNodes;
- (void)dealloc;
- (id)displayedSlideNodes;
- (id)drawables;
- (id)drawablesSubstitutingRootGeometries;
- (id)geometriesInRoot;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 drawables:(id)arg2 builds:(id)arg3 buildChunks:(id)arg4 themeCurves:(id)arg5;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 textStorageTitleRanges:(id)arg4 drawables:(id)arg5 builds:(id)arg6 buildChunks:(id)arg7 themeCurves:(id)arg8 drawableGeometriesInRoot:(id)arg9 slideNodeUUID:(id)arg10;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 textStorageTitleRanges:(id)arg4 themeCurves:(id)arg5;
- (id)initWithContext:(id)arg1 slideNodes:(id)arg2 displayedSlideNodes:(id)arg3 themeCurves:(id)arg4;
- (void)loadFromArchive:(const struct PasteboardNativeStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct Size {} *x14; struct RepeatedPtrField<TSP::Range> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct RepeatedPtrField<TSD::GeometryArchive> { void **x_16_1_1; int x_16_1_2; int x_16_1_3; int x_16_1_4; } x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; struct RepeatedPtrField<KN::ThemeCustomTimingCurveArchive> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; }*)arg1 unarchiver:(id)arg2;
- (id)nonPlaceholderDrawables;
- (struct CGSize { double x1; double x2; })originalShowSize;
- (void)originalShowSize:(struct CGSize { double x1; double x2; })arg1;
- (id)outlineCollapsedSlideNodes;
- (id)outlineHasBodySlideNodes;
- (id)placeholderDrawables;
- (void)saveToArchive:(struct PasteboardNativeStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<TSP::Reference> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct Size {} *x14; struct RepeatedPtrField<TSP::Range> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct RepeatedPtrField<TSD::GeometryArchive> { void **x_16_1_1; int x_16_1_2; int x_16_1_3; int x_16_1_4; } x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; struct RepeatedPtrField<KN::ThemeCustomTimingCurveArchive> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setOriginalShowSize:(struct CGSize { double x1; double x2; })arg1;
- (id)slideNodeUUID;
- (id)slideNodes;
- (id)slideNodesSubstitutingDepthsBasedOnMinimumDepth:(unsigned long long)arg1;
- (id)textStorageTitleRanges;
- (id)themeCurves;

@end
