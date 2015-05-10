/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDistributedNotificationCenterObserver : NSObject {
    id _block;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property(assign,readonly) id block;
@property(assign,readonly) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(assign,readonly) NSString * name;

- (id)block;
- (void)dealloc;
- (id)dispatchQueue;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (id)name;

@end
