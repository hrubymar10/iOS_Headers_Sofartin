/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventTapManager : NSObject {
    NSMutableArray *_addedEventTapPairs;
    NSRecursiveLock *_eventTapLock;
    NSMutableArray *_eventTaps;
    id _installationEventRepPost;
    id _installationGSCallback;
    id _installationHIDCallback;
    struct __IOHIDEventSystemClient { } *_ioSystemPostBackClient;
    bool _isEnumeratingEventTaps;
    NSMutableSet *_removedEventTapIdentifiers;
    bool _shouldReorderEventTaps;
}

@property (nonatomic, copy) id installationEventRepPost;
@property (nonatomic, copy) id installationGSCallback;
@property (nonatomic, copy) id installationHIDCallback;

+ (id)sharedManager;

- (id)_copyCurrentEventTapPairs;
- (void)_enumerateEventTapPairsUsingBlock:(id)arg1;
- (void)_installEventTap:(id)arg1;
- (void)_installHIDFilter:(id)arg1;
- (void)_installSystemEventTap:(id)arg1;
- (bool)_processGSEvent:(struct { int x1; int x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned long long x11; unsigned char x12[0]; }*)arg1;
- (bool)_processHIDEvent:(struct __IOHIDEvent { }*)arg1 taskPort:(unsigned int)arg2 bundleId:(id)arg3;
- (void)_removeHIDEventTapFilter:(id)arg1;
- (void)_reorderEventTaps;
- (void)_setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)_setGSEventTapCallback:(void*)arg1;
- (void)_setHIDEventTapCallback:(void*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)installEventTap:(id)arg1 identifier:(id)arg2 type:(int)arg3;
- (id)installationEventRepPost;
- (id)installationGSCallback;
- (id)installationHIDCallback;
- (void)removeEventTap:(id)arg1;
- (void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(bool)arg3 namedTaps:(id)arg4;
- (void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2;
- (void)setEventTapPriority:(id)arg1 priority:(int)arg2;
- (void)setInstallationEventRepPost:(id)arg1;
- (void)setInstallationGSCallback:(id)arg1;
- (void)setInstallationHIDCallback:(id)arg1;

@end
