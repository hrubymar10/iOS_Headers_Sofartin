/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYTransaction : NSObject <SYChangeTracking> {
    NSMutableArray *_changes;
    id _completion;
    NSDictionary *_contextInfo;
    NSDictionary *_idsOptions;
    SYStore *_store;
}

@property(assign,retain) NSMutableArray * changes;
@property(assign,copy) id completion;
@property(assign,copy) NSDictionary * contextInfo;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSDictionary * idsOptions;
@property(assign,retain) SYStore * store;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 completion:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)changes;
- (void)commit;
- (void)commitBlocking:(bool)arg1 reportError:(id)arg2;
- (id)completion;
- (id)contextInfo;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 completion:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)idsOptions;
- (id)initWithStore:(id)arg1;
- (void)rollback;
- (void)setChanges:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setIdsOptions:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 completion:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;

@end