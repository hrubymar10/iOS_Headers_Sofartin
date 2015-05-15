/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAccessQueue : NSObject {
    NSString *_label;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_threadLocalStorageKey;
}

@property(setter=_setSerialQueue:,assign,readwrite) NSObject<OS_dispatch_queue> * _serialQueue;
@property(setter=_setThreadLocalStorageKey:,assign,copy) NSString * _threadLocalStorageKey;
@property(assign,copy) NSString * label;

- (void)_performSynchronousBlockInSerialQueue:(id)arg1;
- (id)_serialQueue;
- (void)_setLabel:(id)arg1;
- (void)_setSerialQueue:(id)arg1;
- (void)_setThreadLocalStorageKey:(id)arg1;
- (id)_threadLocalStorageKey;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(bool)arg2;
- (id)label;
- (void)performAsynchronousBlock:(id)arg1;
- (void)performSynchronousBlock:(id)arg1;

@end
