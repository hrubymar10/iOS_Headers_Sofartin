/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationAddedColumn : NSObject {
    NSString *_columnName;
    NSString *_foreignColumnName;
    NSString *_foreignTableName;
    NSString *_joinColumnName;
}

@property(assign,readonly) NSString * columnName;
@property(assign,readonly) NSString * foreignColumnName;
@property(assign,readonly) NSString * foreignTableName;
@property(assign,readonly) NSString * joinColumnName;
@property(assign,readonly) bool shouldImportFromForeignTable;

- (void).cxx_destruct;
- (id)columnName;
- (id)foreignColumnName;
- (id)foreignTableName;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;
- (id)joinColumnName;
- (bool)shouldImportFromForeignTable;

@end
