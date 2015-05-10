/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXThreadTimerTask : NSObject {
    id _block;
    bool active;
    bool cancel;
    bool finished;
}

@property(getter=isActive,assign,readwrite) bool active;
@property(assign,copy) id block;
@property(getter=isCancelled,assign,readwrite) bool cancel;
@property(getter=isFinished,assign,readwrite) bool finished;

- (id)block;
- (void)dealloc;
- (bool)isActive;
- (bool)isCancelled;
- (bool)isFinished;
- (void)run;
- (void)runAfterDelay:(float)arg1;
- (void)setActive:(bool)arg1;
- (void)setBlock:(id)arg1;
- (void)setCancel:(bool)arg1;
- (void)setFinished:(bool)arg1;

@end