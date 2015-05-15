/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEUserNotification : NSObject {
    id _callback;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    bool _isBanner;
    struct __CFUserNotification { } *_notification;
    struct __CFRunLoopSource { } *_notificationSource;
}

@property(assign,copy) id callback;
@property(assign,retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(assign,readwrite) bool isBanner;
@property(assign,readwrite) struct __CFUserNotification { }* notification;
@property(assign,readwrite) struct __CFRunLoopSource { }* notificationSource;

- (void).cxx_destruct;
- (id)callback;
- (id)callbackQueue;
- (void)cancel;
- (void)dealloc;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 disagreeMessage:(id)arg3;
- (bool)isBanner;
- (struct __CFUserNotification { }*)notification;
- (struct __CFRunLoopSource { }*)notificationSource;
- (bool)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(id)arg2;
- (void)setCallback:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setIsBanner:(bool)arg1;
- (void)setNotification:(struct __CFUserNotification { }*)arg1;
- (void)setNotificationSource:(struct __CFRunLoopSource { }*)arg1;

@end
