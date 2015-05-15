/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long userInterfaceIdiom; 
        double displayScale; 
        long long touchLevel; 
        unsigned long long interactionModel; 
        long long horizontalSizeClass; 
        long long verticalSizeClass; 
    } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
}

@property (nonatomic, readonly) bool MPU_hasCompactHeight;
@property (nonatomic, readonly) bool MPU_hasCompactWidth;
@property (nonatomic, readonly) bool MPU_hasRegularHeight;
@property (nonatomic, readonly) bool MPU_hasRegularWidth;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (getter=music_isContainedWithinSplitViewDetail, nonatomic, readonly) bool music_containedWithinSplitViewDetail;
@property (getter=music_isContainedWithinSplitViewPrimary, nonatomic, readonly) bool music_containedWithinSplitViewPrimary;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long verticalSizeClass;

+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)music_traitCollectionWithContainedWithinSplitViewDetail:(bool)arg1;
+ (id)music_traitCollectionWithContainedWithinSplitViewPrimary:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;

- (bool)MPU_hasCompactHeight;
- (bool)MPU_hasCompactWidth;
- (bool)MPU_hasRegularHeight;
- (bool)MPU_hasRegularWidth;
- (long long)_compare:(id)arg1;
- (id)_initWithBuiltinTraitStorage:(struct { long long x1; double x2; long long x3; unsigned long long x4; long long x5; long long x6; }*)arg1 clientDefinedTraits:(id)arg2;
- (bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (id)_valueForTraitNamed:(id)arg1;
- (bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)horizontalSizeClass;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionModel;
- (bool)isEqual:(id)arg1;
- (bool)music_isContainedWithinSplitViewDetail;
- (bool)music_isContainedWithinSplitViewPrimary;
- (long long)touchLevel;
- (bool)tsu_isCompactHeight;
- (bool)tsu_isCompactWidth;
- (long long)userInterfaceIdiom;
- (long long)verticalSizeClass;

@end
