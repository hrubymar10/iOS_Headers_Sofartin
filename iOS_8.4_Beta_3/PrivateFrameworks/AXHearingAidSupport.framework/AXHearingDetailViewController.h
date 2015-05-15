/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingDetailViewController : PSListController {
    AXRemoteHearingAidDevice *_device;
    bool _isLiveListening;
}

@property (nonatomic, retain) AXRemoteHearingAidDevice *device;

- (id)_modeSpecifiers;
- (id)_volumeSpecifiers;
- (id)device;
- (id)deviceSpecifiers;
- (id)disconnectedSpecifiers;
- (id)init;
- (void)liveListenToggle:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })programsRange;
- (void)setDevice:(id)arg1;
- (id)specifierForKey:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLiveListenCell:(id)arg1;
- (void)updateView;
- (void)viewDidDisappear:(bool)arg1;

@end
