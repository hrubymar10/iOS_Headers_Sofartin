/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLClientTransaction : PLClientServerTransaction {
    NSObject<OS_dispatch_semaphore> *_fdResourceSemaphore;
    int _fileDescriptor;
    NSString *_path;
    id _processAssertion;
}

@property(assign,readwrite) NSObject<OS_dispatch_semaphore> * fdResourceSemaphore;
@property(assign,readwrite) int fileDescriptor;
@property(assign,retain) NSString * path;
@property(assign,retain) id processAssertion;

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (void)abortTransaction;
- (void)completeTransaction;
- (void)dealloc;
- (id)description;
- (id)fdResourceSemaphore;
- (int)fileDescriptor;
- (id)init;
- (id)path;
- (id)processAssertion;
- (void)setFdResourceSemaphore:(id)arg1;
- (void)setFileDescriptor:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setProcessAssertion:(id)arg1;

@end
