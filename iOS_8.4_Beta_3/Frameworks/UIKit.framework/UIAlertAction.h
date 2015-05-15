/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertAction : NSObject <NSCopying> {
    UIAlertController *__alertController;
    NSString *__descriptiveText;
    <_UIAlertActionRepresenting> *__representer;
    bool _checked;
    UIViewController *_contentViewController;
    bool _enabled;
    id _handler;
    UIImage *_image;
    UIColor *_imageTintColor;
    bool _isDefault;
    id _shouldDismissHandler;
    id _simpleHandler;
    long long _style;
    NSString *_title;
    long long _titleTextAlignment;
    UIColor *_titleTextColor;
}

@property(setter=_setAlertController:,assign,readwrite) UIAlertController * _alertController;
@property(setter=_setDescriptiveText:,assign,copy) NSString * _descriptiveText;
@property(setter=_setIsDefault:,assign,readwrite) bool _isDefault;
@property(setter=_setRepresenter:,assign,readwrite) <_UIAlertActionRepresenting> * _representer;
@property(getter=_contentViewController,setter=_setContentViewController:,assign,retain) UIViewController * contentViewController;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,copy) id handler;
@property(assign,retain) UIImage * image;
@property(assign,copy) id shouldDismissHandler;
@property(assign,copy) id simpleHandler;
@property(assign,readwrite) long long style;
@property(assign,copy) NSString * title;

+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(id)arg5 shouldDismissHandler:(id)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id)arg4 shouldDismissHandler:(id)arg5;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id)arg3;

- (id)_alertController;
- (id)_contentViewController;
- (id)_descriptiveText;
- (void)_didAddContentViewController;
- (id)_imageTintColor;
- (bool)_isChecked;
- (bool)_isDefault;
- (id)_representer;
- (void)_setAlertController:(id)arg1;
- (void)_setChecked:(bool)arg1;
- (void)_setContentViewController:(id)arg1;
- (void)_setDescriptiveText:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setIsDefault:(bool)arg1;
- (void)_setRepresenter:(id)arg1;
- (void)_setTitleTextAlignment:(long long)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (long long)_titleTextAlignment;
- (id)_titleTextColor;
- (void)_willAddContentViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)handler;
- (id)image;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldDismissHandler:(id)arg1;
- (void)setSimpleHandler:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)shouldDismissHandler;
- (id)simpleHandler;
- (long long)style;
- (id)title;

@end
