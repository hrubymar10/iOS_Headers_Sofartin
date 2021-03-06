/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {
    NSArray *_desiredKeys;
    id _fetchRecordVersionsCompletionBlock;
    id _fetchRecordVersionsProgressBlock;
    bool _isDeleted;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDs;
}

@property(assign,copy) NSArray * desiredKeys;
@property(assign,copy) id fetchRecordVersionsCompletionBlock;
@property(assign,copy) id fetchRecordVersionsProgressBlock;
@property(assign,readwrite) bool isDeleted;
@property(assign,copy) NSString * minimumVersionETag;
@property(assign,retain) NSMutableDictionary * recordErrors;
@property(assign,copy) NSArray * recordIDs;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)desiredKeys;
- (id)fetchRecordVersionsCompletionBlock;
- (id)fetchRecordVersionsProgressBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (bool)isDeleted;
- (id)minimumVersionETag;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordVersionsCompletionBlock:(id)arg1;
- (void)setFetchRecordVersionsProgressBlock:(id)arg1;
- (void)setIsDeleted:(bool)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDs:(id)arg1;

@end
