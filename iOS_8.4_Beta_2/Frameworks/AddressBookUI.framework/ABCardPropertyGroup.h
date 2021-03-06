/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardPropertyGroup : ABCardGroup {
    NSArray *_contacts;
    NSArray *_deletedItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    bool _isAdded;
    NSArray *_originalEditingItems;
    NSString *_property;
    NSArray *_propertyItems;
    bool _showActionsWhenEmpty;
}

@property(assign,readonly) bool allowsAdding;
@property(assign,copy) NSArray * contacts;
@property(assign,retain) NSArray * deletedItems;
@property(assign,retain) NSArray * editingItems;
@property(getter=isFixedValue,assign,readonly) bool fixedValue;
@property(assign,readwrite) bool isAdded;
@property(assign,readonly) bool modified;
@property(getter=isMultiLine,assign,readonly) bool multiLine;
@property(getter=isMultiValue,assign,readonly) bool multiValue;
@property(assign,readonly) NSString * property;
@property(assign,readonly) NSArray * propertyItems;
@property(assign,readwrite) bool showActionsWhenEmpty;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;

- (bool)_arrayContainsMaxAllowedItems:(id)arg1;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long*)arg4;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(bool)arg3;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)arg1 forEditing:(bool)arg2;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_nextAvailableSocialService;
- (bool)_shoulShowGroupWhenEditing:(bool)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (bool)addEditingItem;
- (bool)allowsAdding;
- (bool)canAddEditingItem;
- (id)contacts;
- (void)dealloc;
- (id)deletedItems;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)emptyLabeledValue;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;
- (bool)isAdded;
- (bool)isFixedValue;
- (bool)isMultiLine;
- (bool)isMultiValue;
- (bool)isRequired;
- (bool)labelsAreUnique;
- (bool)modified;
- (id)nextAvailableLabel;
- (id)property;
- (id)propertyItems;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)removeEditingItem:(id)arg1;
- (void)saveChanges;
- (void)saveChangesForItems:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDeletedItems:(id)arg1;
- (void)setEditingItems:(id)arg1;
- (void)setIsAdded:(bool)arg1;
- (void)setShowActionsWhenEmpty:(bool)arg1;
- (bool)showActionsWhenEmpty;
- (id)supportedLabelsForItem:(id)arg1;

@end
