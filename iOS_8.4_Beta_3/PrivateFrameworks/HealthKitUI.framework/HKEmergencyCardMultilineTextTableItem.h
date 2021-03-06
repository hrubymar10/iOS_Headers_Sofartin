/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {
    HKMedicalIDEditorMultilineStringCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_labelCell;
    <HKEmergencyCardRowHeightChangeDelegate> *_rowHeightChangeDelegate;
}

@property (nonatomic) <HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate;

- (void).cxx_destruct;
- (id)_cell;
- (void)_configureEditableCell:(id)arg1;
- (id)_editableCell;
- (id)_labelCell;
- (id)_multilineStringValue;
- (id)_placeholderText;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)rowHeightChangeDelegate;
- (void)setData:(id)arg1;
- (void)setRowHeightChangeDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;

@end
