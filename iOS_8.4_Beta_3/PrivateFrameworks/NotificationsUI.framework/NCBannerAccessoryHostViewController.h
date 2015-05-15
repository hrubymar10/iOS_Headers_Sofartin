/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface> {
    <NCBannerAccessoryHostViewControllerDelegate> *_delegate;
}

@property (nonatomic) <NCBannerAccessoryHostViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(id)arg4;
+ (id)serviceViewControllerInterface;

- (void)_becomeSticky;
- (void)_dismiss;
- (void)_setSticky:(bool)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
