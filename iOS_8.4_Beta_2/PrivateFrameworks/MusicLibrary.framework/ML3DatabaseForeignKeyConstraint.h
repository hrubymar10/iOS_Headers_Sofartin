/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseForeignKeyConstraint : NSObject {
    NSArray *_foreignColumns;
    ML3DatabaseTable *_foreignTable;
    NSArray *_localColumns;
}

@property(assign,readonly) NSArray * foreignColumns;
@property(assign,readonly) ML3DatabaseTable * foreignTable;
@property(assign,readonly) NSArray * localColumns;

- (void).cxx_destruct;
- (id)_foreignKeyClauseSQL;
- (id)foreignColumns;
- (id)foreignTable;
- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;
- (id)localColumns;

@end
