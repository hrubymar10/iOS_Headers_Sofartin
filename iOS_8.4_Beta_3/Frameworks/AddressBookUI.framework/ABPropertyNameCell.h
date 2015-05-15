/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyNameCell : ABContactCell {
    <ABPropertyCellDelegate> *_delegate;
    UIResponder *_firstResponderItem;
    UITextField *_textField;
}

@property(assign,readwrite) <ABPropertyCellDelegate> * delegate;
@property(assign,readonly) UIResponder * firstResponderItem;
@property(assign,retain) ABPropertyGroupItem * propertyItem;
@property(assign,readonly) UITextField * textField;

- (id)constantConstraints;
- (void)dealloc;
- (id)delegate;
- (id)firstResponderItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)propertyItem;
- (void)setBackgroundColor:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (id)textField;
- (void)textFieldChanged:(id)arg1;

@end