/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {
    struct shared_ptr<TSP::ArchiveInfo> { 
        struct ArchiveInfo {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *messagesData;
@property (nonatomic, readonly) NSString *packageLocator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo {} *x1; struct __shared_weak_count {} *x2; })archiveInfo;
- (bool)canValidateReferences;
- (id)initWithIdentifier:(long long)arg1 archiveInfo:(struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo {} *x1; struct __shared_weak_count {} *x2; })arg2 messagesData:(id)arg3 packageLocator:(id)arg4 objectDelegate:(id)arg5 lazyReferenceDelegate:(id)arg6 delegate:(id)arg7 error:(id*)arg8;
- (const struct Message { int (**x1)(); }*)message;
- (id)messagesData;
- (id)packageLocator;

@end
