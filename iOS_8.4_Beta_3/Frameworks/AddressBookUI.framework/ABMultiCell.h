/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCell : ABChameleonCell {
    ABMultiCellContentView *_abMultiCellContentView;
    bool _editingDisabled;
}

@property (getter=isEditingDisabled, nonatomic) bool editingDisabled;
@property (nonatomic, retain) ABMultiCellContentView *multiCellContentView;

- (void)_addMultiCellContentViewIfNeeded;
- (bool)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (bool)isEditingDisabled;
- (void)layoutSubviews;
- (id)multiCellContentView;
- (void)setAbCellStyle:(int)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingDisabled:(bool)arg1;
- (void)setMultiCellContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
