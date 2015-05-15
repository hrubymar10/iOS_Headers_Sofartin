/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteStatementEnumerator : NSEnumerator {
    id _block;
    bool _closed;
    CKSQLiteStatement *_statement;
}

@property (nonatomic, copy) id block;
@property (nonatomic) bool closed;
@property (nonatomic, retain) CKSQLiteStatement *statement;

- (void).cxx_destruct;
- (id)block;
- (void)close;
- (bool)closed;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 block:(id)arg2;
- (id)nextObject;
- (void)setBlock:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setStatement:(id)arg1;
- (id)statement;

@end
