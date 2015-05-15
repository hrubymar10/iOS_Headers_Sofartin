/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedTableNameSelection : TSPObject <TSKArchivedSelection> {
    TSTTableNameSelection *mTableNameSelection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) TSKSelection * selection;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
