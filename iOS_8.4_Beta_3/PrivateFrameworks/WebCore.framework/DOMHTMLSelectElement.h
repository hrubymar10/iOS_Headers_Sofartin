/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLSelectElement : DOMHTMLElement

@property bool autofocus;
@property bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) int length;
@property bool multiple;
@property (copy) NSString *name;
@property (readonly) DOMHTMLOptionsCollection *options;
@property int selectedIndex;
@property int size;
@property (readonly, copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) bool willValidate;

- (void)_activateItemAtIndex:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(bool)arg2;
- (bool)_requiresAccessoryView;
- (bool)_requiresInputView;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (bool)_supportsAutoFill;
- (void)add:(id)arg1 :(id)arg2;
- (void)add:(id)arg1 before:(id)arg2;
- (bool)autofocus;
- (bool)checkValidity;
- (unsigned int)completeLength;
- (id)createPeripheral;
- (bool)disabled;
- (id)form;
- (id)item:(unsigned int)arg1;
- (id)labels;
- (int)length;
- (id)listItemAtIndex:(int)arg1;
- (bool)multiple;
- (id)name;
- (id)namedItem:(id)arg1;
- (bool)nodeCanBecomeFirstResponder;
- (id)options;
- (void)remove:(int)arg1;
- (bool)required;
- (int)selectedIndex;
- (id)selectedOptions;
- (void)setAutofocus:(bool)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setMultiple:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setValue:(id)arg1;
- (int)size;
- (int)structuralComplexityContribution;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (id)value;
- (bool)willValidate;

@end
