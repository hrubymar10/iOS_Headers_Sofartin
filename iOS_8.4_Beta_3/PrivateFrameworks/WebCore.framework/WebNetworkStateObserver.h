/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebNetworkStateObserver : NSObject {
    const struct NetworkStateNotifier { struct Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)> {} x1; unsigned int x2; unsigned int x3; } *_notifier;
}

@property (nonatomic) const /* Warning: unhandled struct encoding: '{NetworkStateNotifier={Vector<std::__1::function<void (bool)>' */ struct *notifier; /* unknown property attribute:  WTF::CrashOnOverflow>=^{function<void (bool)>}II}BB{RetainPtr<WebNetworkStateObserver>=^v}} */

- (void)dealloc;
- (id)initWithNotifier:(const struct NetworkStateNotifier { struct Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)> {} x1; unsigned int x2; unsigned int x3; }*)arg1;
- (void)networkStateChanged:(id)arg1;
- (const struct NetworkStateNotifier { struct Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)> {} x1; unsigned int x2; unsigned int x3; }*)notifier;
- (void)setNotifier:(const struct NetworkStateNotifier { struct Vector<std::__1::function<void (bool)>, 0, WTF::CrashOnOverflow>=^{function<void (bool)> {} x1; unsigned int x2; unsigned int x3; }*)arg1;

@end
