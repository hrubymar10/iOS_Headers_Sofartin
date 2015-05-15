/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {
    <CKReaderViewControllerDelegate> *_delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKReaderViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * messageGUID;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSAttributedString * text;
@property(assign,retain) UITextView * textView;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleRange;

- (bool)ckCanDismissWhenSuspending;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)messageGUID;
- (void)setDelegate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)text;
- (id)textView;
- (void)viewWillDisappear:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRange;

@end