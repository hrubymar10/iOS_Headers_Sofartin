/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allSpecificsForGeneric:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)g_genericToSpecificPropertySetMap;
+ (id)g_gilliganPropertyStringFromProperty:(int)arg1;
+ (id)g_objectTypeForSpecific:(int)arg1;
+ (id)g_specificPropertyToOperationNameBimap;
+ (id)g_specificToGenericPropertyMap;
+ (void)g_splitProperty:(int)arg1 outStyleOwner:(id*)arg2 outSpecifier:(id*)arg3 outKeyName:(id*)arg4;
+ (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;

- (id)allSpecificsForGeneric:(int)arg1;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (id)g_gilliganPropertyStringFromProperty:(int)arg1;
- (id)g_objectTypeForSpecific:(int)arg1;
- (id)g_specificPropertyToOperationNameBimap;
- (id)g_specificToGenericPropertyMap;
- (void)g_splitProperty:(int)arg1 outStyleOwner:(id*)arg2 outSpecifier:(id*)arg3 outKeyName:(id*)arg4;
- (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)properties;
- (id)shortDescription;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)updateAfterPasteForProperties:(id)arg1 documentRoot:(id)arg2 pasteboardCustomFormatList:(id)arg3;
- (void)updateForCollaborationForProperties:(id)arg1 documentRoot:(id)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end
