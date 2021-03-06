/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKICSPreviewController : NSObject {
    int _actionsState;
    bool _allowsEditing;
    bool _allowsImport;
    bool _allowsInvalidProperties;
    bool _allowsSubitems;
    bool _allowsToDos;
    long long _cancelButtonType;
    UIViewController *_contentViewController;
    EKEventViewController *_currentImport;
    EKEventStore *_eventStore;
    bool _hasCustomCancelButton;
    bool _importing;
    EKICSPreviewModel *_model;
    <EKICSPreviewControllerDelegate> *_previewDelegate;
}

@property(assign,readwrite) int actionsState;
@property(assign,readwrite) bool allowsEditing;
@property(assign,readwrite) bool allowsImport;
@property(assign,readwrite) bool allowsInvalidProperties;
@property(assign,readwrite) bool allowsSubitems;
@property(assign,readwrite) bool allowsToDos;
@property(assign,readonly) bool isImporting;
@property(assign,readwrite) <EKICSPreviewControllerDelegate> * previewDelegate;
@property(assign,readonly) unsigned long long totalEventCount;
@property(assign,readonly) unsigned long long unimportedEventCount;

- (void).cxx_destruct;
- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_databaseChanged:(id)arg1;
- (void)_updateCancelButton;
- (int)actionsState;
- (bool)allowsEditing;
- (bool)allowsImport;
- (bool)allowsInvalidProperties;
- (bool)allowsSubitems;
- (bool)allowsToDos;
- (void)calendarChooserDidCancel:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)dealloc;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(bool)arg2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)importAllIntoCalendar:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (bool)isImporting;
- (id)popoverContentController;
- (void)presentCalendarChooserForController:(id)arg1;
- (id)previewDelegate;
- (void)removeCancelButton;
- (void)setActionsState:(int)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsImport:(bool)arg1;
- (void)setAllowsInvalidProperties:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setAllowsToDos:(bool)arg1;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setPreviewDelegate:(id)arg1;
- (unsigned long long)totalEventCount;
- (unsigned long long)unimportedEventCount;
- (id)viewController;

@end
