/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLimitingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2;
- (id)queue;

@end