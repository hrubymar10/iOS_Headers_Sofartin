/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
    double _allowableMovement;
    long long _buttonType;
    unsigned int _cancelPastAllowableMovement;
    id _enoughTimeElapsed;
    unsigned int _gotEnoughTaps;
    unsigned int _gotTooMany;
    unsigned int _gotTouchEnd;
    id _imp;
    double _minimumPressDuration;
    unsigned long long _numberOfTouchesRequired;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPointScreen;
    id _tooMuchTimeElapsed;
    NSArray *_touches;
}

@property(setter=_setButtonType:,assign,readwrite) long long _buttonType;
@property(assign,readwrite) double allowableMovement;
@property(assign,readwrite) bool cancelPastAllowableMovement;
@property(assign,readonly) struct CGPoint { double x1; double x2; } centroid;
@property(assign,readwrite) double delay;
@property(assign,readwrite) double minimumPressDuration;
@property(assign,readwrite) unsigned long long numberOfTapsRequired;
@property(assign,readwrite) unsigned long long numberOfTouchesRequired;
@property(assign,readonly) struct CGPoint { double x1; double x2; } startPoint;
@property(assign,retain) NSArray * touches;

- (long long)_buttonType;
- (void)_interactionsEndedWithValidTouches:(bool)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_setButtonType:(long long)arg1;
- (void)_startTapFinishedTimer;
- (double)_touchSloppinessFactor;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelPastAllowableMovement;
- (struct CGPoint { double x1; double x2; })centroid;
- (struct CGPoint { double x1; double x2; })centroidScreen;
- (void)clearTimer;
- (void)dealloc;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)minimumPressDuration;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouches;
- (unsigned long long)numberOfTouchesRequired;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelPastAllowableMovement:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setTouches:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)startTimer;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end