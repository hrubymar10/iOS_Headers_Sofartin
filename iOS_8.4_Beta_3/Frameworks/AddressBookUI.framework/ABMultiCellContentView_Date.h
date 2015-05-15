/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {
    ABDateField *_dateField;
}

@property (nonatomic, readonly) NSDate *date;

+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6;

- (id)date;
- (void)dateFieldDateDidChange:(id)arg1;
- (void)dateFieldDidBeginEditing:(id)arg1;
- (void)dateFieldDidEndEditing:(id)arg1;
- (bool)dateFieldShouldBeginEditing:(id)arg1;
- (bool)dateFieldShouldClear:(id)arg1;
- (bool)dateFieldShouldEndEditing:(id)arg1;
- (bool)dateFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (void)reload;
- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)updateSubviewsForNewStateAnimated:(bool)arg1;
- (id)viewForFirstResponder;

@end
