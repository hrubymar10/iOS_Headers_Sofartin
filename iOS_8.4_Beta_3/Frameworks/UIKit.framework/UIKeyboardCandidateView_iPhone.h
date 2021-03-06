/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    UIKeyboardCandidateGridHeader *_header;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;

- (void)_handleKeyboardShowOrHide:(id)arg1;
- (void)_setupKeyboardInteraction;
- (bool)_shouldShowHideKeyboard;
- (bool)_shouldUseFullMetrics;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
