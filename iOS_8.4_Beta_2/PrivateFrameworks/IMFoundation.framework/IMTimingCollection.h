/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimingCollection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_timings;
}

- (void)dealloc;
- (id)description;
- (bool)hasKey:(id)arg1;
- (id)init;
- (void)removeTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;

@end
