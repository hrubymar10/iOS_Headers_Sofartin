/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseDistantResult : ML3DatabaseResult {
    NSArray *_cachedRows;
    ML3DatabaseDistantConnection *_distantConnection;
    NSArray *_parameters;
    NSString *_sql;
}

@property(assign,readonly) ML3DatabaseDistantConnection * distantConnection;
@property(assign,readonly) NSArray * parameters;
@property(assign,readonly) NSString * sql;

- (void).cxx_destruct;
- (bool)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(id)arg1;
- (void)_remoteEnumerateRowsWithBlock:(id)arg1;
- (id)columnNameIndexMap;
- (id)description;
- (id)distantConnection;
- (void)enumerateRowsWithBlock:(id)arg1;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)init;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;
- (id)initWithStatement:(id)arg1;
- (id)parameters;
- (id)sql;

@end