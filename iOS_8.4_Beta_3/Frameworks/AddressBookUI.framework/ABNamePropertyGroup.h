/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNamePropertyGroup : ABAbstractPropertyGroup {
    <ABPrimaryValueDelegate> *_delegate;
    ABUIPerson *_preferredPerson;
    NSMutableArray *_properties;
    NSMutableSet *_propertiesWithMultipleValuePlaceholders;
    NSMutableDictionary *_valuesByPersonByProperty;
}

@property (nonatomic) <ABPrimaryValueDelegate> *delegate;
@property (nonatomic, readonly) ABUIPerson *preferredPerson;

- (void)_addItemForProperty:(int)arg1 duringReload:(bool)arg2;
- (id)_allPeople;
- (void)_clearAllCachedInfo;
- (id)_fakePersonFromCurrentProperties;
- (long long)_indexForProperty:(int)arg1;
- (id)_indexPathForIndexPath:(id)arg1;
- (void)_insertItemAtIndex:(long long)arg1 forProperty:(int)arg2 duringReload:(bool)arg3;
- (bool)_isEmptyValue:(id)arg1 forProperty:(int)arg2;
- (id)_labelAtIndex:(long long)arg1;
- (id)_newLocalizedPlaceholderForProperty:(int)arg1;
- (int)_propertyAtIndex:(unsigned long long)arg1;
- (void)_removeMultipleValuePlaceholderForProperty:(int)arg1;
- (void)_removeValueForProperty:(int)arg1;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;
- (bool)_showsMultipleValuePlaceholderForProperty:(int)arg1;
- (id)_valueForProperty:(int)arg1 person:(id)arg2;
- (void)addNameProperty:(int)arg1;
- (bool)autofillValuesForRow:(unsigned long long)arg1;
- (bool)canSave;
- (id)copyCompositeName;
- (id)copyCompositeNameIgnoringOrganization:(bool)arg1;
- (id)copyCompositePhoneticName;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)keyboardSettingsForRow:(unsigned long long)arg1;
- (struct __CFArray { }*)nameProperties;
- (unsigned long long)namePropertiesCount;
- (id)placeholderTextForRow:(unsigned long long)arg1;
- (id)preferredPerson;
- (id)primaryValueForProperty:(int)arg1;
- (int)property;
- (int)propertyForRow:(unsigned long long)arg1;
- (bool)refreshPreferredPerson;
- (void)reloadFromModel;
- (unsigned long long)rowForProperty:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 atRow:(unsigned long long)arg2;
- (bool)showsMultipleValuePlaceholderAtRow:(unsigned long long)arg1;
- (bool)showsMultipleValuePlaceholderForProperty:(int)arg1;
- (void)updateRecord;
- (id)valueForProperty:(int)arg1;
- (id)valueForRow:(unsigned long long)arg1 whenEditing:(bool)arg2;

@end
