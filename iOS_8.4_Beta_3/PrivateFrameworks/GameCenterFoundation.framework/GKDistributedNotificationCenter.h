/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDistributedNotificationCenter : NSObject <NSXPCListenerDelegate> {
    id _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CPDistributedNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)defaultCenter;

- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end
