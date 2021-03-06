/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProfileSettingDescription : SKUISettingDescription {
    NSString *_appleID;
    NSString *_name;
    UIImage *_photo;
}

@property(assign,readonly) NSString * appleID;
@property(assign,readonly) NSString * name;
@property(assign,readonly) UIImage * photo;

+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)_setPhoto:(id)arg1;
- (id)appleID;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (id)name;
- (id)photo;

@end
