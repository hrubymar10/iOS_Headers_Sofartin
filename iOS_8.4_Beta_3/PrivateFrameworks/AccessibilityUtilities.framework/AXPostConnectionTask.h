/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPostConnectionTask : NSObject {
    bool _didTimeout;
    id _postConnectionBlock;
    AXTimer *_timeoutTimer;
}

@property (nonatomic) bool didTimeout;
@property (nonatomic, copy) id postConnectionBlock;
@property (nonatomic, retain) AXTimer *timeoutTimer;

- (void)_performTask;
- (void)dealloc;
- (bool)didTimeout;
- (id)initWithConnectBlock:(id)arg1 timeout:(double)arg2 accessQueue:(id)arg3;
- (void)performTask;
- (id)postConnectionBlock;
- (void)setDidTimeout:(bool)arg1;
- (void)setPostConnectionBlock:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
