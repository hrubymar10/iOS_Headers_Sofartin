/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMCallMonitor : NSObject {
    id _callCenter;
    NSDate *_lastCallDate;
    bool _wasOnCall;
}

@property(assign,retain) NSDate * dateLastCallEnded;
@property(assign,readonly) bool isOnCall;

+ (id)sharedInstance;

- (id)dateLastCallEnded;
- (void)dealloc;
- (id)init;
- (bool)isOnCall;

@end
