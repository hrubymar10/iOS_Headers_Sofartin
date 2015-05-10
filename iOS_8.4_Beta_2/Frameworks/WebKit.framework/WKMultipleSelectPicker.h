/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKMultipleSelectPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, WKFormControl> {
    bool _allowsMultipleSelection;
    double _fontSize;
    double _layoutWidth;
    double _maximumTextWidth;
    unsigned long long _singleSelectionIndex;
    long long _textAlignment;
    WKContentView *_view;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (long long)findItemIndexAt:(int)arg1;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;

@end
