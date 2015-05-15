/* Generated by RuntimeBrowser.
 */

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional

- (bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (bool)textViewShouldBeginEditing:(UITextView *)arg1;
- (bool)textViewShouldEndEditing:(UITextView *)arg1;

@end
