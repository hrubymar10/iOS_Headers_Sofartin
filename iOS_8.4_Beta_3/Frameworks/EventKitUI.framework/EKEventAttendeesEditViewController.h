/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesEditViewController : EKEditItemViewController {
    bool _cancelTapped;
    bool _disableShowingButtons;
    EKEvent *_event;
    EKEventAttendeePicker *_picker;
}

@property(assign,copy) NSArray * attendees;
@property(assign,readwrite) bool disableShowingButtons;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_attendeeFromRecipient:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (id)_firstInvalidRecipientAddress;
- (id)_recipientFromAttendee:(id)arg1;
- (id)attendees;
- (bool)disableShowingButtons;
- (bool)editItemShouldBeAskedForInjectableViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (bool)presentModally;
- (void)setAttendees:(id)arg1;
- (void)setDisableShowingButtons:(bool)arg1;
- (void)setSearchAccountID:(id)arg1;
- (bool)validateAllowingAlert:(bool)arg1;
- (void)viewDidLoad;

@end