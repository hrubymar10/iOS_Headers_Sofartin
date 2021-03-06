/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUReportIssueViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    RadioTrack *_currentTrack;
    bool _isLowBitrate;
    UIPickerView *_issuePicker;
    NSArray *_issueTypes;
    NSArray *_playbackQueue;
    UITextView *_reportIssueTextField;
    RadioStation *_station;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *issueText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForIssueType:(long long)arg1;
- (void)_dismissPopoverOrSheet;
- (void)_reportIssueCancelAction:(id)arg1;
- (void)_reportIssueDoneAction:(id)arg1;
- (void)dealloc;
- (id)initWithStation:(id)arg1 currentItem:(id)arg2 playbackQueue:(id)arg3;
- (id)issueText;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
