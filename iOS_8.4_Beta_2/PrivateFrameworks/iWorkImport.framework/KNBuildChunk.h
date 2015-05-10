/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying> {
    bool _automatic;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    TSPLazyReference *_buildReference;
    unsigned long long _cachedActiveIndexOnSlide;
    unsigned long long _cachedIndexInBuild;
    unsigned long long _cachedIndexOnSlide;
    double _delay;
    double _duration;
    bool _needsAutomaticFromBuildAttributes;
    bool _needsDelayFromBuildAttributes;
    bool _needsDurationFromBuildAttributes;
    bool _needsReferentFromBuildAttributes;
    unsigned long long _referent;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,readonly) unsigned long long activeIndexOnSlide;
@property(getter=isAutomatic,assign,readwrite) bool automatic;
@property(getter=isAutomaticWithPreviousChunk,assign,readonly) bool automaticWithPreviousChunk;
@property(getter=isAutomaticWithPreviousChunkOnSameDrawable,assign,readonly) bool automaticWithPreviousChunkOnSameDrawable;
@property(assign,readonly) NSArray * availableEventTriggers;
@property(assign,readonly) KNBuild * build;
@property(assign,readonly) bool canEditAnimations;
@property(assign,readonly) KNBuildChunkIdentifier * chunkIdentifier;
@property(assign,readwrite) double delay;
@property(assign,readonly) unsigned long long deliveryGroupIndex;
@property(assign,readwrite) double duration;
@property(assign,readonly) unsigned long long eventTrigger;
@property(assign,readonly) bool hasComplement;
@property(assign,readonly) NSUUID * i_buildId;
@property(assign,readonly) unsigned long long indexInBuild;
@property(assign,readonly) unsigned long long indexOnSlide;
@property(assign,readonly) NSSet * inspectableAttributes;
@property(assign,readonly) bool isFirstInBuild;
@property(assign,readonly) bool isFirstInDeliveryGroup;
@property(assign,readonly) bool isFirstOnSlide;
@property(assign,readwrite) unsigned long long referent;
@property(assign,readonly) KNSlide * slide;
@property(assign,readonly) bool supportsWithStart;
@property(assign,readonly) NSString * title;

+ (bool)needsObjectUUID;

- (unsigned long long)activeIndexOnSlide;
- (id)availableEventTriggers;
- (id)build;
- (bool)canBuildWithChunk:(id)arg1;
- (bool)canEditAnimations;
- (id)chunkIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (unsigned long long)deliveryGroupIndex;
- (id)description;
- (void)didInitFromSOS;
- (void)didLoadBuild:(id)arg1;
- (double)duration;
- (unsigned long long)eventTrigger;
- (bool)hasComplement;
- (id)i_buildId;
- (void)i_clearChunkIdentifier;
- (void)i_correctChunkIdentifierToPointAtBuild:(id)arg1;
- (void)i_invalidateChunkIndexInBuildCache;
- (void)i_setBuild:(id)arg1;
- (void)i_setBuildId:(id)arg1;
- (void)i_setChunkIdentifier:(id)arg1;
- (unsigned long long)indexInBuild;
- (unsigned long long)indexOnSlide;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithBuild:(id)arg1;
- (id)initWithBuild:(id)arg1 copyingAttributesFromChunk:(id)arg2;
- (id)initWithBuild:(id)arg1 referent:(unsigned long long)arg2 copyingRemainingAttributesFromChunk:(id)arg3;
- (id)inspectableAttributes;
- (bool)isActive;
- (bool)isAutomatic;
- (bool)isAutomaticWithPreviousChunk;
- (bool)isAutomaticWithPreviousChunkOnSameDrawable;
- (bool)isComplementOfBuildChunk:(id)arg1;
- (bool)isFirstInBuild;
- (bool)isFirstInDeliveryGroup;
- (bool)isFirstOnSlide;
- (void)loadFromArchive:(const struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 unarchiver:(id)arg2;
- (id)nextChunkOnSlide;
- (bool)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(bool)arg2;
- (id)p_chunksBuildingWithThisChunk;
- (bool)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned long long)arg2 automatic:(bool)arg3;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (id)p_stringForReferent:(unsigned long long)arg1;
- (id)p_stringRepresentationWithNotAvailableForIndex:(unsigned long long)arg1;
- (id)previousChunkOnSlide;
- (unsigned long long)referent;
- (void)saveToArchive:(struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomatic:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setReferent:(unsigned long long)arg1;
- (id)slide;
- (bool)supportsWithStart;
- (id)title;

@end
