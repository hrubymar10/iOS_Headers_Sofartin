/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevelOverrides;
    int mListDefinitionId;
    int mListId;
}

@property(assign,readonly) int listDefinitionId;
@property(assign,readonly) int listId;

- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrides;
- (int)listDefinitionId;
- (int)listId;

@end
