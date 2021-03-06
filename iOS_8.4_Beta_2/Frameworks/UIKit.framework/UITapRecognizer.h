/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITapRecognizer : NSObject <NSCoding> {
    NSMutableSet *_activeTouches;
    double _allowableMovement;
    int _currentNumberOfTaps;
    int _currentNumberOfTouches;
    id _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    } _digitizerLocation;
    struct CGPoint { 
        double x; 
        double y; 
    } _location;
    double _maximumIntervalBetweenSuccessiveTaps;
    double _maximumSingleTapDuration;
    unsigned int _noNewTouches;
    unsigned long long _numberOfTapsRequired;
    unsigned long long _numberOfTouchesRequired;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPoint;
    unsigned int _timerOn;
    NSMutableArray *_touches;
}

@property(assign,readwrite) double allowableMovement;
@property(assign,readwrite) <UITapRecognizerDelegate> * delegate;
@property(assign,readwrite) double maximumIntervalBetweenSuccessiveTaps;
@property(assign,readwrite) double maximumSingleTapDuration;
@property(assign,readwrite) unsigned long long numberOfTapsRequired;
@property(assign,readwrite) unsigned long long numberOfTouchesRequired;
@property(assign,readonly) NSArray * touches;

- (void)_beginInteraction;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (double)_effectiveAllowableMovement;
- (void)_interactionEndedTouch:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_locationInSceneReferenceSpace;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_reset;
- (void)_updateDigitizerLocationForEvent:(id)arg1;
- (double)allowableMovement;
- (void)clearTapTimer;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouchesRequired;
- (void)setAllowableMovement:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
