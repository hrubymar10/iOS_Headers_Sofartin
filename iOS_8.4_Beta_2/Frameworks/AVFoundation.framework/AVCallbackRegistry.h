/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCallbackRegistry : NSObject {
    struct __CFBag { } *_observers;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackRegistry;

- (id)callbackObserver:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)registerCallbackObserver:(id)arg1;
- (void)unregisterCallbackObserver:(id)arg1;

@end