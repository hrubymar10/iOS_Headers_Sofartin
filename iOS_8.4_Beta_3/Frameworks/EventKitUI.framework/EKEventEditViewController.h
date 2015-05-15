/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditViewController : UINavigationController {
    <EKEventEditViewDelegate> *_editViewDelegate;
    EKEventEditor *_editor;
    EKEvent *_event;
    NSString *_eventId;
    EKEventStore *_store;
    EKEventEditViewController *_strongSelf;
    int _transitionForModalViewPresentation;
}

@property(assign,readwrite) bool canHideDoneAndCancelButtons;
@property(assign,readwrite) <EKEventEditViewDelegate> * editViewDelegate;
@property(assign,retain) EKEventEditor * editor;
@property(assign,retain) UIColor * editorBackgroundColor;
@property(assign,readwrite) double editorNavBarLeftContentInset;
@property(assign,readwrite) double editorNavBarRightContentInset;
@property(assign,retain) EKEvent * event;
@property(assign,retain) EKEventStore * eventStore;
@property(assign,readwrite) bool scrollToNotes;
@property(assign,readwrite) bool showAttachments;
@property(assign,retain) EKEventEditViewController * strongSelf;
@property(assign,readwrite) int transitionForModalViewPresentation;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_storeChanged:(id)arg1;
- (bool)canHideDoneAndCancelButtons;
- (void)cancelEditing;
- (void)completeAndSave;
- (void)dealloc;
- (id)editViewDelegate;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)editorBackgroundColor;
- (double)editorNavBarLeftContentInset;
- (double)editorNavBarRightContentInset;
- (id)event;
- (id)eventStore;
- (void)handleTapOutside;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)refreshStartAndEndDates;
- (bool)saveWithSpan:(int)arg1 animated:(bool)arg2;
- (bool)scrollToNotes;
- (void)setCanHideDoneAndCancelButtons:(bool)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEditorNavBarLeftContentInset:(double)arg1;
- (void)setEditorNavBarRightContentInset:(double)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(bool)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setTransitionForModalViewPresentation:(int)arg1;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (id)strongSelf;
- (unsigned long long)supportedInterfaceOrientations;
- (int)transitionForModalViewPresentation;
- (bool)willPresentDialogOnSave;

@end