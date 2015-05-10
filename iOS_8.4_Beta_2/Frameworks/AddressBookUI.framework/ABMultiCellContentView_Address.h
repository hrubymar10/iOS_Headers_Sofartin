/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {
    unsigned long long _entryFieldIndexOfFirstStreetField;
    NSArray *_lineInfos;
    NSMutableArray *_lineSubviews;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _streetRange;
    NSMutableArray *_verticalDividers;
}

+ (long long)calculateStreetRowsForText:(id)arg1;
+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6;
+ (id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2;
+ (unsigned long long)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2;

- (void)addStreetFieldAnimated:(bool)arg1;
- (void)dealloc;
- (unsigned long long)lineIndexOfStreetField:(id)arg1;
- (id)pickerView;
- (id)propertyKeyForTag:(long long)arg1;
- (void)reload;
- (void)reloadFromModel;
- (void)removeStreetFieldAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setPropertyGroupInfo:(id)arg1;
- (id)streetFieldAtLineIndex:(unsigned long long)arg1;
- (long long)tagForPropertyKey:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
