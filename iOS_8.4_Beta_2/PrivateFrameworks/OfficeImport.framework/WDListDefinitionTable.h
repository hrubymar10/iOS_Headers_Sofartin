/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    NSMutableArray *mListDefinitions;
    WDListDefinition *mNullListDefinition;
}

- (id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2;
- (void)dealloc;
- (id)definitionWithDefinitionId:(int)arg1;
- (id)definitionWithStyleId:(id)arg1;
- (id)definitions;
- (id)initWithDocument:(id)arg1;
- (id)resolvedDefinitionWithDefinitionId:(int)arg1;
- (void)setStyleId:(id)arg1 forDefinitionWithDefinitionId:(int)arg2;

@end
