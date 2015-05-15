/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIPushyLabelView : UIView {
    double _currentAnimationFinishTime;
    NSAttributedString *_currentAttributedText;
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    id _pendingAttributedString;
    unsigned long long _pendingDirection;
    bool _pendingPushPerCharacter;
}

- (void).cxx_destruct;
- (void)_layoutForPushStartWithDirection:(unsigned long long)arg1;
- (void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2;
- (void)_processPendingStringIfNeeded;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(bool)arg2;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (id)currentAttributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(bool)arg3;
- (void)setAttributedTextUnanimated:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFitAttributedText:(id)arg1;

@end
