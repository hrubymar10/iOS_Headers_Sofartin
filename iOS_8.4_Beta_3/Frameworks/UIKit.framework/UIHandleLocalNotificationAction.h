/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleLocalNotificationAction : BSAction {
    UILocalNotification *_cachedNotification;
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
}

@property(assign,copy) NSString * action;
@property(assign,copy) UILocalNotification * notification;

- (long long)UIActionType;
- (id)_initWithNotification:(id)arg1 action:(id)arg2 type:(long long)arg3 withHandler:(id)arg4;
- (id)action;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithNotification:(id)arg1;
- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(id)arg3;
- (id)initWithNotification:(id)arg1 withHandler:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
