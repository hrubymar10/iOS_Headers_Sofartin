/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgress : NSObject {
    NSString *mMessage;
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
}

@property(getter=isIndeterminate,assign,readonly) bool indeterminate;
@property(assign,readonly) double maxValue;
@property(assign,copy) NSString * message;
@property(assign,readonly) double value;

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)dealloc;
- (id)init;
- (bool)isIndeterminate;
- (double)maxValue;
- (id)message;
- (bool)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (void)setMessage:(id)arg1;
- (double)value;

@end
