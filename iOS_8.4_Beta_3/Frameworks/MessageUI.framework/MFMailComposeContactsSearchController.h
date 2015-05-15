/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    NSNumber *_corecipientSearchTaskID;
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    bool _foundAnySearchResults;
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_taskID;
    unsigned long long _waitingOnSearchResultsCount;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSNumber * taskID;

- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)_finishSearch;
- (void)beganNetworkActivity;
- (void)cancelSearch;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)searchWithString:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTaskID:(id)arg1;
- (id)taskID;

@end