/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUProgressIndicatorView : UIView {
    long long __currentState;
    double __timestampBeganShowing;
    _UIBackdropView *_backgroundView;
    NSArray *_backgroundViewConstraints;
    id _completionHandler;
    double _currentProgress;
    bool _isDeterminate;
    NSArray *_labelAndPieProgressConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSString *_localizedMessage;
    UILabel *_messageLabel;
    NSArray *_messageLabelConstraints;
    PLRoundProgressView *_pieProgressView;
    NSArray *_pieProgressViewConstraints;
    bool _showsBackground;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_spinnerViewConstraints;
    long long _style;
    bool _wantsAnimatedHide;
    bool _wantsImmediateHide;
}

@property(setter=_setCurrentState:,assign,readwrite) long long _currentState;
@property(setter=_setTimestampBeganShowing:,assign,readwrite) double _timestampBeganShowing;
@property(assign,readwrite) double currentProgress;
@property(setter=setDeterminate:,assign,readwrite) bool isDeterminate;
@property(assign,copy) NSString * localizedMessage;
@property(assign,readwrite) bool showsBackground;
@property(assign,readonly) long long style;

- (void).cxx_destruct;
- (long long)_currentState;
- (void)_endShowingProgressIfReady;
- (id)_newBackdropBackgroundView;
- (void)_setCurrentState:(long long)arg1;
- (void)_setTimestampBeganShowing:(double)arg1;
- (double)_timestampBeganShowing;
- (void)_updatePieProgress;
- (void)_updateProgressViewsAnimated:(bool)arg1 completion:(id)arg2;
- (void)_updateSubviewsOrdering;
- (void)beginShowingProgressImmediately:(bool)arg1 animated:(bool)arg2;
- (double)currentProgress;
- (void)endShowingProgressImmediately:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDeterminate;
- (id)localizedMessage;
- (void)setCurrentProgress:(double)arg1;
- (void)setDeterminate:(bool)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setShowsBackground:(bool)arg1;
- (bool)showsBackground;
- (long long)style;
- (void)updateConstraints;

@end
