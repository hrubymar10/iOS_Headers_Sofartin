/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASModelEnumerator : NSEnumerator {
    struct sqlite3 { } *_db;
    id _stepBlock;
    struct sqlite3_stmt { } *_stmt;
}

@property(assign,readwrite) struct sqlite3 { }* db;
@property(assign,copy) id stepBlock;
@property(assign,readwrite) struct sqlite3_stmt { }* stmt;

+ (id)enumeratorWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id)arg3;

- (void).cxx_destruct;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1 query:(id)arg2 stepBlock:(id)arg3;
- (id)nextObject;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setStepBlock:(id)arg1;
- (void)setStmt:(struct sqlite3_stmt { }*)arg1;
- (id)stepBlock;
- (struct sqlite3_stmt { }*)stmt;

@end
