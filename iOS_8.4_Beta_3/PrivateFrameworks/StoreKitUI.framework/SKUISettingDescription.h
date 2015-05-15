/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingDescription : NSObject {
    SKUISettingsGroupDescription *_parent;
    SKUIViewElement *_viewElement;
}

@property(assign,readonly) bool allowsSelection;
@property(assign,readwrite) SKUISettingsGroupDescription * parent;
@property(assign,retain) SKUIViewElement * viewElement;

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (bool)allowsEdit;
+ (id)settingDescriptionWithElement:(id)arg1 parent:(id)arg2;
+ (Class)viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteSetting;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)_dispatchUpdate:(id)arg1;
- (void)_hideSetting;
- (bool)_initiallyHidden;
- (bool)_isHidden;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)_reloadSetting;
- (void)_revealSetting;
- (bool)allowsSelection;
- (void)beginEditing;
- (void)cancelEdits;
- (bool)commitEdits:(id)arg1;
- (void)discardEdits;
- (void)handleSelectionOnCompletion:(id)arg1;
- (id)indexPath;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end