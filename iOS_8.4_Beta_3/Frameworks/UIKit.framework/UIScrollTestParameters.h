/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollTestParameters : NSObject {
    int _axis;
    NSString *_currentTest;
    int _delta;
    CADisplayLink *_displayLink;
    int _iterations;
    int _scrollLength;
    float _startOffset;
}

@property(assign,readwrite) int axis;
@property(assign,retain) NSString * currentTest;
@property(assign,readwrite) int delta;
@property(assign,retain) CADisplayLink * displayLink;
@property(assign,readonly) float endOffset;
@property(assign,readwrite) int iterations;
@property(assign,readwrite) int scrollLength;
@property(assign,readwrite) float startOffset;

- (int)axis;
- (id)currentTest;
- (void)dealloc;
- (int)delta;
- (id)displayLink;
- (float)endOffset;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6;
- (int)iterations;
- (int)scrollLength;
- (void)setAxis:(int)arg1;
- (void)setCurrentTest:(id)arg1;
- (void)setDelta:(int)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIterations:(int)arg1;
- (void)setScrollLength:(int)arg1;
- (void)setStartOffset:(float)arg1;
- (float)startOffset;

@end