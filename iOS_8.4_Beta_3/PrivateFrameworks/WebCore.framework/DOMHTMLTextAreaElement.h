/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property(assign,copy) NSString * accessKey;
@property(assign,readwrite) bool autofocus;
@property(assign,readwrite) int cols;
@property(assign,copy) NSString * defaultValue;
@property(assign,readwrite) bool disabled;
@property(assign,readonly) DOMHTMLFormElement * form;
@property(assign,copy) NSString * name;
@property(assign,readwrite) bool readOnly;
@property(assign,readwrite) int rows;
@property(assign,readwrite) int selectionEnd;
@property(assign,readwrite) int selectionStart;
@property(assign,copy) NSString * type;
@property(assign,copy) NSString * value;
@property(assign,readonly) bool willValidate;

- (int)_autocapitalizeType;
- (bool)_isEdited;
- (bool)_requiresAccessoryView;
- (bool)_requiresInputView;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (bool)_supportsAutoFill;
- (id)_textFormElement;
- (id)accessKey;
- (id)autocapitalize;
- (bool)autocorrect;
- (bool)autofocus;
- (bool)checkValidity;
- (int)cols;
- (id)defaultValue;
- (id)dirName;
- (bool)disabled;
- (id)endPosition;
- (id)form;
- (bool)isEditing;
- (bool)isTextControl;
- (id)labels;
- (int)maxLength;
- (id)name;
- (bool)nodeCanBecomeFirstResponder;
- (id)placeholder;
- (bool)readOnly;
- (bool)required;
- (int)rows;
- (void)select;
- (id)selectionDirection;
- (int)selectionEnd;
- (int)selectionStart;
- (void)setAccessKey:(id)arg1;
- (void)setAutocapitalize:(id)arg1;
- (void)setAutocorrect:(bool)arg1;
- (void)setAutofocus:(bool)arg1;
- (void)setCols:(int)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDirName:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setMaxLength:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRangeText:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setReadOnly:(bool)arg1;
- (void)setRequired:(bool)arg1;
- (void)setRows:(int)arg1;
- (void)setSelectionDirection:(id)arg1;
- (void)setSelectionEnd:(int)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setSelectionStart:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setValue:(id)arg1;
- (void)setWrap:(id)arg1;
- (id)startPosition;
- (int)structuralComplexityContribution;
- (id)textInputTraits;
- (unsigned int)textLength;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (id)value;
- (bool)willValidate;
- (id)wrap;

@end
