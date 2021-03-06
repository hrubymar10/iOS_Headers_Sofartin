/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLKeygenElement : DOMHTMLElement

@property(assign,readwrite) bool autofocus;
@property(assign,copy) NSString * challenge;
@property(assign,readwrite) bool disabled;
@property(assign,readonly) DOMHTMLFormElement * form;
@property(assign,copy) NSString * keytype;
@property(assign,readonly) DOMNodeList * labels;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * type;
@property(assign,copy) NSString * validationMessage;
@property(assign,readonly) DOMValidityState * validity;
@property(assign,readonly) bool willValidate;

- (bool)autofocus;
- (id)challenge;
- (bool)checkValidity;
- (bool)disabled;
- (id)form;
- (id)keytype;
- (id)labels;
- (id)name;
- (void)setAutofocus:(bool)arg1;
- (void)setChallenge:(id)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setKeytype:(id)arg1;
- (void)setName:(id)arg1;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (bool)willValidate;

@end
