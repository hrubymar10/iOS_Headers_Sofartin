/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptManagementController : CKViewController <CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, FMFMapViewControllerDelegate, UIGestureRecognizerDelegate> {
    CKAttachmentViewController *_attachmentsController;
    CKConversation *_conversation;
    bool _initialLoad;
    CKTranscriptManagementView *_managementView;
    FMFMapViewController *_mapController;
    bool _mapHidden;
    CKTranscriptManagementNameField *_nameField;
    bool _removeMapViewAfterScrollAnimation;
}

@property(assign,retain) CKAttachmentViewController * attachmentsController;
@property(assign,retain) CKConversation * conversation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInitialLoad,assign,readwrite) bool initialLoad;
@property(assign,retain) CKTranscriptManagementView * managementView;
@property(assign,retain) FMFMapViewController * mapController;
@property(assign,readwrite) bool mapHidden;
@property(assign,retain) CKTranscriptManagementNameField * nameField;
@property(assign,readwrite) bool removeMapViewAfterScrollAnimation;
@property(assign,readonly) Class superclass;

- (bool)_conversationHasLeft;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_handleDisplayNameChangedNotification:(id)arg1;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (double)_mapHeightForCurrentBounds;
- (void)_mapViewTouched:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_navigationBarInsets;
- (void)_scrollAttachmentsToTopAnimated:(bool)arg1;
- (void)_updateAttachmentsInsets;
- (void)_updateMapInsets;
- (void*)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (id)attachmentsController;
- (void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2;
- (id)conversation;
- (void)dealloc;
- (void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
- (void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
- (void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithConversation:(id)arg1;
- (bool)isInitialLoad;
- (void)loadView;
- (id)managementView;
- (id)mapController;
- (bool)mapHidden;
- (id)nameField;
- (void)nameField:(id)arg1 didCommitGroupName:(id)arg2;
- (bool)removeMapViewAfterScrollAnimation;
- (void)setAttachmentsController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setInitialLoad:(bool)arg1;
- (void)setManagementView:(id)arg1;
- (void)setMapController:(id)arg1;
- (void)setMapHidden:(bool)arg1;
- (void)setMapHidden:(bool)arg1 animated:(bool)arg2;
- (void)setNameField:(id)arg1;
- (void)setRemoveMapViewAfterScrollAnimation:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end