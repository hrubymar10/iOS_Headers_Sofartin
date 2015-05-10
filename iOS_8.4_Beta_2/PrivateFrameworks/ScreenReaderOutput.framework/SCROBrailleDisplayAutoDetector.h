/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayAutoDetector : NSObject {
    bool _isDetectingDisplays;
    NSMutableDictionary *_iteratorDict;
    struct IONotificationPort { } *_notificationPort;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedDetector;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detectDisplays;
- (id)init;
- (bool)isAutoDetectEnabled;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)stopDetectingDisplays;

@end