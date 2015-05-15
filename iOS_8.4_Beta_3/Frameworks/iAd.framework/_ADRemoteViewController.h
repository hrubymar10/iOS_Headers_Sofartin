/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface _ADRemoteViewController : _UIRemoteViewController {
    bool _hasBeenDismissed;
    unsigned long long _remoteSupportedInterfaceOrientations;
}

@property(assign,readwrite) bool hasBeenDismissed;
@property(assign,readwrite) unsigned long long remoteSupportedInterfaceOrientations;

+ (id)serviceViewControllerInterface;

- (bool)hasBeenDismissed;
- (unsigned long long)remoteSupportedInterfaceOrientations;
- (void)setHasBeenDismissed:(bool)arg1;
- (void)setRemoteSupportedInterfaceOrientations:(unsigned long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
