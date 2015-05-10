/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingViewController : UIViewController {
    <MPAudioVideoRoutingViewControllerDelegate> *_delegate;
    UINavigationController *_navigationController;
    MPAudioVideoRoutingTableViewController *_tableViewController;
}

@property(assign,readwrite) <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (bool)hasWirelessDisplayRoutes;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
