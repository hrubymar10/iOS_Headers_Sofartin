/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {
    <RCCurrentRecordingViewControllerDelegate> *_delegate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RCCurrentRecordingViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)currentRecordingAVStateDidChange:(id)arg1;
- (void)currentRecordingDidEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
