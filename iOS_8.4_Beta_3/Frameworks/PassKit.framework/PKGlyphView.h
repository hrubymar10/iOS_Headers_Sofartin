/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKGlyphView : UIView {
    PKCheckGlyphView *_checkView;
    UIImage *_customImage;
    UIImageView *_customImageView;
    <PKGlyphViewDelegate> *_delegate;
    PKFingerprintGlyphView *_fingerprintView;
    double _lastAnimationWillFinish;
    struct { 
        unsigned int showingPhone : 1; 
        unsigned int phoneRotated : 1; 
    } _layoutFlags;
    double _phoneAspectRatio;
    PKPhoneGlyphView *_phoneView;
    NSString *_phoneWiggleAnimationKey;
    bool _phoneWiggling;
    UIColor *_primaryColor;
    long long _priorState;
    UIColor *_secondaryColor;
    long long _state;
    NSMutableArray *_transitionCompletionHandlers;
    unsigned long long _transitionIndex;
    bool _transitioning;
}

@property(assign,retain) UIImage * customImage;
@property(assign,readwrite) <PKGlyphViewDelegate> * delegate;
@property(assign,copy) UIColor * primaryColor;
@property(assign,copy) UIColor * secondaryColor;
@property(assign,readonly) long long state;

- (void)_endPhoneWiggle;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id)arg1;
- (void)_executeTransitionCompletionHandlers:(bool)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint { double x1; double x2; })_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (void)_startPhoneWiggle;
- (void)_updateCheckViewStateAnimated:(bool)arg1;
- (void)_updateCustomImageViewOpacityAnimated:(bool)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updatePhoneWiggleIfNecessary;
- (id)customImage;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setCustomImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2 completionHandler:(id)arg3;
- (long long)state;

@end
