/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactPhotoView : UIControl <QLPreviewControllerDataSource, QLPreviewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UILabel *_addPhotoLabel;
    UIImageView *_attributionImageView;
    CNContact *_contact;
    UIImageView *_contactImageView;
    UIImage *_currentImage;
    UIImage *_currentThumbnailImage;
    <ABPresenterDelegate> *_delegate;
    UILabel *_editPhotoLabel;
    bool _editing;
    bool _isAnimatingBounce;
    bool _modified;
    NSDictionary *_photoPickerInfo;
    <ABContactPhotoViewDelegate> *_photoViewDelegate;
    UIGestureRecognizer *_tapGesture;
}

@property(assign,retain) UILabel * addPhotoLabel;
@property(assign,retain) UIImageView * attributionImageView;
@property(assign,retain) CNContact * contact;
@property(assign,retain) UIImageView * contactImageView;
@property(assign,retain) UIImage * currentImage;
@property(assign,retain) UIImage * currentThumbnailImage;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <ABPresenterDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) UILabel * editPhotoLabel;
@property(getter=isEditing,assign,readwrite) bool editing;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isAnimatingBounce;
@property(assign,readwrite) bool modified;
@property(assign,retain) NSDictionary * photoPickerInfo;
@property(assign,readwrite) <ABContactPhotoViewDelegate> * photoViewDelegate;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIGestureRecognizer * tapGesture;

+ (id)supportedPasteboardTypes;

- (void)_bounceSmallPhoto;
- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_presentFullScreenPhoto:(id)arg1;
- (void)_presentPhotoEditingSheet;
- (void)_zoomContactPhoto;
- (id)addPhotoLabel;
- (id)attributionImageView;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contact;
- (id)contactImageView;
- (void)copy:(id)arg1;
- (id)currentImage;
- (id)currentImageData;
- (id)currentImageDataAndCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)currentThumbnailImage;
- (void)dealloc;
- (id)delegate;
- (void)disablePhotoTapGesture;
- (id)editPhotoLabel;
- (bool)hasPhoto;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAnimatingBounce;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)longPressGesture:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (bool)modified;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)paste:(id)arg1;
- (id)photoPickerInfo;
- (id)photoViewDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewPath;
- (void)resetPhoto;
- (void)saveEdits;
- (void)setAddPhotoLabel:(id)arg1;
- (void)setAttributionImageView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentThumbnailImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditPhotoLabel:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlightedFrame:(bool)arg1;
- (void)setIsAnimatingBounce:(bool)arg1;
- (void)setModified:(bool)arg1;
- (void)setPhotoPickerInfo:(id)arg1;
- (void)setPhotoViewDelegate:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tapGesture;
- (void)tapGesture:(id)arg1;
- (void)tintColorDidChange;
- (void)updateAttributionBadge;
- (void)updateFontSizes;
- (void)updatePhoto;
- (void)updatePhotoWithImage:(id)arg1;

@end
