/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate> {
    id _sendBlock;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKComposeRecipientSelectionControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) NSArray * expandedRecipients;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSArray * proposedRecipients;
@property(assign,copy) id sendBlock;
@property(assign,readonly) Class superclass;

- (void)_updateBackfillForNewRecipients;
- (void)addRecipient:(id)arg1;
- (bool)alwaysShowSearchResultsTable;
- (void)atomizeAndInvokeBlock:(id)arg1;
- (void)atomizeAndSendTimeoutHandler;
- (void)dealloc;
- (id)expandedRecipients;
- (bool)homogenizePreferredServiceForiMessage;
- (id)proposedRecipients;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (bool)searchListShouldUsePopvoers;
- (id)sendBlock;
- (void)setSendBlock:(id)arg1;
- (bool)shouldAtomizeToConversationName;
- (bool)shouldSuppressSearchResultsTable;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
