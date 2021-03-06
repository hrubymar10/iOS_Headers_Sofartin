/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObject : NSObject {
    int _classType;
    long long _identifier;
}

@property(assign,readonly) int classType;
@property(assign,readonly) long long dataState;
@property(assign,readonly) NSString * fileState;
@property(assign,readonly) NSURL * fileURL;
@property(assign,readonly) bool hasDataState;
@property(assign,readonly) bool hasFileState;
@property(assign,readonly) long long identifier;

+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;
+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;

- (int)classType;
- (long long)dataState;
- (id)fileState;
- (id)fileURL;
- (bool)hasDataState;
- (bool)hasFileState;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2;

@end
