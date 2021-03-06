/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerController : UIViewController <CKPhotoPickerCollectionViewDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UITableView *_alertTableView;
    NSString *_captureLabelText;
    <CKPhotoPickerControllerDelegate> *_delegate;
    CKPhotoPickerWindow *_photoPickerWindow;
    CKPhotoPickerCollectionViewController *_photosCollectionView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _sourceViewRect;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(assign,retain) UITableView * alertTableView;
@property(assign,retain) NSString * captureLabelText;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKPhotoPickerControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CKPhotoPickerWindow * photoPickerWindow;
@property(assign,retain) CKPhotoPickerCollectionViewController * photosCollectionView;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewRect;
@property(assign,readonly) Class superclass;
@property(assign,retain) UITapGestureRecognizer * tapGestureRecognizer;

- (id)alertTableView;
- (id)captureLabelText;
- (void)dealloc;
- (id)delegate;
- (void)dismissPhotoPicker:(bool)arg1 completion:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoPickerCollectionViewAssetSelectionDidChange:(id)arg1;
- (void)photoPickerCollectionViewPreferredContentSizeDidChange:(id)arg1;
- (id)photoPickerWindow;
- (id)photosCollectionView;
- (void)presentPhotoPickerInWindowWithSourceView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setAlertTableView:(id)arg1;
- (void)setCaptureLabelText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoPickerWindow:(id)arg1;
- (void)setPhotosCollectionView:(id)arg1;
- (void)setSourceViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewRect;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tapGestureRecognizer;
- (void)updatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
