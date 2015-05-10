/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKEmergencyCardTableItem : NSObject {
    _HKMedicalIDData *_data;
    bool _isInEditMode;
    UIViewController *_owningViewController;
}

@property(assign,retain) _HKMedicalIDData * data;
@property(assign,readonly) bool isInEditMode;
@property(assign,readwrite) UIViewController * owningViewController;

- (void).cxx_destruct;
- (id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2;
- (bool)canEditRowAtIndex:(long long)arg1;
- (void)commitEditing;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)data;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (id)init;
- (id)initInEditMode:(bool)arg1;
- (bool)isInEditMode;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfRows;
- (id)owningViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setData:(id)arg1;
- (void)setOwningViewController:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;

@end
