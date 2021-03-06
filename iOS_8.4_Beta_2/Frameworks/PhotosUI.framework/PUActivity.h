/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivity : UIActivity <PUActivity> {
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    PUActivityItemSourceController *_itemSourceController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) PUActivityItemSourceController * itemSourceController;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)itemSourceController;
- (id)pu_activityImageNamed:(id)arg1;
- (id)pu_activitySettingsImageNamed:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end
