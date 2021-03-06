/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventProcessor : NSObject {
    id _HIDEventHandler;
    NSThread *_HIDEventReceiveThread;
    NSString *_HIDEventTapIdentifier;
    int _HIDEventTapPriority;
    bool _handlingHIDEvents;
    bool _handlingSystemEvents;
    NSMutableArray *_hidActualEventTapEnabledReasons;
    bool _ignoreAllHIDEvents;
    bool _ignoreAllSystemEvents;
    bool _shouldNotifyUserEventOccurred;
    bool _shouldRunHIDReceiveThreadRunloop;
    NSMutableArray *_systemActualEventTapEnabledReasons;
    id _systemEventHandler;
    NSString *_systemEventTapIdentifier;
    int _systemEventTapPriority;
}

@property(assign,copy) id HIDEventHandler;
@property(assign,retain) NSThread * HIDEventReceiveThread;
@property(assign,retain) NSString * HIDEventTapIdentifier;
@property(assign,readwrite) int HIDEventTapPriority;
@property(getter=isHandlingHIDEvents,assign,readwrite) bool handlingHIDEvents;
@property(getter=isHandlingSystemEvents,assign,readwrite) bool handlingSystemEvents;
@property(assign,retain) NSMutableArray * hidActualEventTapEnabledReasons;
@property(assign,readonly) NSArray * hidEventTapEnabledReasons;
@property(assign,readwrite) bool ignoreAllHIDEvents;
@property(assign,readwrite) bool ignoreAllSystemEvents;
@property(assign,readwrite) bool shouldNotifyUserEventOccurred;
@property(assign,retain) NSMutableArray * systemActualEventTapEnabledReasons;
@property(assign,copy) id systemEventHandler;
@property(assign,readonly) NSArray * systemEventTapEnabledReasons;
@property(assign,retain) NSString * systemEventTapIdentifier;
@property(assign,readwrite) int systemEventTapPriority;

- (id)HIDEventHandler;
- (id)HIDEventReceiveThread;
- (id)HIDEventTapIdentifier;
- (int)HIDEventTapPriority;
- (void)_installHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
- (void)dealloc;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (id)hidActualEventTapEnabledReasons;
- (id)hidEventTapEnabledReasons;
- (bool)ignoreAllHIDEvents;
- (bool)ignoreAllSystemEvents;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (bool)isHandlingHIDEvents;
- (bool)isHandlingSystemEvents;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)setHIDEventHandler:(id)arg1;
- (void)setHIDEventReceiveThread:(id)arg1;
- (void)setHIDEventTapIdentifier:(id)arg1;
- (void)setHIDEventTapPriority:(int)arg1;
- (void)setHandlingHIDEvents:(bool)arg1;
- (void)setHandlingSystemEvents:(bool)arg1;
- (void)setHidActualEventTapEnabledReasons:(id)arg1;
- (void)setIgnoreAllHIDEvents:(bool)arg1;
- (void)setIgnoreAllSystemEvents:(bool)arg1;
- (void)setShouldNotifyUserEventOccurred:(bool)arg1;
- (void)setSystemActualEventTapEnabledReasons:(id)arg1;
- (void)setSystemEventHandler:(id)arg1;
- (void)setSystemEventTapIdentifier:(id)arg1;
- (void)setSystemEventTapPriority:(int)arg1;
- (bool)shouldNotifyUserEventOccurred;
- (id)systemActualEventTapEnabledReasons;
- (id)systemEventHandler;
- (id)systemEventTapEnabledReasons;
- (id)systemEventTapIdentifier;
- (int)systemEventTapPriority;

@end
