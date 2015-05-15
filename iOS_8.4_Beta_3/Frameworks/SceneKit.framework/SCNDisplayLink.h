/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDisplayLink : NSObject {
    bool _asynchronous;
    id _block;
    CADisplayLink *_caDisplayLink;
    long long _frameInterval;
    bool _invalidated;
    double _lastVideoOutput;
    id _owner;
    bool _paused;
    NSObject<OS_dispatch_queue> *_queue;
    int _queuedFrameCount;
    id _reserved;
}

@property(assign,readwrite) long long frameInterval;
@property(getter=isPaused,assign,readwrite) bool paused;

- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1 andDeltaTime:(double)arg2;
- (bool)_isInvalidated;
- (void)_pause;
- (void)_resume;
- (void)_teardown;
- (void)dealloc;
- (long long)frameInterval;
- (id)init;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)invalidate;
- (bool)isPaused;
- (int)queuedFrameCount;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPaused:(bool)arg1 nextFrameTimeHint:(double)arg2;
- (void)willDie;

@end
