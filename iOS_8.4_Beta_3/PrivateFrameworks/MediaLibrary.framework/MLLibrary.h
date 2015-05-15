/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
 */

@interface MLLibrary : NSObject {
    struct shared_ptr<mlcore::Library> { 
        struct Library {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _coreLibrary;
}

@property (nonatomic) struct shared_ptr<mlcore::Library> { struct Library {} *x1; struct __shared_weak_count {} *x2; } coreLibrary;
@property (nonatomic, readonly) NSString *identifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::Library> { struct Library {} *x1; struct __shared_weak_count {} *x2; })coreLibrary;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setCoreLibrary:(struct shared_ptr<mlcore::Library> { struct Library {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
