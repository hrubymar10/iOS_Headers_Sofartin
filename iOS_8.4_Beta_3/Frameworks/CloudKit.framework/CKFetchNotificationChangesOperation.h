/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperation : CKOperation {
    id _fetchNotificationChangesCompletionBlock;
    bool _moreComing;
    id _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    CKServerChangeToken *_resultServerChangeToken;
    unsigned long long _resultsLimit;
}

@property(assign,copy) id fetchNotificationChangesCompletionBlock;
@property(assign,readwrite) bool moreComing;
@property(assign,copy) id notificationChangedBlock;
@property(assign,copy) CKServerChangeToken * previousServerChangeToken;
@property(assign,retain) CKServerChangeToken * resultServerChangeToken;
@property(assign,readwrite) unsigned long long resultsLimit;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchNotificationChangesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (bool)moreComing;
- (id)notificationChangedBlock;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setFetchNotificationChangesCompletionBlock:(id)arg1;
- (void)setMoreComing:(bool)arg1;
- (void)setNotificationChangedBlock:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
