/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {
    UIBarButtonItem *_cancelButton;
    double _currentVibrationComponentDidStartTimeStamp;
    double _currentVibrationProgressDidStartTimestamp;
    <TKVibrationRecorderViewControllerDelegate> *_delegate;
    NSDictionary *_indefiniteVibrationPattern;
    int _mode;
    TKVibrationRecorderViewController *_parentVibrationRecorderViewController;
    TLVibrationPattern *_recordedVibrationPattern;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibrationRecorderView *_vibrationRecorderView;
    TKVibratorController *_vibratorController;
    bool _waitingForEndOfCurrentVibrationComponent;
}

@property(setter=_setCancelButton:,assign,retain) UIBarButtonItem * _cancelButton;
@property(setter=_setCurrentVibrationComponentDidStartTimeStamp:,assign,readwrite) double _currentVibrationComponentDidStartTimeStamp;
@property(setter=_setCurrentVibrationProgressDidStartTimestamp:,assign,readwrite) double _currentVibrationProgressDidStartTimestamp;
@property(setter=_setIndefiniteVibrationPattern:,assign,retain) NSDictionary * _indefiniteVibrationPattern;
@property(setter=_setMode:,assign,readwrite) int _mode;
@property(setter=_setRecordedVibrationPattern:,assign,retain) TLVibrationPattern * _recordedVibrationPattern;
@property(setter=_setSaveButton:,assign,retain) UIBarButtonItem * _saveButton;
@property(setter=_setVibrationNameAlertController:,assign,retain) UIAlertController * _vibrationNameAlertController;
@property(setter=_setVibrationNameAlertSaveAction:,assign,retain) UIAlertAction * _vibrationNameAlertSaveAction;
@property(setter=_setVibrationNameAlertTextField:,assign,retain) UITextField * _vibrationNameAlertTextField;
@property(setter=_setVibrationRecorderView:,assign,retain) TKVibrationRecorderView * _vibrationRecorderView;
@property(setter=_setVibratorController:,assign,retain) TKVibratorController * _vibratorController;
@property(getter=_isWaitingForEndOfCurrentVibrationComponent,setter=_setWaitingForEndOfCurrentVibrationComponent:,assign,readwrite) bool _waitingForEndOfCurrentVibrationComponent;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <TKVibrationRecorderViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) TKVibrationRecorderViewController * parentVibrationRecorderViewController;
@property(assign,readonly) Class superclass;

- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (id)_cancelButton;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpVibrationNameAlertController;
- (double)_currentVibrationComponentDidStartTimeStamp;
- (double)_currentVibrationProgressDidStartTimestamp;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_finishedWithRecorder;
- (id)_indefiniteVibrationPattern;
- (bool)_isWaitingForEndOfCurrentVibrationComponent;
- (int)_mode;
- (id)_recordedVibrationPattern;
- (id)_saveButton;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_setCancelButton:(id)arg1;
- (void)_setCurrentVibrationComponentDidStartTimeStamp:(double)arg1;
- (void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1;
- (void)_setIndefiniteVibrationPattern:(id)arg1;
- (void)_setMode:(int)arg1;
- (void)_setRecordedVibrationPattern:(id)arg1;
- (void)_setSaveButton:(id)arg1;
- (void)_setVibrationNameAlertController:(id)arg1;
- (void)_setVibrationNameAlertSaveAction:(id)arg1;
- (void)_setVibrationNameAlertTextField:(id)arg1;
- (void)_setVibrationRecorderView:(id)arg1;
- (void)_setVibratorController:(id)arg1;
- (void)_setWaitingForEndOfCurrentVibrationComponent:(bool)arg1;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(bool)arg1;
- (void)_updateStateSaveButtonInAlert;
- (id)_vibrationNameAlertController;
- (id)_vibrationNameAlertSaveAction;
- (id)_vibrationNameAlertTextField;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (id)_vibrationRecorderView;
- (id)_vibratorController;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)delegate;
- (id)initWithVibratorController:(id)arg1;
- (void)loadView;
- (id)parentVibrationRecorderViewController;
- (void)setDelegate:(id)arg1;
- (void)setParentVibrationRecorderViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end