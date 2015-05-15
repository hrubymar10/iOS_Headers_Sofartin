/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTree : NSObject <NSCopying> {
    NSMutableDictionary *cache;
    NSString *layoutTag;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    int type;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSString *layoutTag;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *properties;
@property (nonatomic, retain) NSMutableArray *subtrees;
@property (nonatomic) int type;

+ (long long)extraIPhoneIdiom:(long long)arg1 width:(double)arg2 landscape:(bool)arg3;
+ (id)key;
+ (id)keyboard;
+ (id)mergeStringForKeyName:(id)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (bool)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueName;

- (void)_addKeylayoutKeys:(id)arg1;
- (id)_cacheRootNameForKey:(id)arg1;
- (long long)_keyCountOnNamedRow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyplaneFrame;
- (bool)_needsScaling;
- (bool)_renderAsStringKey;
- (int)_variantType;
- (id)activeGeometriesList;
- (id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2;
- (id)alternateKeyplaneName;
- (id)attributeSet:(bool)arg1;
- (id)autolocalizedKeyCacheIterator;
- (bool)avoidAutoDeactivation;
- (bool)avoidsLanguageIndicator;
- (bool)behavesAsShiftKey;
- (bool)boolForProperty:(id)arg1;
- (id)cache;
- (id)cacheDisplayString;
- (void)cacheKey:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (bool)canFadeOutFromState:(int)arg1 toState:(int)arg2;
- (void)clearTransientCaches;
- (int)clipCorners;
- (id)componentName;
- (bool)containsDividerVariant;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)disabled;
- (bool)disablesEdgeSwipe;
- (int)displayRowHint;
- (id)displayString;
- (int)displayType;
- (int)displayTypeHint;
- (int)dragThreshold;
- (bool)dynamicDisplayTypeHint;
- (void)elaborateLayoutWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (double)fadeOutDuration;
- (id)findLeftMoreKey;
- (id)firstCachedKeyWithName:(id)arg1;
- (long long)flickDirection;
- (bool)forceMultitap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)fullRepresentedString;
- (id)geometries;
- (id)geometriesList;
- (id)geometriesOrderedByPosition;
- (id)geometry;
- (id)geometrySet:(bool)arg1;
- (bool)ghost;
- (long long)handBias;
- (bool)hasLayoutTag:(id)arg1;
- (long long)highlightedVariantIndex;
- (id)highlightedVariantsList;
- (int)indexOfSubtree:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (long long)intForProperty:(id)arg1;
- (int)interactionType;
- (bool)isAlphabeticPlane;
- (bool)isDuplicateOfTree:(id)arg1;
- (bool)isEqualToTree:(id)arg1;
- (bool)isExemptFromInputManagerHitTesting;
- (bool)isExemptFromInputManagerLayout;
- (bool)isGenerated;
- (bool)isHashed;
- (bool)isLeafType;
- (bool)isLetters;
- (bool)isSameAsTree:(id)arg1;
- (bool)isShiftKeyPlaneChooser;
- (bool)isShiftKeyplane;
- (bool)isSplit;
- (id)keyAttributes;
- (id)keyForString:(id)arg1;
- (id)keySet;
- (id)keyplaneForKey:(id)arg1;
- (id)keys;
- (id)keysByKeyName:(id)arg1;
- (id)keysForMergeConditions;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionWithoutZip;
- (id)keysWithString:(id)arg1;
- (id)layoutName;
- (id)layoutTag;
- (id)listShapes;
- (id)localizationKey;
- (bool)looksLike:(id)arg1;
- (bool)looksLikeShiftAlternate;
- (id)mergeKeyNames:(id)arg1;
- (bool)modifiesKeyplane;
- (id)name;
- (id)nameFromAttributes;
- (bool)noLanguageIndicator;
- (bool)notUseCandidateSelection;
- (id)numberForProperty:(id)arg1;
- (id)objectForProperty:(id)arg1;
- (void)orderVariantKeys:(bool)arg1;
- (id)overrideDisplayString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (id)parentKey;
- (void)precacheLayoutName:(id)arg1;
- (double)primaryKeylayoutOffset;
- (double)primaryKeylayoutWidthRatio;
- (id)properties;
- (id)recursiveDescription;
- (bool)renderKeyInKeyplane:(id)arg1;
- (int)rendering;
- (id)representedString;
- (long long)selectedVariantIndex;
- (void)setActiveGeometriesList:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisplayRowHint:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (void)setFlickDirection:(long long)arg1;
- (void)setForceMultitap:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometriesList:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGhost:(bool)arg1;
- (void)setHighlightedVariantsList:(id)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setIsGenerated:(bool)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setName:(id)arg1;
- (bool)setObject:(id)arg1 forProperty:(id)arg2;
- (void)setOverrideDisplayString:(id)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParentKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRendering:(int)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setSelectedVariantIndex:(long long)arg1;
- (void)setShape:(id)arg1;
- (void)setSplitMode:(int)arg1;
- (void)setState:(int)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setType:(int)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)setVariantType:(int)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisualStyle:(int)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (id)shape;
- (id)shiftAlternateKeyplaneName;
- (bool)shouldCacheKey;
- (bool)shouldSkipCandidateSelection;
- (bool)shouldSkipCandidateSelectionForVariants;
- (int)splitMode;
- (int)state;
- (id)stringForProperty:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })stylingFromVisualStyle;
- (void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithType:(int)arg1;
- (id)subtrees;
- (bool)subtreesAreOrdered;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (bool)supportsType:(long long)arg1;
- (long long)textAlignment;
- (int)type;
- (id)unhashedName;
- (void)updateDictationKeyOnNumberPads:(bool)arg1;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (bool)usesAdaptiveKeys;
- (bool)usesAutoShift;
- (bool)usesKeyCharging;
- (id)variantDisplayString;
- (id)variantPopupBias;
- (int)variantType;
- (bool)visible;
- (int)visualStyle;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)zipAttributes;
- (void)zipGeometries:(bool)arg1 attributes:(bool)arg2;
- (void)zipGeometrySet;

@end
