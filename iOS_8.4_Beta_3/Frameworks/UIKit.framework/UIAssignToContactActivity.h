/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImage *_image;
    UIImagePickerController *_imagePickerController;
    ABPeoplePickerNavigationController *_peoplePicker;
    void *_person;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIImage * image;
@property(assign,retain) UIImagePickerController * imagePickerController;
@property(assign,retain) ABPeoplePickerNavigationController * peoplePicker;
@property(assign,readwrite) void* person;
@property(assign,readonly) Class superclass;

- (id)_activityImage;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_willPresentAsFormSheet;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)peoplePicker;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void*)person;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (void)setPerson:(void*)arg1;

@end
