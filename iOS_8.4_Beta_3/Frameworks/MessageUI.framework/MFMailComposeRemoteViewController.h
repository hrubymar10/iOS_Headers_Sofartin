/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost> {
    <MFMailComposeRemoteViewControllerDelegate> *_delegate;
}

@property (nonatomic) <MFMailComposeRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
+ (id)serviceViewControllerInterface;

- (void)bodyFinishedDrawing;
- (id)delegate;
- (void)serviceCompositionFinishedWithResult:(int)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
