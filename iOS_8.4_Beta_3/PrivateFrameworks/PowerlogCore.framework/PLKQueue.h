/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLKQueue : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool _enabled;
    int _fileDescriptor;
    int _kQueue;
    id _kQueueBlock;
    struct __CFFileDescriptor { } *_kqueueDescriptorRef;
    struct __CFRunLoopSource { } *_kqueueDescriptorSource;
    NSString *_path;
}

@property(assign,retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(assign,readwrite) bool enabled;
@property(assign,readwrite) int fileDescriptor;
@property(assign,readwrite) int kQueue;
@property(assign,copy) id kQueueBlock;
@property(assign,readwrite) struct __CFFileDescriptor { }* kqueueDescriptorRef;
@property(assign,readwrite) struct __CFRunLoopSource { }* kqueueDescriptorSource;
@property(assign,copy) NSString * path;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (bool)enabled;
- (int)fileDescriptor;
- (id)initWithPath:(id)arg1 withDispatchQueue:(id)arg2 withBlock:(id)arg3;
- (int)kQueue;
- (id)kQueueBlock;
- (struct __CFFileDescriptor { }*)kqueueDescriptorRef;
- (struct __CFRunLoopSource { }*)kqueueDescriptorSource;
- (id)path;
- (void)setDispatchQueue:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFileDescriptor:(int)arg1;
- (void)setKQueue:(int)arg1;
- (void)setKQueueBlock:(id)arg1;
- (void)setKqueueDescriptorRef:(struct __CFFileDescriptor { }*)arg1;
- (void)setKqueueDescriptorSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setPath:(id)arg1;

@end
