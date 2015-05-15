/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {
    unsigned long long _itemKind;
    long long _numberOfChildren;
    TKTonePickerController *_parentTonePickerController;
}

@property(setter=_setParentTonePickerController:,assign,readwrite) TKTonePickerController * _parentTonePickerController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned long long itemKind;
@property(assign,readwrite) long long numberOfChildren;
@property(assign,readonly) TKTonePickerSectionItem * parentSectionItem;
@property(assign,readonly) Class superclass;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)_parentTonePickerController;
- (void)_setItemKind:(unsigned long long)arg1;
- (void)_setNumberOfChildren:(long long)arg1;
- (void)_setParentTonePickerController:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (unsigned long long)itemKind;
- (long long)numberOfChildren;
- (id)parentSectionItem;

@end
