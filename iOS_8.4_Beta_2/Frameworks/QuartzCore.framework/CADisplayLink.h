/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayLink : NSObject {
    void *_impl;
}

@property(assign,readonly) CADisplay * display;
@property(assign,readonly) double duration;
@property(assign,readwrite) long long frameInterval;
@property(getter=isPaused,assign,readwrite) bool paused;
@property(assign,readonly) double timestamp;
@property(assign,retain) id userInfo;

+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)rc_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;

- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem { struct Display {} *x1; void *x2; SEL x3; void *x4; int x5; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_6_1_1; } x6; struct Condition { struct _opaque_pthread_cond_t { long long x_1_2_1; BOOL x_1_2_2[40]; } x_7_1_1; } x7; struct _opaque_pthread_t {} *x8; id x9; struct Ref<CA::Display::DisplayLink> { struct DisplayLink {} *x_10_1_1; } x10; struct List<const __CFString *> {} *x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; }*)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (double)duration;
- (long long)frameInterval;
- (void)invalidate;
- (bool)isPaused;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (double)timestamp;
- (id)userInfo;

@end
