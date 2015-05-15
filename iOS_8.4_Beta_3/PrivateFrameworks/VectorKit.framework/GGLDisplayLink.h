/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLDisplayLink : NSObject {
    CADisplay *_display;
    CADisplayLink *_displayLink;
    long long _frameInterval;
    bool _paused;
    SEL _selector;
    long long _skippedFrames;
    id _target;
}

@property(assign,retain) CADisplay * display;
@property(assign,readwrite) long long frameInterval;
@property(getter=isPaused,assign,readwrite) bool paused;
@property(assign,readonly) double timestamp;

- (void)_displayLinkFired:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (long long)frameInterval;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)isPaused;
- (void)setDisplay:(id)arg1;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)timestamp;

@end
