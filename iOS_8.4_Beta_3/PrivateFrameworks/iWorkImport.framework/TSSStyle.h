/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStyle : TSPObject <NSCopying, TSKModel, TSKTransformableObject, TSSPropertySource, TSSPropertyValueValidator, TSSStyleClient, TSSStyleObject> {
    bool mIsVariation;
    NSString *mName;
    TSSPropertyMap *mOverridePropertyMap;
    TSSStyle *mParent;
    NSString *mStyleIdentifier;
    TSSStylesheet *mStylesheet;
}

@property(assign,readonly) TSSStyle * baseStyleForVariation;
@property(assign,readonly) NSSet * children;
@property(assign,readonly) NSString * contentTag;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) NSSet * descendants;
@property(assign,copy) NSString * description;
@property(assign,readonly) TSSStyle * firstIdentifiedAncestor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isIdentified;
@property(assign,readonly) bool isNamed;
@property(assign,readonly) bool isVariation;
@property(assign,copy) NSString * name;
@property(assign,readonly) TSSPropertyMap * overridePropertyMap;
@property(assign,readonly) TSSStyle * parent;
@property(assign,readonly) TSSStyle * rootAncestor;
@property(assign,readonly) TSSStyle * rootIdentifiedAncestor;
@property(assign,readonly) NSString * styleIdentifier;
@property(assign,readonly) TSSStylesheet * stylesheet;
@property(assign,readonly) Class superclass;

+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)description;
+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (bool)needsObjectUUID;
+ (struct __CTFont { }*)pCreateFontWithName:(id)arg1 fontSize:(double)arg2;
+ (id)pReplacementForMissingFontName:(id)arg1 outBold:(int*)arg2 outItalic:(int*)arg3 outQuiet:(bool*)arg4;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (id)validateFontInPropertyMap:(id)arg1 parentStyle:(id)arg2 checkedFontMap:(id)arg3;
+ (id)validateFontName:(id)arg1 size:(double)arg2 bold:(bool)arg3 italic:(bool)arg4 checkedFontMap:(id)arg5 newFontName:(id*)arg6 newBold:(bool*)arg7 newItalic:(bool*)arg8;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

- (double)CGFloatValueForProperty:(int)arg1;
- (bool)allowsImplicitComponentOwnership;
- (id)baseStyleForVariation;
- (bool)boolValueForProperty:(int)arg1 defaultValue:(bool)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)children;
- (id)componentRootObject;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (bool)containsProperty:(int)arg1;
- (id)contentTag;
- (id)copyFlattenedWithContext:(id)arg1;
- (id)copyPropertyMap;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (void)dealloc;
- (bool)definesProperty:(int)arg1;
- (id)descendants;
- (double)doubleValueForProperty:(int)arg1;
- (void)fadeReflectionForSwatchGeneration;
- (id)firstIdentifiedAncestor;
- (float)floatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (bool)hasEqualPropertyValues:(id)arg1;
- (bool)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (bool)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (int)intValueForProperty:(int)arg1;
- (bool)isAncestorOf:(id)arg1;
- (bool)isChildOf:(id)arg1;
- (bool)isDescendentOf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyle:(id)arg1 ignoreObjectContext:(bool)arg2;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isIdentified;
- (bool)isNamed;
- (bool)isParentOf:(id)arg1;
- (bool)isRelatedTo:(id)arg1;
- (bool)isVariation;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; float x4; bool x5; bool x6; bool x7; bool x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct Color {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; int x14; int x15; float x16; float x17; int x18; bool x19; bool x20; bool x21; bool x22; struct Color {} *x23; struct ShadowArchive {} *x24; float x25; float x26; struct Color {} *x27; struct Color {} *x28; float x29; bool x30; bool x31; bool x32; bool x33; struct Color {} *x34; float x35; int x36; struct RepeatedPtrField<TSWP::FontFeatureArchive> { void **x_37_1_1; int x_37_1_2; int x_37_1_3; int x_37_1_4; } x37; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x38; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x39; bool x40; bool x41; bool x42; int x43; }*)arg2 unarchiver:(id)arg3;
- (void)loadFromArchive:(const struct StyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 unarchiver:(id)arg2;
- (void)loadParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ParagraphStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; int x4; float x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Color {} *x7; bool x8; bool x9; bool x10; bool x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; struct LineSpacingArchive {} *x18; int x19; float x20; struct Point {} *x21; float x22; float x23; struct TabsArchive {} *x24; float x25; unsigned int x26; bool x27; bool x28; bool x29; bool x30; int x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct StrokeArchive {} *x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x34; bool x35; bool x36; bool x37; bool x38; int x39; struct Reference {} *x40; struct Reference {} *x41; int x42; }*)arg2 unarchiver:(id)arg3;
- (id)name;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)overriddenProperties;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overridePropertyMap;
- (bool)overridePropertyMapIsEqualTo:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(bool)arg3;
- (id)overrideValueForProperty:(int)arg1;
- (bool)overridesAnyProperty;
- (bool)overridesProperty:(int)arg1;
- (bool)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (id)parent;
- (id)propertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg1;
- (id)referencedStyles;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (id)rootAncestor;
- (id)rootIdentifiedAncestor;
- (void)saveCharacterStylePropertiesToArchive:(struct CharacterStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; float x4; bool x5; bool x6; bool x7; bool x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct Color {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; int x14; int x15; float x16; float x17; int x18; bool x19; bool x20; bool x21; bool x22; struct Color {} *x23; struct ShadowArchive {} *x24; float x25; float x26; struct Color {} *x27; struct Color {} *x28; float x29; bool x30; bool x31; bool x32; bool x33; struct Color {} *x34; float x35; int x36; struct RepeatedPtrField<TSWP::FontFeatureArchive> { void **x_37_1_1; int x_37_1_2; int x_37_1_3; int x_37_1_4; } x37; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x38; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x39; bool x40; bool x41; bool x42; int x43; }*)arg1 archiver:(id)arg2;
- (void)saveParagraphStylePropertiesToArchive:(struct ParagraphStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; int x4; float x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Color {} *x7; bool x8; bool x9; bool x10; bool x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; struct LineSpacingArchive {} *x18; int x19; float x20; struct Point {} *x21; float x22; float x23; struct TabsArchive {} *x24; float x25; unsigned int x26; bool x27; bool x28; bool x29; bool x30; int x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct StrokeArchive {} *x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x34; bool x35; bool x36; bool x37; bool x38; int x39; struct Reference {} *x40; struct Reference {} *x41; int x42; }*)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct StyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 archiver:(id)arg2;
- (void)setBoolValue:(bool)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setName:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)styleIdentifier;
- (id)stylesheet;
- (bool)transformsFontSizes;
- (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
- (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
- (id)validateFontWithCheckedFontMap:(id)arg1;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
- (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (id)valueForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;

@end
