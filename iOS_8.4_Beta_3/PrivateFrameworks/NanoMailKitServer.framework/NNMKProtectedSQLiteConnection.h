/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {
    bool _protectedDatabaseAttached;
    NSString *_protectedDatabaseName;
    NSString *_protectedDatabasePath;
}

@property(assign,readonly) bool protectedDatabaseAttached;
@property(assign,retain) NSString * protectedDatabaseName;
@property(assign,retain) NSString * protectedDatabasePath;

- (void).cxx_destruct;
- (id)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)dettachProtectedDatabase;
- (id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5;
- (bool)protectedDatabaseAttached;
- (id)protectedDatabaseName;
- (id)protectedDatabasePath;
- (void)setProtectedDatabaseName:(id)arg1;
- (void)setProtectedDatabasePath:(id)arg1;

@end