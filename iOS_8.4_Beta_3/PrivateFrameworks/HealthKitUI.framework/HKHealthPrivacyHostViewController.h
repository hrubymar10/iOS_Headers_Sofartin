/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostViewControllerDelegate> *_delegate;
}

@property(assign,readwrite) <HKHealthPrivacyHostViewControllerDelegate> * delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
