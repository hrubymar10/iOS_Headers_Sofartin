/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQuery : NSObject {
    bool _didStart;
    PSIDatabase *_idx;
    bool _isCanceled;
    int _queryId;
    NSString *_searchText;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (nonatomic, readonly) int queryId;
@property (nonatomic, readonly, copy) NSString *searchText;

- (void)cancel;
- (void)dealloc;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3;
- (bool)isCanceled;
- (int)queryId;
- (void)runWithResultsHandler:(id)arg1;
- (id)searchText;

@end
