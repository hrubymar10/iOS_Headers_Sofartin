/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoCompleteState : NSObject <UIActionSheetDelegate, WBUCreditCardCaptureViewControllerDelegate> {
    long long _action;
    bool _canAutoComplete;
    id _creditCardCaptureCompletionHandler;
    WBUFormDataController *_dataController;
    NSDictionary *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    bool _gatheringFormValues;
    NSMutableDictionary *_matchesByCompletion;
    NSArray *_potentialCredentialMatches;
    NSDictionary *_textFieldMetadata;
}

@property(assign,readwrite) WBUFormDataController * dataController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <WBUFormAutoFillFrameHandle> * frame;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * textFieldValue;
@property(assign,readonly) UIView<WBUFormAutoFillWebView> * webView;

+ (bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;

- (void).cxx_destruct;
- (long long)_action;
- (void)_autoFillCreditCardData;
- (void)_autoFillFormWithCreditCardData:(id)arg1;
- (void)_autoFillValues:(id)arg1;
- (bool)_canAutoFillCreditCardData;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_ensureFormMetadata;
- (void)_gatherFormValuesWithCompletionHandler:(id)arg1;
- (void)_generateAndSuggestPassword;
- (id)_matchesForPartialString:(id)arg1;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (long long)_passwordGenerationAssistanceAction;
- (bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (bool)_textFieldLooksLikeCreditCardFormField;
- (void)_updateAutoFillButton;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)autoFill;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2;
- (void)autoFillValues:(id)arg1 andFocusField:(id)arg2;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (id)dataController;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id)arg1;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (bool)hasCurrentSuggestions;
- (id)initWithFormDataController:(id)arg1;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setDataController:(id)arg1;
- (id)suggestionsForString:(id)arg1;
- (id)textFieldValue;
- (id)titleOfAutoFillButton;
- (id)webView;

@end
