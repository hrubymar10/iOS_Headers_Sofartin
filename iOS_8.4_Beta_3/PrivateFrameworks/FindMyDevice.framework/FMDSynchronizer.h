/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDSynchronizer : NSObject {
    NSString *_info;
    NSObject<OS_dispatch_semaphore> *_sem;
    double _timeout;
    bool _timeoutOccurred;
}

@property(assign,retain) NSString * info;
@property(assign,retain) NSObject<OS_dispatch_semaphore> * sem;
@property(assign,readwrite) double timeout;
@property(assign,readwrite) bool timeoutOccurred;

- (void).cxx_destruct;
- (id)info;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;
- (id)loggingID;
- (id)sem;
- (void)setInfo:(id)arg1;
- (void)setSem:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutOccurred:(bool)arg1;
- (void)signal;
- (double)timeout;
- (bool)timeoutOccurred;
- (void)wait;

@end
