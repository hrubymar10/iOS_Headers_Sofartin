/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSemaphore : NSObject {
    NSMutableSet *_interestedObjects;
    NSString *_key;
    NSMutableSet *_pendingDoneObjects;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _timeout;
}

@property (retain) NSMutableSet *interestedObjects;
@property (retain) NSString *key;
@property (retain) NSMutableSet *pendingDoneObjects;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property double timeout;

+ (id)sharedSemaphoreForKey:(id)arg1;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1;
- (id)interestedObjects;
- (id)key;
- (id)pendingDoneObjects;
- (id)semaphore;
- (void)setInterestedObjects:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPendingDoneObjects:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)signalDoneByObject:(id)arg1;
- (void)signalInterestByObject:(id)arg1;
- (void)signalNonInterestByObject:(id)arg1;
- (void)signalStartListening;
- (double)timeout;
- (void)waitWithBlock:(id)arg1;

@end
