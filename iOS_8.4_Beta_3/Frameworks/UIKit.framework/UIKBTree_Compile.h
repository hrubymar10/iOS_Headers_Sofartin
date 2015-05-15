/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTree_Compile : UIKBTree {
    NSMutableDictionary *refs;
    NSMutableDictionary *symbols;
}

@property(assign,readonly) NSArray * refList;
@property(assign,retain) NSMutableDictionary * refs;
@property(assign,retain) NSMutableDictionary * symbols;
@property(assign,readwrite) bool variable;

+ (id)stringEnumForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (int)typeForString:(id)arg1;
+ (id)uniqueNameWithType:(int)arg1;

- (bool)_needsScaling;
- (id)attributeSet:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)geometrySet:(bool)arg1;
- (int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2;
- (int)indexOfSubtreeWithType:(int)arg1;
- (id)initWithType:(int)arg1;
- (bool)isSameAsTree:(id)arg1;
- (id)listAtIndex:(int)arg1;
- (void)mergePropertiesWithOthers:(id)arg1;
- (void)mergePropertiesWithSubtreeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 properties:(id)arg2;
- (void)mergeSubtreesWithOthers:(id)arg1;
- (void)mergeSymbolsWithOthers:(id)arg1;
- (id)refList;
- (id)refs;
- (void)setAttributeSet:(id)arg1;
- (void)setGeometrySet:(id)arg1;
- (void)setRefs:(id)arg1;
- (void)setSymbols:(id)arg1;
- (void)setTarget:(id)arg1 forReference:(id)arg2;
- (void)setVariable:(bool)arg1;
- (int)shapeHash;
- (id)simpleName;
- (int)subtreeHash;
- (int)symbolHash:(id)arg1;
- (id)symbolValues:(id)arg1 withSymbols:(id)arg2;
- (id)symbols;
- (void)uniquifyName;
- (bool)usesSymbols;
- (bool)variable;

@end
