/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate> {
    UIBarButtonItem *_doneButton;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIBarButtonItem * doneButton;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_frecencySearch;
- (void)_updateNavigationButton;
- (bool)alwaysShowSearchResultsTable;
- (void)dealloc;
- (id)doneButton;
- (bool)homogenizePreferredServiceForiMessage;
- (id)initWithConversation:(id)arg1;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChange;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (bool)searchListShouldUsePopvoers;
- (void)setDoneButton:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldSuppressSearchResultsTable;
- (void)viewDidAppearDeferredSetup;
- (void)viewWillAppear:(bool)arg1;

@end