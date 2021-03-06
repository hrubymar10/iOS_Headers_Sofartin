/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDialog : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertView;
    id _completionBlock;
    ISDialog *_dialog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ISDialog *dialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alertView;
- (void)_completeWithButtonIndex:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)dialog;
- (id)initWithDialog:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (void)showWithCompletionBlock:(id)arg1;

@end
