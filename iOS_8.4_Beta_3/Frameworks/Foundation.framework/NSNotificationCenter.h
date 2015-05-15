/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject {
    void *_callback;
    void *_impl;
    void *_pad;
}

+ (id)defaultCenter;

- (void)__mainThreadPostNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (bool)isEmpty;
- (id)mf_addImmediateObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)mf_removeObservers:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationNameOnMainThread:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(bool)arg4;
- (void)postNotificationNameOnMainThreadHandler:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

@end
