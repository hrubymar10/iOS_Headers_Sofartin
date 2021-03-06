/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDElementProduction : NSManagedObject

@property(assign,retain) TDThemeConstant * artworkDraftType;
@property(assign,retain) TDRenditionKeySpec * baseKeySpec;
@property(assign,retain) NSString * comment;
@property(assign,retain) NSDate * dateOfLastChange;
@property(assign,retain) NSNumber * isExcludedFromFilter;
@property(assign,retain) TDNamedElement * name;
@property(assign,retain) TDSchemaPartDefinition * partDefinition;
@property(assign,retain) TDThemeConstant * renditionSubtype;
@property(assign,retain) TDRenditionType * renditionType;
@property(assign,retain) NSSet * renditions;
@property(assign,retain) TDThemeConstant * zeroCodeArtworkInfo;

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (id)associatedFileURLWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (id)relativePath;

@end
