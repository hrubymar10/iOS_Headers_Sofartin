/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogOperation : ISOperation {
    ISDialog *_dialog;
    bool _performDefaultActions;
    ISDialogButton *_selectedButton;
    NSArray *_textFieldValues;
    id _userNotification;
}

@property(assign,readwrite) <ISDialogOperationDelegate> * delegate;
@property(assign,retain) ISDialog * dialog;
@property(assign,readwrite) bool performDefaultActions;
@property(assign,retain) ISDialogButton * selectedButton;
@property(assign,readonly) NSArray * textFieldValues;
@property(assign,retain) id userNotification;

+ (id)operationWithDialog:(id)arg1;
+ (id)operationWithError:(id)arg1;

- (void)_handleResponseForNotification:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
- (void)_run;
- (void)_showUserNotification:(id)arg1;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification { }*)arg1;
- (void)cancel;
- (void)dealloc;
- (id)dialog;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (id)init;
- (bool)performDefaultActions;
- (void)run;
- (id)selectedButton;
- (void)setDialog:(id)arg1;
- (void)setPerformDefaultActions:(bool)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)setUserNotification:(id)arg1;
- (id)textFieldValues;
- (id)userNotification;

@end