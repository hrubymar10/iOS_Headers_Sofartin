/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKDisplayLink : NSObject {
    bool _asynchronous;
    float _averageFrameTime;
    id _block;
    CADisplayLink *_caDisplayLink;
    long long _frameCount;
    double _frameCountBeginTime;
    long long _frameInterval;
    unsigned long long _maxQueuedFrameCount;
    unsigned long long _mode;
    bool _paused;
    double _previousFrameTime;
    NSObject<OS_dispatch_queue> *_queue;
    int _queuedFrameCount;
    NSTimer *_timer;
}

@property(assign,readwrite) bool asynchronous;
@property(assign,readwrite) long long frameInterval;
@property(assign,readwrite) unsigned long long maxQueuedFrameCount;
@property(assign,readwrite) unsigned long long mode;
@property(getter=isPaused,assign,readwrite) bool paused;

+ (id)displayLinkWithBlock:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)_caDisplayLinkCallback;
- (void)_callbackForNextFrame:(double)arg1;
- (void)_nsTimerCallback;
- (void)_restart;
- (void)_setup;
- (void)_start;
- (void)_teardown;
- (bool)asynchronous;
- (void)dealloc;
- (long long)frameInterval;
- (id)init;
- (id)initWithBlock:(id)arg1 queue:(id)arg2;
- (bool)isPaused;
- (unsigned long long)maxQueuedFrameCount;
- (unsigned long long)mode;
- (void)setAsynchronous:(bool)arg1;
- (void)setFrameInterval:(long long)arg1;
- (void)setMaxQueuedFrameCount:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPaused:(bool)arg1;

@end
