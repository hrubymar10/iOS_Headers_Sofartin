/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate> {
    UITextField *_accountTextField;
    id _completionHandler;
    UITextField *_passwordTextField;
    long long _style;
}

@property (nonatomic, copy) NSString *accountTextFieldPlaceholder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (id)accountTextFieldPlaceholder;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setAccountTextFieldPlaceholder:(id)arg1;
- (long long)style;

@end
