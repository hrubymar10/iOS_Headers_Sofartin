/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLDismissableViewController, PLPhotoCommentEntryViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    PLManagedAsset *_asset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _availableBounds;
    _UIBackdropView *_backdropView;
    UIBarButtonItem *_cancelButton;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    NSCache *_commentsHeightCache;
    UIView *_containerView;
    bool _editMode;
    PLPhotoCommentEntryView *_entryView;
    UIImageView *_gradientView;
    bool _isCompact;
    PLCloudSharedComment *_justInsertedComment;
    bool _justTappedSmileButton;
    double _keyboardOverlap;
    CAGradientLayer *_maskLayer;
    bool _shouldAdjustInitialScrollPosition;
    UIView *_tableContainerView;
    UITableView *_tableView;
    bool _temporaryKeyboardHideReshow;
}

@property(assign,retain) PLManagedAsset * asset;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableBounds;
@property(assign,readonly) UIBarButtonItem * cancelButton;
@property(assign,readwrite) <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * draftComment;
@property(assign,readwrite) bool editMode;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCompact;
@property(assign,retain) PLCloudSharedComment * justInsertedComment;
@property(assign,readonly) Class superclass;

- (void)_addCommentButtonTapped:(id)arg1;
- (void)_adjustInitialScrollPosition:(bool)arg1;
- (bool)_adjustTextEntrySize;
- (bool)_checkAndAlertMaxCommentsReachedWhenFinalizing:(bool)arg1;
- (id)_firstUnreadCloudComment;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_postCommentValidated:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredViewSizeInContainerSize:(struct CGSize { double x1; double x2; })arg1 forInterfaceOrientation:(long long)arg2 tableViewSize:(struct CGSize { double x1; double x2; }*)arg3;
- (void)_smileButtonTapped:(id)arg1;
- (void)_startWatchingKeyboard;
- (void)_stopWatchingKeyboard;
- (double)_tableViewHeightForWidth:(double)arg1 interfaceOrientation:(long long)arg2;
- (void)_updateLayerMaskWithBoundsChange;
- (id)asset;
- (long long)assetOwnerCommentSection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableBounds;
- (id)cancelButton;
- (void)cancelCurrentAction:(id)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (bool)checkAndAlertMaxLikesReached;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)commentsControllerDelegate;
- (void)dealloc;
- (id)draftComment;
- (bool)editMode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCompact;
- (id)justInsertedComment;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (long long)postCommentSection;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)scrollToComment:(id)arg1 animated:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setDraftComment:(id)arg1;
- (void)setEditMode:(bool)arg1;
- (void)setEditMode:(bool)arg1 shouldBecomeFirstResponder:(bool)arg2;
- (void)setIsCompact:(bool)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (void)setRasterization:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldShowCommentPostingUI;
- (bool)showAssetOwnerSection;
- (long long)smileCommentSection;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)textCommentSection;
- (void)updateForSizeChange;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;

@end
