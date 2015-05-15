/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;

@end
