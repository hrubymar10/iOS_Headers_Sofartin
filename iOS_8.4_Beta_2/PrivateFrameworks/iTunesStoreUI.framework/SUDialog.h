/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDialog : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertView;
    id _completionBlock;
    ISDialog *_dialog;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) ISDialog * dialog;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

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
