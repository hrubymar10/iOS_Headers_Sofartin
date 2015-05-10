/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityProductHeaderLockupView : MusicEntityAbstractLockupView <UITextViewDelegate> {
    MPUTextButton *_addSongsButton;
    UIButton *_addToLibraryButton;
    long long _addToLibraryButtonState;
    UIView *_artworkEditingOverlayView;
    _UIBackdropView *_backdropView;
    UIImageView *_backgroundImageView;
    UIView *_backgroundOverlayView;
    UIView *_bottomHairlineView;
    MusicNowPlayingFloatingButton *_cameraButton;
    UIButton *_contextualActionsButton;
    <MusicEntityProductHeaderLockupViewDelegate> *_delegate;
    MusicDownloadStatusSashView *_downloadStatusSashView;
    MPUTextButton *_editButton;
    NSString *_editableText;
    UIView *_editableTextBottomHairlineView;
    UILabel *_editableTextHeaderLabel;
    UITextView *_editableTextPlaceholderView;
    UITextView *_editableTextView;
    bool _editing;
    UIView *_placeholderBackgroundView;
    MusicEntityViewProductHeaderLockupContentDescriptor *_productHeaderLockupContentDescriptor;
    bool _shouldIgnoreArtworkImageChanges;
}

@property(assign,readwrite) long long addToLibraryButtonState;
@property(assign,readonly) UIButton * contextualActionsButton;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicEntityProductHeaderLockupViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * editableText;
@property(getter=isEditing,assign,readwrite) bool editing;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MusicEntityViewProductHeaderLockupContentDescriptor * productHeaderLockupContentDescriptor;
@property(assign,readonly) Class superclass;

+ (double)_buttonHeight;
+ (double)maximumRowHeightForHorizontalLockupContentDescriptor:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_addSongsButtonTapped:(id)arg1;
- (id)_addToLibraryButton;
- (void)_addToLibraryButtonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forActionButton:(id)arg2;
- (void)_artworkViewImageDidChange;
- (void)_cameraButtonTapped:(id)arg1;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
- (void)_editButtonTapped:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveLayoutMargins;
- (id)_genericActionButtonWithImageName:(id)arg1;
- (id)_genericActionButtonWithText:(id)arg1;
- (void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1;
- (void)_layoutButtonsWithAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insetContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(bool)arg1 editingViewsAlpha:(double)arg2;
- (void)_layoutSubviewsForCompactHorizontalSizeClass;
- (void)_layoutSubviewsForRegularHorizontalSizeClass;
- (id)_newTextView;
- (void)_setFrameOfActionButton:(id)arg1 basedOnAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insetContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 customHeight:(double)arg4 maximumHeightForCentering:(double)arg5;
- (bool)_shouldEnableArtworkViewUserInteraction;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateColorsOfGenericActionButton:(id)arg1;
- (void)_updateEditableTextPlaceholderViewVisibility;
- (void)_updateTextView:(id)arg1 forTextDescriptor:(id)arg2 textColor:(id)arg3;
- (long long)addToLibraryButtonState;
- (id)contextualActionsButton;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)editableText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (id)productHeaderLockupContentDescriptor;
- (void)setAddToLibraryButtonState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEntityValueProvider:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProductHeaderLockupContentDescriptor:(id)arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end