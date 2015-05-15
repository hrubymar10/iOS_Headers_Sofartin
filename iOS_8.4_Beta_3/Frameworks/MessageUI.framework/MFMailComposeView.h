/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeView : UITransitionView <MFComposeBodyFieldDelegate, MFComposeHeaderViewDelegate, MFDragContext, MFMailComposeContactsSearchControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextContentViewDelegate> {
    MFMailComposeRecipientView *_activeRecipientView;
    MFMailComposeRecipientView *_bccField;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFMailComposeRecipientView *_ccField;
    <MFComposeRecipientTextViewDelegate> *_composeRecipientViewDelegate;
    UIView *_contentView;
    struct CGSize { 
        double width; 
        double height; 
    } _currentContentSize;
    NSInvocation *_delayedPopoverInvocation;
    UIResponder *_firstResponderBeforeSheet;
    UIView *_fromAddressPickerBackgroundView;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    MFComposeFromView *_fromField;
    unsigned int _hasAppeared;
    UIView *_headerView;
    MFComposeImageSizeView *_imageSizeField;
    unsigned int _isAnimationDisabled;
    unsigned int _isChangingRecipients;
    unsigned int _isClosing;
    unsigned int _isDraggingRecipients;
    unsigned int _isForEditing;
    unsigned int _isLoading;
    unsigned int _isRotating;
    unsigned int _isShowingFromAddressPickerWheel;
    unsigned int _isShowingPeoplePicker;
    double _keyboardIntersection;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    MFComposeMultiView *_multiField;
    unsigned long long _notifyingBodyField;
    double _offsetBeforeSearch;
    unsigned long long _options;
    UIResponder *_pinningResponder;
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    MFMailComposeContactsSearchController *_searchController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    MFSearchResultsViewController *_searchViewController;
    UIView *_shadowView;
    unsigned int _shouldShowOptionalHeaders;
    MFComposeSubjectView *_subjectField;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property(getter=isAnimationDisabled,assign,readwrite) bool animationDisabled;
@property(assign,readonly) MFMailComposeRecipientView * bccField;
@property(assign,readonly) MFComposeBodyField * bodyField;
@property(assign,readonly) MFComposeScrollView * bodyScroller;
@property(assign,readonly) MFComposeTextContentView * bodyTextView;
@property(assign,readonly) MFMailComposeRecipientView * ccField;
@property(getter=isChangingRecipients,assign,readwrite) bool changingRecipients;
@property(assign,readwrite) <MFComposeRecipientTextViewDelegate> * composeRecipientDelegate;
@property(assign,readwrite) <MFMailComposeViewDelegate> * composeViewDelegate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) MFComposeFromView * fromField;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MFComposeImageSizeView * imageSizeField;
@property(assign,readwrite) bool isForEditing;
@property(getter=isLoading,assign,readwrite) bool loading;
@property(assign,readonly) MFComposeMultiView * multiField;
@property(assign,readwrite) <MFMailPopoverManagerDelegate> * popoverOwner;
@property(assign,readonly) MFSearchResultsViewController * searchViewController;
@property(getter=isSearching,assign,readonly) bool searching;
@property(getter=isShowingPeoplePicker,assign,readwrite) bool showingPeoplePicker;
@property(assign,readonly) MFComposeSubjectView * subjectField;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MFMailComposeRecipientView * toField;
@property(assign,readwrite) <MFMailComposeToFieldDelegate> * toFieldDelegate;

- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (id)_focusedRecipientView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFromAddressPicker;
- (double)_heightForBottomView;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withPinFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(bool)arg1;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 searchResultsWereDismissed:(bool)arg4;
- (void)_layoutSubviewsWithActiveRecipientView:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_multiFieldClicked;
- (void)_presentDelayedPopover;
- (id)_searchResultsTable;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 wasSearching:(bool)arg5;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateOptionalHeaderVisibilityForceVisible:(bool)arg1;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (id)ccField;
- (bool)chooseSelectedSearchResult;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(bool)arg2 clear:(bool)arg3;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(bool)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientDelegate;
- (id)composeViewDelegate;
- (void)dealloc;
- (void)didAppear;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissSearchResults;
- (void)dragBeganInWindow:(id)arg1;
- (void)dragEnded;
- (id)dragScrollView;
- (id)dragWindow;
- (bool)endEditing:(bool)arg1;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (bool)isAnimationDisabled;
- (bool)isChangingRecipients;
- (bool)isForEditing;
- (bool)isFromAddressPickerVisible;
- (bool)isKeyboardVisible;
- (bool)isLoading;
- (bool)isSearchResultsPopoverVisible;
- (bool)isSearching;
- (bool)isShowingPeoplePicker;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (void)menuDidHide;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)popoverOwner;
- (bool)presentSearchResults;
- (bool)presentSearchResults:(id)arg1;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (id)searchViewController;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)setAnimationDisabled:(bool)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setChangingRecipients:(bool)arg1;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setFromAddressPickerVisible:(bool)arg1;
- (void)setFromAddressPickerVisible:(bool)arg1 animated:(bool)arg2;
- (void)setIsForEditing:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1 animate:(bool)arg2;
- (void)setLoading:(bool)arg1;
- (void)setPopoverOwner:(id)arg1;
- (void)setRecipientFieldsEditable:(bool)arg1 animated:(bool)arg2;
- (void)setScrollsToTop:(bool)arg1;
- (void)setShowingPeoplePicker:(bool)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (id)subjectField;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)toField;
- (id)toFieldDelegate;
- (void)toggleImageSizeFieldIfNecessary;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end