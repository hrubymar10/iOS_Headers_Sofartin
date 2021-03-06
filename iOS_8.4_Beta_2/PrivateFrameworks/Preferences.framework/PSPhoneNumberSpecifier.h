/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate> {
    NSString *_countryCode;
}

@property(assign,retain) NSString * countryCode;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)countryCode;
- (void)dealloc;
- (void)setCountryCode:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;

@end
