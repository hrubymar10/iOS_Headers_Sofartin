/* Generated by RuntimeBrowser.
 */

@protocol WLCardViewDelegate <NSObject>

@optional

- (bool)passView:(PKPassView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (bool)passViewBackGrowsCentered:(PKPassView *)arg1;
- (void)passViewDidFlip:(PKPassView *)arg1 animated:(bool)arg2;
- (bool)passViewShouldFlip:(PKPassView *)arg1;
- (void)passViewTapped:(PKPassView *)arg1;

@end
