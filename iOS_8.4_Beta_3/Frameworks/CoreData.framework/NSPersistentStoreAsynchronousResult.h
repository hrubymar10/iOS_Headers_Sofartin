/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {
    int _flags;
    id _requestCompletionBlock;
    NSManagedObjectContext *_requestContext;
    NSError *_requestError;
    NSProgress *_requestProgress;
}

@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (retain) NSError *operationError;
@property (retain) NSProgress *progress;
@property (copy) id requestCompletionBlock;

- (void)_cancelProgress;
- (bool)_isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3;
- (id)managedObjectContext;
- (id)operationError;
- (id)progress;
- (id)requestCompletionBlock;
- (void)setOperationError:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequestCompletionBlock:(id)arg1;

@end
