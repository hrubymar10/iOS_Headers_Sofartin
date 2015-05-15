/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicAlertActionAccessoryViewController : UIViewController {
    UIView *_accessoryView;
    UILabel *_actionDescriptiveLabel;
    NSString *_actionDescriptiveText;
    NSString *_actionTitle;
    UILabel *_actionTitleLabel;
    UIColor *_actionTitleTextColor;
    UIAlertControllerVisualStyle *_visualStyle;
}

@property(assign,retain) UIView * accessoryView;
@property(assign,copy) NSString * actionDescriptiveText;
@property(assign,copy) NSString * actionTitle;
@property(assign,retain) UIColor * actionTitleTextColor;

- (void).cxx_destruct;
- (void)_configureActionDescriptiveLabel;
- (void)_configureActionTitleLabel;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_invalidateVisualStyle;
- (id)_visualStyle;
- (id)accessoryView;
- (id)actionDescriptiveText;
- (id)actionTitle;
- (id)actionTitleTextColor;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setAccessoryView:(id)arg1;
- (void)setActionDescriptiveText:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionTitleTextColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
