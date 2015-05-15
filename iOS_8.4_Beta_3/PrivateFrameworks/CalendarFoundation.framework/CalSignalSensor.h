/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSignalSensor : NSObject {
    id _fireBlock;
    int _signal;
    NSObject<OS_dispatch_source> *_signalSource;
}

@property(assign,copy) id fireBlock;
@property(assign,readwrite) int signal;

- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)dealloc;
- (id)description;
- (id)fireBlock;
- (id)initWithSignal:(int)arg1;
- (void)setFireBlock:(id)arg1;
- (void)setSignal:(int)arg1;
- (int)signal;
- (void)startSensor;
- (void)stopSensor;

@end
