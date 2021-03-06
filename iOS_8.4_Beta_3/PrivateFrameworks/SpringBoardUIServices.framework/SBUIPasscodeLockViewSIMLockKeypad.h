/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {
    UIView *_entryFieldFiller;
    bool _isShowingStatus;
    UIView *_statusSpringView;
    UIView *_statusSpringViewParent;
    UILabel *_statusSubtitleView;
    double _targetEntryFieldFillerAlpha;
}

@property (nonatomic, copy) NSString *statusSubtitle;
@property (nonatomic, copy) NSString *statusTitle;

- (double)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1;
- (double)_distanceToFirstLineBaseline:(id)arg1;
- (double)_expectedDistanceBetweenTitleAndSubtitleBaselines;
- (double)_expectedYOffsetBetweenTitleAndSubtitleViews;
- (void)_layoutStatusView;
- (bool)_needsToHideTextFieldForStatus;
- (void)_setHasInput:(bool)arg1;
- (void)_setText:(id)arg1 onLabel:(id)arg2;
- (void)_shakeStatus;
- (bool)_showsPromptLabelOnEntryField;
- (void)_sizeLabel:(id)arg1;
- (id)_statusSubtitleFont;
- (double)_subtitleBaselineYOffsetFromTopOfEntryField;
- (double)_subtitleBaselineYOffsetFromTopOfNumberPad;
- (void)dealloc;
- (void)forceShowStatus:(bool)arg1;
- (id)initWithLightStyle:(bool)arg1;
- (void)layoutSubviews;
- (void)resetForFailedPasscode;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setStatusSubtitle:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (id)statusSubtitle;
- (id)statusTitle;

@end
